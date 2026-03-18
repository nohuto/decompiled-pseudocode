/*
 * XREFs of NtOpenThreadToken @ 0x1408A1790
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
