/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x18009F358
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009F230 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18009F48C (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800A04A8 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v2; // al
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  __int64 v12; // rax
  char CachedFeatureEnabledState; // al
  int v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28) - 2;
  v16 = 0LL;
  *a2 = 1;
  v4 = *(unsigned int *)(a1 + 24);
  v17 = 0LL;
  v5 = wil_RtlStagingConfig_QueryFeatureState(&v16, v4, v2 <= 1u);
  HIDWORD(v18) = 0;
  v6 = (unsigned __int8)v16 & (unsigned __int8)-(v5 != 0) & 3;
  if ( v6 )
  {
    v7 = 0;
    if ( (_DWORD)v16 == 2 )
      v7 = 64;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v8 = v7 | ((_DWORD)v17 != 0 ? 0x400 : 0) | (HIDWORD(v17) != 0 ? 0x800 : 0) | (v6 << 7);
  v9 = v8 ^ (v8 >> 6) & 1;
  LODWORD(v18) = v9;
  if ( (v7 & 0x40) != 0 )
  {
    v10 = *(_QWORD **)(a1 + 32);
    if ( v10 )
    {
      LODWORD(v18) = v8 ^ (v8 >> 6) & 1;
      do
      {
        v12 = *v10;
        if ( !*v10 )
          return v18;
        if ( *(_BYTE *)(v12 + 30) || *(_BYTE *)(v12 + 29) )
        {
          if ( (v9 & 1) == 0 )
            goto LABEL_14;
          v15 = *(_BYTE *)(v12 + 31) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v12, *v10);
          if ( (v9 & 1) == 0 )
            goto LABEL_14;
          v15 = (CachedFeatureEnabledState & 1) == 0;
        }
        if ( !v15 )
        {
          v14 = 1;
          goto LABEL_15;
        }
LABEL_14:
        v14 = 0;
LABEL_15:
        ++v10;
        v9 = v14 | v9 & 0xFFFFFFFE;
        LODWORD(v18) = v9;
      }
      while ( (v9 & 1) != 0 );
    }
  }
  return v18;
}
