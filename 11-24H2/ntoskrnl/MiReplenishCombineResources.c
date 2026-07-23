/*
 * XREFs of MiReplenishCombineResources @ 0x1403447DC
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiReplenishCombineResources(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // r11
  char v6; // dl
  __int64 *v7; // rax
  __int64 SlabPage; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx

  v1 = *a1;
  if ( !a1[37] )
  {
    v9 = 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    v10 = (_QWORD *)(v1 + 72);
    v11 = *(__int64 **)(v1 + 72);
    if ( v11 != (__int64 *)(v1 + 72) )
    {
      v9 = *(_QWORD *)(v1 + 72);
      if ( (_QWORD *)v11[1] != v10 || (v12 = *v11, *(_QWORD *)(v12 + 8) != v9) )
        __fastfail(3u);
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      ++*(_DWORD *)((v9 & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 88), 0x11u);
    if ( !v9 )
      return 3221226029LL;
    a1[37] = v9;
  }
  if ( a1[38] )
    return 0LL;
  v4 = *((_DWORD *)a1 + 82);
  v5 = a1[39];
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)a1[40], 1u) % (unsigned int)dword_140E2DD00[HIWORD(v4) & 3];
  v7 = a1 + 39;
  if ( v5 )
    v7 = 0LL;
  SlabPage = MiGetSlabPage(*(_QWORD *)v1, 6, v4 ^ (unsigned __int8)(v4 ^ v6), 0x11u, v7, 0);
  if ( SlabPage != -1 )
  {
    a1[38] = 48 * SlabPage - 0x220000000000LL;
    return 0LL;
  }
  result = 3221226029LL;
  if ( (unsigned __int64)a1[39] <= 1 )
    return 3221225626LL;
  return result;
}
