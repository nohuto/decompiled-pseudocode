/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1406A79B0
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407FFE18 (MiCreatePartitionNamespace.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
