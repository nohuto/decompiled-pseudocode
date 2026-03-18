/*
 * XREFs of MiReduceShareCount @ 0x140340D70
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x1402FB5D0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeleteRotateVa @ 0x14039106C (MiDeleteRotateVa.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C5D98 (MiZeroAndFlushGoodCitizen.c)
 * Callees:
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v2 = (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) = v2 ^ (v2 ^ *(_QWORD *)(a1 + 24)) & 0xC000000000000000uLL;
  if ( v2 )
    return 2LL;
  else
    return MiPfnShareCountIsZero(a1, 0LL);
}
