/*
 * XREFs of KiGetNextIdleSearchTargetInGeneration @ 0x1403EBAC0
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiGetNextIdleSearchTargetInGeneration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned __int16 v11; // si
  __int64 v13; // rbx
  signed __int64 v14; // rbp
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  int v18; // r10d
  unsigned int j; // edx
  unsigned __int64 v20; // rax
  unsigned int v21; // r10d
  int v22; // r10d
  unsigned int i; // edx
  unsigned __int64 v24; // rax
  unsigned int v25; // r10d
  ULONG_PTR v26; // r9
  __int64 v27; // rax
  unsigned __int8 v28; // cl
  __int64 v30; // [rsp+A0h] [rbp+18h]

  v6 = a3 + 16;
  v7 = *(_QWORD *)(a2 + 192);
  v9 = 32LL * *(unsigned __int16 *)(a1 + 1056) + a1 + 1064;
  v10 = 0LL;
  v11 = 0;
  v30 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 >= *(_WORD *)(a3 + 10) )
      {
        v28 = 0;
        v27 = 0LL;
        v11 = -1;
        goto LABEL_19;
      }
      v13 = v6 + 16LL * v11;
      v14 = *(_QWORD *)(v13 + 8);
      v15 = v14;
      v16 = *(_QWORD *)(KiSubNodes + 8LL * *(unsigned __int16 *)(v9 + 2LL * v11));
      if ( v16 != v7 || (KiCacheAwareScheduling & 2) == 0 || (*(_QWORD *)(a2 + 36464) & v14) == 0 )
        break;
      v15 = *(_QWORD *)(a2 + 36464) & v14;
LABEL_14:
      v22 = 0;
      for ( i = *(unsigned __int8 *)(a2 + 209) % (unsigned int)__popcnt(v15) + 1; i; --i )
      {
        _BitScanForward64(&v24, v15);
        v22 += v24 + 1;
        v15 >>= (unsigned __int8)v24 + 1;
      }
      v25 = v22 - 1;
      v26 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(v16 + 136) + v25)];
      if ( v14 == _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v13 + 8),
                    v14 & ~*(_QWORD *)(v26 + 36416),
                    v14) )
      {
        v27 = *(_QWORD *)(v26 + 36424);
        if ( !v27 )
          KeBugCheckEx(0x200u, 1uLL, v25 | ((unsigned __int64)*(unsigned __int16 *)(v16 + 136) << 8), v26, 0LL);
        v28 = 1;
        goto LABEL_19;
      }
LABEL_10:
      _mm_pause();
      v9 = v30;
    }
    if ( v14 )
      goto LABEL_14;
    v17 = *(_QWORD *)v13;
    if ( v16 == v7 && (KiCacheAwareScheduling & 2) != 0 && (*(_QWORD *)(a2 + 36464) & v17) != 0 )
      break;
    if ( v17 )
      goto LABEL_7;
    v9 = v30;
    ++v11;
  }
  v17 &= *(_QWORD *)(a2 + 36464);
LABEL_7:
  v18 = 0;
  for ( j = *(unsigned __int8 *)(a2 + 209) % (unsigned int)__popcnt(v17) + 1; j; --j )
  {
    _BitScanForward64(&v20, v17);
    v18 += v20 + 1;
    v17 >>= (unsigned __int8)v20 + 1;
  }
  v21 = v18 - 1;
  if ( !_interlockedbittestandreset64((volatile signed __int32 *)v13, v21) )
    goto LABEL_10;
  if ( !KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(v16 + 136) + v21)] )
    KeBugCheckEx(
      0x200u,
      2uLL,
      v21 | ((unsigned __int64)*(unsigned __int16 *)(v16 + 136) << 8),
      *((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(v16 + 136) + v21),
      0LL);
  v27 = 0LL;
  v28 = 1;
  v10 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(v16 + 136) + v21)];
LABEL_19:
  *a4 = v11;
  *a5 = v10;
  *a6 = v27;
  return v28;
}
