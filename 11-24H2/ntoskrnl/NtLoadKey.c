/*
 * XREFs of NtLoadKey @ 0x14092D0E0
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14092E820 (NtLoadKeyEx.c)
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  return NtLoadKeyEx(TargetKey, SourceFile, 0, 0LL, 0LL, 0, 0LL, 0LL);
}
