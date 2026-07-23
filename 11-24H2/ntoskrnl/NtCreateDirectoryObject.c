/*
 * XREFs of NtCreateDirectoryObject @ 0x140A3B280
 * Callers:
 *     CreateSystemRootLink @ 0x140C0C3F8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140C1E538 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140C1E628 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140C44978 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140A3B2C0 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
