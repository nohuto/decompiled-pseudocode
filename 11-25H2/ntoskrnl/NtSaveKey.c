/*
 * XREFs of NtSaveKey @ 0x1407C1960
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
