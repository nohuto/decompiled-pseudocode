/*
 * XREFs of MiReduceShareCount @ 0x140206F10
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x14020EFE0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404BFA78 (MiZeroAndFlushGoodCitizen.c)
 * Callees:
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
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
    return MiPfnShareCountIsZero();
}
