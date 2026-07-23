/*
 * XREFs of NtCreateDirectoryObject @ 0x140A41AE0
 * Callers:
 *     CreateSystemRootLink @ 0x140BF93F8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140C0B324 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140C0B414 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140C31518 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140A41B20 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
