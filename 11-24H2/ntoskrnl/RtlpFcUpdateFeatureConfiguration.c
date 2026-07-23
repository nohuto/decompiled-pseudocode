/*
 * XREFs of RtlpFcUpdateFeatureConfiguration @ 0x140AA0444
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     RtlpIsImmutableFeatureConfigurationPriority @ 0x1405F023C (RtlpIsImmutableFeatureConfigurationPriority.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpFcApplyUpdateAndAddFeature @ 0x14078CD44 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14078CDB8 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93B4C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCompareFeatureToUpdate @ 0x140A93CB0 (RtlpFcCompareFeatureToUpdate.c)
 */

NTSTATUS __fastcall RtlpFcUpdateFeatureConfiguration(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        size_t a4,
        void *a5,
        size_t *a6)
{
  unsigned __int64 v9; // r9
  unsigned int *v10; // rdx
  size_t v11; // r8
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  NTSTATUS result; // eax
  _DWORD *v17; // rsi
  _OWORD *v18; // r8
  unsigned __int64 v19; // rbx
  size_t v20; // rbp
  unsigned __int64 v21; // rax
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __int128 *v24; // r14
  unsigned int *v25; // r15
  int v26; // eax
  __int128 *v27; // r8
  __int128 *v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // rbx
  size_t v31; // rdi
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  Size = 0LL;
  qsort(a3, a4, 0x20uLL, (int (__cdecl *)(const void *, const void *))RtlpFcCompareUpdates);
  v9 = 1LL;
  v10 = a3;
  while ( v9 < a4 )
  {
    if ( v10[8] == *v10 && v10[9] == v10[1] )
      return -1073741811;
    ++v9;
    v10 += 8;
  }
  v11 = 0LL;
  v12 = a3 + 1;
  while ( v11 < a4 )
  {
    v13 = v12[6];
    if ( (v13 & 4) != 0 && v13 != 4
      || *v12 > 0xF
      || RtlpIsImmutableFeatureConfigurationPriority(*v12)
      || *(_DWORD *)(v14 + 4) > 2u
      || *(_DWORD *)(v14 + 8) > 1u
      || *(_BYTE *)(v14 + 12) >= 0x40u
      || *(_DWORD *)(v14 + 16) >= 4u )
    {
      return -1073741811;
    }
    v11 = v15 + 1;
    v12 = (unsigned int *)(v14 + 32);
  }
  result = RtlpFcCalculateRequiredSizeForNewFeatureTable(a1, (__int64)a3, a4, &Size);
  if ( result >= 0 )
  {
    if ( !Size )
    {
      *a6 = 0LL;
      return result;
    }
    if ( Size > *a6 )
    {
      *a6 = Size;
      return -2147483643;
    }
    v17 = a5;
    memset_0(a5, 0, Size);
    *v17 = 0;
    v18 = v17 + 1;
    v19 = 0LL;
    Size = (size_t)(v17 + 1);
    v20 = 0LL;
    if ( a1 )
    {
      v21 = (unsigned int)*a1;
      v22 = a1 + 1;
      if ( (_DWORD)v21 )
      {
        LODWORD(v23) = *a1;
        v24 = (__int128 *)(a1 + 1);
        v25 = a3;
        while ( 1 )
        {
          v21 = (unsigned int)v23;
          if ( v20 >= a4 )
          {
LABEL_34:
            v22 = a1 + 1;
            break;
          }
          v26 = RtlpFcCompareFeatureToUpdate(v24, v25);
          if ( v26 )
          {
            if ( v26 != 1 )
            {
              ++v19;
              *v27 = *v24;
              ++*v17;
              v18 = v27 + 1;
              Size = (size_t)v18;
              ++v24;
              goto LABEL_33;
            }
            RtlpFcCreateAndAddFeatureFromUpdate((__int64)v25, &Size, (__int64)v17);
          }
          else
          {
            RtlpFcApplyUpdateAndAddFeature((__int64)v25, v24, (__int64)&Size, v17);
            ++v19;
            ++v24;
          }
          v18 = (_OWORD *)Size;
          ++v20;
          v25 += 8;
LABEL_33:
          v23 = (unsigned int)*a1;
          v21 = v23;
          if ( v19 >= v23 )
            goto LABEL_34;
        }
      }
      if ( v19 < v21 )
      {
        v28 = (__int128 *)&v22[4 * v19];
        do
        {
          v29 = *v28;
          ++v19;
          ++v28;
          *v18 = v29;
          ++*v17;
          ++v18;
        }
        while ( v19 < (unsigned int)*a1 );
        Size = (size_t)v18;
      }
    }
    if ( v20 < a4 )
    {
      v30 = (__int64)&a3[8 * v20];
      v31 = a4 - v20;
      do
      {
        RtlpFcCreateAndAddFeatureFromUpdate(v30, &Size, (__int64)v17);
        v30 += 32LL;
        --v31;
      }
      while ( v31 );
    }
    return 0;
  }
  return result;
}
