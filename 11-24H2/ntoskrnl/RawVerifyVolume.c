/*
 * XREFs of RawVerifyVolume @ 0x1405E4500
 * Callers:
 *     RawFileSystemControl @ 0x1408AE108 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1404501F0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  char v4; // si
  char v5; // bp
  KIRQL v6; // al
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  int v9; // eax
  KIRQL v10; // al

  v4 = 0;
  v5 = 0;
  v6 = KeAcquireQueuedSpinLock(9uLL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (_DWORD *)(v7 + 28);
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    ++*v8;
    v4 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, v6);
  if ( v4 )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 240));
    v9 = *(_DWORD *)(a2 + 120);
    if ( (v9 & 2) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 120) = v9 | 2;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 240));
    if ( v5 )
      ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 232));
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 240));
    v10 = KeAcquireQueuedSpinLock(9uLL);
    --*v8;
    KeReleaseQueuedSpinLock(9uLL, v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 200) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 240));
  }
  return 3221225490LL;
}
