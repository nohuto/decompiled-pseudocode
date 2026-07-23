/*
 * XREFs of NtOpenThreadToken @ 0x140851660
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
