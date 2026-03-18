/*
 * XREFs of NtQueryInformationByName @ 0x140970870
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x1409708A0 (IoQueryInformationByName.c)
 */

__int64 __fastcall NtQueryInformationByName(__int64 a1, __int64 a2, __int64 a3)
{
  return IoQueryInformationByName(a1, a2, a3);
}
