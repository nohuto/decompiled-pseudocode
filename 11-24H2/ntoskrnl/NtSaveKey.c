/*
 * XREFs of NtSaveKey @ 0x1407D1560
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
