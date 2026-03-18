/*
 * XREFs of MiEnumerateSystemImages @ 0x14036E320
 * Callers:
 *     MmEnumerateSystemImagesShared @ 0x14036D414 (MmEnumerateSystemImagesShared.c)
 *     MmEnumerateSystemImages @ 0x1404F8690 (MmEnumerateSystemImages.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x14036E590 (MmReleaseLoadLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSystemImages(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  struct _KTHREAD *Lock; // rax
  PVOID *v7; // rbx
  struct _KTHREAD *v8; // rbp
  PVOID *i; // rbx

  v3 = 0;
  if ( (struct _KTHREAD *)qword_140E2D5D0 == KeGetCurrentThread() )
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
