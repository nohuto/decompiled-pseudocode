/*
 * XREFs of MiWalkVaCheckCommon @ 0x140295E20
 * Callers:
 *     MiResetAccessBitPte @ 0x140294320 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14049EAD0 (MiSimpleAgePte.c)
 * Callees:
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, _QWORD *a5)
{
  if ( !a4 && ((a3[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  if ( (a3[5] & 0x10000000000LL) == 0 && (__int64)a3[1] > 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(a1, a2, a3[1] | 0x8000000000000000uLL) )
      *a5 = *a2;
  }
  return 1LL;
}
