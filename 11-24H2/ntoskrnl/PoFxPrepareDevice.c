/*
 * XREFs of PoFxPrepareDevice @ 0x14048E428
 * Callers:
 *     PnpStartDevice @ 0x14048E37C (PnpStartDevice.c)
 *     PiProcessAddBootDevices @ 0x140723F94 (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopPluginPrepareDevice @ 0x14048E5E0 (PopPluginPrepareDevice.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140A74AA8 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140A789EC (PopFxFindDeviceAndAllocateUniqueId.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  ULONG_PTR *v8; // rdi
  ULONG_PTR *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a1 + 296));
    v4 = *(_DWORD *)(a1 + 296);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v4, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 2) == 0 )
    {
      if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v11) == -1073741738 )
      {
LABEL_16:
        if ( v11 )
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 312), (PVOID)0x66466F50, 0x20u);
        return;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)&PopFxPluginLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxPluginLock, 0, v7, (__int64)&PopFxPluginLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = (ULONG_PTR *)PopFxPluginList;
    v9 = 0LL;
    while ( v8 != &PopFxPluginList )
    {
      if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v8) )
      {
        LOBYTE(v10) = 1;
        PopDiagTraceFxDevicePreparation(a1, v8, a1 + 128, v10);
        v9 = v8;
        if ( v8 )
          goto LABEL_21;
        break;
      }
      v8 = (ULONG_PTR *)*v8;
    }
    if ( !a2 )
      goto LABEL_14;
LABEL_21:
    *(_QWORD *)(a1 + 144) = v9;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_14:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegion();
    goto LABEL_16;
  }
}
