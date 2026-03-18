/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x1403DCA9C
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A011F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A021B0 (FsRtlNotifyCompleteIrp.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v5; // rbx
  KIRQL v6; // dl

  v3 = 0;
  *(_BYTE *)(a1 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( a2 )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v6 = *(_BYTE *)(a1 + 69);
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v6);
    if ( v5 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  }
  return v3;
}
