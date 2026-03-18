/*
 * XREFs of MiReduceShareCount @ 0x14023EDC0
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x140235020 (MiDeleteNonPagedPoolTail.c)
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C6618 (MiZeroAndFlushGoodCitizen.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 */

__int64 __fastcall MiReduceShareCount(unsigned __int64 a1, __int64 a2)
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
