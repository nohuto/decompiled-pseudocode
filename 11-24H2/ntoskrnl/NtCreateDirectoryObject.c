/*
 * XREFs of NtCreateDirectoryObject @ 0x140A456D0
 * Callers:
 *     CreateSystemRootLink @ 0x140C0A3F8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140C1C4F8 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140C42828 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140A45710 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1, __int64 a2, __int64 a3)
{
  return ObpCreateDirectoryObject(a1, a2, a3, 0LL, 0);
}
