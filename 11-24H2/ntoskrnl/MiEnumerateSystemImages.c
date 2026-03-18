/*
 * XREFs of MiEnumerateSystemImages @ 0x1402C7380
 * Callers:
 *     MmEnumerateSystemImagesShared @ 0x1402C8988 (MmEnumerateSystemImagesShared.c)
 *     MmEnumerateSystemImages @ 0x1404FAB30 (MmEnumerateSystemImages.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiInitializeKernelCfg @ 0x140C598DC (MiInitializeKernelCfg.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSystemImages(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  int v4; // edi
  unsigned int v5; // r12d
  struct _KTHREAD *Lock; // rax
  PVOID *v8; // rbx
  struct _KTHREAD *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = a3;
  if ( (struct _KTHREAD *)qword_140E2D810 == CurrentThread )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v4 = guard_dispatch_icall_no_overrides(i, a2, a3, CurrentThread);
      if ( v4 < 0 )
        break;
    }
  }
  else
  {
    Lock = MiAcquireLoadLock(0);
    v8 = (PVOID *)PsLoadedModuleList;
    v9 = Lock;
    while ( v8 != &PsLoadedModuleList )
    {
      MiLockLoaderEntry(v8, v5);
      v4 = guard_dispatch_icall_no_overrides(v8, a2, v10, v11);
      MiUnlockLoaderEntry(v8, v5);
      if ( v4 < 0 )
        break;
      v8 = (PVOID *)*v8;
    }
    MmReleaseLoadLockShared(v9);
  }
  return (unsigned int)v4;
}
