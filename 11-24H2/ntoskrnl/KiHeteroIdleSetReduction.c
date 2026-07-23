/*
 * XREFs of KiHeteroIdleSetReduction @ 0x14032AA50
 * Callers:
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E0130 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     KiReduceAffinityToRankListMaximums @ 0x14032AD30 (KiReduceAffinityToRankListMaximums.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiHeteroIdleSetReduction(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
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
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 result; // rax
  unsigned __int8 v29; // r8
  __int64 v30; // rax
  _OWORD v31[4]; // [rsp+20h] [rbp-68h] BYREF

  v5 = 0LL;
  v7 = a3;
  memset(v31, 0, sizeof(v31));
  if ( ((KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0)
    && ((*(_DWORD *)(a4 + 4) - 1) & 0xFFFFFFFA) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    {
      if ( KeHeteroSystemQos && (a3 & *(_QWORD *)(a1 + 328)) != 0 )
        v7 = a3 & *(_QWORD *)(a1 + 328);
      RtlCopyVolatileMemory(v31, (const void *)(a1 + 640), 0x40uLL);
      v10 = 0;
      v11 = 0LL;
      v12 = 0;
      v13 = 0LL;
      do
      {
        if ( ((1LL << v12) & v7) != 0 )
        {
          v19 = *((_BYTE *)v31 + v13);
          if ( v19 == v10 )
          {
            v11 |= 1LL << v13;
          }
          else if ( v19 > v10 )
          {
            v10 = *((_BYTE *)v31 + v13);
            v11 = 1LL << v12;
          }
        }
        ++v12;
        ++v13;
      }
      while ( v12 < 0x40u );
      v7 = v11;
    }
    RtlCopyVolatileMemory(v31, (const void *)(a1 + 704), 0x40uLL);
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( ((1LL << v16) & v7) != 0 )
      {
        v18 = *((_BYTE *)v31 + v17);
        if ( v18 == v14 )
        {
          v15 |= 1LL << v17;
        }
        else if ( v18 > v14 )
        {
          v14 = *((_BYTE *)v31 + v17);
          v15 = 1LL << v16;
        }
      }
      ++v16;
      ++v17;
    }
    while ( v16 < 0x40u );
    v7 = v15;
  }
  v20 = v7 & *(_QWORD *)(a1 + 24);
  if ( !v20 )
    v20 = v7;
  RtlCopyVolatileMemory(v31, (const void *)(a1 + 576), 0x40uLL);
  v21 = -1;
  v22 = 0;
  v23 = 0LL;
  do
  {
    if ( (v20 & (1LL << v22)) != 0 )
    {
      v29 = *((_BYTE *)v31 + v23);
      if ( v29 == v21 )
      {
        v5 |= 1LL << v23;
      }
      else if ( v29 < v21 )
      {
        v21 = *((_BYTE *)v31 + v23);
        v5 = 1LL << v22;
      }
    }
    ++v22;
    ++v23;
  }
  while ( v22 < 0x40u );
  v24 = 0;
  v25 = *a5 & v5;
  if ( !v25 )
  {
    v25 = a5[1] & v5;
    if ( !v25 )
      goto LABEL_25;
    v24 = 1;
  }
  v5 = v25;
LABEL_25:
  if ( KeHeteroSystemQos )
  {
    v30 = *(int *)(a4 + 4);
    if ( (*(_QWORD *)(a1 + 8 * v30 + 256) & v5) != 0 )
      v5 &= *(_QWORD *)(a1 + 8 * v30 + 256);
  }
  if ( v24 )
  {
    v26 = (unsigned __int64)*(unsigned __int8 *)(a4 + 16) << 6;
    if ( (unsigned int)(*(_DWORD *)(a4 + 12) - 3) <= 1 )
      v27 = *(_QWORD *)(a1 + 208) + v26;
    else
      v27 = *(_QWORD *)(a1 + 200) + v26;
    v5 = KiReduceAffinityToRankListMaximums(v5, v27);
  }
  result = a2[25] & v5;
  if ( !result )
  {
    result = a2[4556] & v5;
    if ( !result )
    {
      result = a2[4559] & v5;
      if ( !result )
      {
        if ( (a2[4558] & v5) != 0 )
          return a2[4558] & v5;
        return v5;
      }
    }
  }
  return result;
}
