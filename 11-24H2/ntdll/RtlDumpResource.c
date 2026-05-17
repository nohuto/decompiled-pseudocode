/*
 * XREFs of RtlDumpResource @ 0x18013AB30
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 */

__int64 __fastcall RtlDumpResource(_DWORD *a1)
{
  DbgPrint("Resource @ %p\n", a1);
  DbgPrint(" NumberOfWaitingShared = %lx\n", a1[12]);
  DbgPrint(" NumberOfWaitingExclusive = %lx\n", a1[16]);
  return DbgPrint(" NumberOfActive = %lx\n", a1[17]);
}
