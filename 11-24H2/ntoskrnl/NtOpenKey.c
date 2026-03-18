/*
 * XREFs of NtOpenKey @ 0x140A4A090
 * Callers:
 *     IopProtectSystemPartition @ 0x140C1E3BC (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtOpenKeyEx @ 0x140A4A0B0 (NtOpenKeyEx.c)
 */

__int64 __fastcall NtOpenKey(__int64 a1, __int64 a2, __int64 a3)
{
  return NtOpenKeyEx(a1, a2, a3, 0LL);
}
