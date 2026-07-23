/*
 * XREFs of RtlCreateAtomTable @ 0x140A79800
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1404902A0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
