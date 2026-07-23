/*
 * XREFs of MiEnumerateSystemImages @ 0x1402BBF00
 * Callers:
 *     MmEnumerateSystemImagesShared @ 0x1404B09EC (MmEnumerateSystemImagesShared.c)
 *     MmEnumerateSystemImages @ 0x1404F8410 (MmEnumerateSystemImages.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402BC170 (MmReleaseLoadLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSystemImages(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  struct _KTHREAD *Lock; // rax
  PVOID *v7; // rbx
  struct _KTHREAD *v8; // rbp
  PVOID *i; // rbx

  v3 = 0;
  if ( (struct _KTHREAD *)qword_140E2D950 == KeGetCurrentThread() )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v3 = guard_dispatch_icall_no_overrides(i, a2);
      if ( v3 < 0 )
        break;
    }
  }
  else
  {
    Lock = MiAcquireLoadLock(0);
    v7 = (PVOID *)PsLoadedModuleList;
    v8 = Lock;
    while ( v7 != &PsLoadedModuleList )
    {
      MiLockLoaderEntry(v7, a3);
      v3 = guard_dispatch_icall_no_overrides(v7, a2);
      MiUnlockLoaderEntry(v7, a3);
      if ( v3 < 0 )
        break;
      v7 = (PVOID *)*v7;
    }
    MmReleaseLoadLockShared(v8);
  }
  return (unsigned int)v3;
}
