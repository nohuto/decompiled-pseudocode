/*
 * XREFs of PsInsertPermanentSiloContext @ 0x1409E1C90
 * Callers:
 *     <none>
 * Callees:
 *     PsInsertPermanentSiloContextEx @ 0x1409E20A4 (PsInsertPermanentSiloContextEx.c)
 */

__int64 __fastcall PsInsertPermanentSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  return PsInsertPermanentSiloContextEx(a1, a2, a3, 0LL);
}
