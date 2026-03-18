/*
 * XREFs of KiHeteroIdleSetReduction @ 0x1403121E0
 * Callers:
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E8E10 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     KiReduceAffinityToRankListMaximums @ 0x1403124B0 (KiReduceAffinityToRankListMaximums.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiHeteroIdleSetReduction(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rsi
  unsigned __int8 v10; // r10
  __int64 v11; // r9
  unsigned __int8 v12; // cl
  __int64 v13; // rdx
  unsigned __int8 v14; // r10
  __int64 v15; // r9
  unsigned __int8 v16; // cl
  __int64 v17; // rdx
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // r8
  __int64 v20; // rbx
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // cl
  __int64 v23; // rdx
  char v24; // dl
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 result; // rax
  unsigned __int8 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  _BYTE v31[64]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(v31, 0, sizeof(v31));
  v9 = 0LL;
  if ( ((KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0)
    && ((*(_DWORD *)(a4 + 4) - 1) & 0xFFFFFFFA) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    {
      if ( KeHeteroSystemQos && (a3 & *(_QWORD *)(a1 + 328)) != 0 )
        a3 &= *(_QWORD *)(a1 + 328);
      RtlCopyVolatileMemory(v31, (const void *)(a1 + 640), 0x40uLL);
      v10 = 0;
      v11 = 0LL;
      v12 = 0;
      v13 = 0LL;
      do
      {
        if ( ((1LL << v12) & a3) != 0 )
        {
          v19 = v31[v13];
          if ( v19 == v10 )
          {
            v11 |= 1LL << v13;
          }
          else if ( v19 > v10 )
          {
            v10 = v31[v13];
            v11 = 1LL << v12;
          }
        }
        ++v12;
        ++v13;
      }
      while ( v12 < 0x40u );
      a3 = v11;
    }
    RtlCopyVolatileMemory(v31, (const void *)(a1 + 704), 0x40uLL);
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( ((1LL << v16) & a3) != 0 )
      {
        v18 = v31[v17];
        if ( v18 == v14 )
        {
          v15 |= 1LL << v17;
        }
        else if ( v18 > v14 )
        {
          v14 = v31[v17];
          v15 = 1LL << v16;
        }
      }
      ++v16;
      ++v17;
    }
    while ( v16 < 0x40u );
    a3 = v15;
  }
  v20 = a3 & *(_QWORD *)(a1 + 24);
  if ( !v20 )
    v20 = a3;
  RtlCopyVolatileMemory(v31, (const void *)(a1 + 576), 0x40uLL);
  v21 = -1;
  v22 = 0;
  v23 = 0LL;
  do
  {
    if ( (v20 & (1LL << v22)) != 0 )
    {
      v28 = v31[v23];
      if ( v28 == v21 )
      {
        v9 |= 1LL << v23;
      }
      else if ( v28 < v21 )
      {
        v21 = v31[v23];
        v9 = 1LL << v22;
      }
    }
    ++v22;
    ++v23;
  }
  while ( v22 < 0x40u );
  v24 = 0;
  v25 = *a5 & v9;
  if ( !v25 )
  {
    v25 = a5[1] & v9;
    if ( !v25 )
      goto LABEL_27;
    v24 = 1;
  }
  v9 = v25;
LABEL_27:
  if ( KeHeteroSystemQos )
  {
    v26 = *(int *)(a4 + 4);
    if ( (*(_QWORD *)(a1 + 8 * v26 + 256) & v9) != 0 )
      v9 &= *(_QWORD *)(a1 + 8 * v26 + 256);
  }
  if ( v24 )
  {
    v29 = (unsigned __int64)*(unsigned __int8 *)(a4 + 16) << 6;
    if ( (unsigned int)(*(_DWORD *)(a4 + 12) - 3) <= 1 )
      v30 = *(_QWORD *)(a1 + 208) + v29;
    else
      v30 = *(_QWORD *)(a1 + 200) + v29;
    v9 = KiReduceAffinityToRankListMaximums(v9, v30);
  }
  result = a2[25] & v9;
  if ( !result )
  {
    result = a2[4556] & v9;
    if ( !result )
    {
      result = a2[4559] & v9;
      if ( !result )
      {
        if ( (a2[4558] & v9) != 0 )
          return a2[4558] & v9;
        return v9;
      }
    }
  }
  return result;
}
