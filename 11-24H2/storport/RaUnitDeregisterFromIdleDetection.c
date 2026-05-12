/*
 * XREFs of RaUnitDeregisterFromIdleDetection @ 0x14007705C
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x140095E34 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018B11C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x14001D510 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidUnitReenablePendingTimer @ 0x14002E7B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x14003D350 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4 (RaidUnitIsRegisteredForIdleDetection.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaUnitDeregisterFromIdleDetection(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  _QWORD *v14; // rdi
  void *v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-50h]
  __int128 *v17; // [rsp+28h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( RaidUnitIsRegisteredForIdleDetection(a1) )
  {
    if ( *(_QWORD *)(v2 + 24)
      && (*(_DWORD *)(*(_QWORD *)(v2 + 1872) + 32LL) & 4) != 0
      && RaidIsUnitControlSupported(a1, 4) )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v19 = 0LL;
      LOWORD(v19) = 1;
      DWORD1(v19) = 4;
      WORD1(v19) = *(_WORD *)(v3 + 56);
      WORD4(v19) = *(_WORD *)(a1 + 104);
      BYTE10(v19) = *(_BYTE *)(a1 + 106);
      v17 = &v19;
      v16 = 0x1800000001LL;
      RaCallMiniportUnitControl(v3 + 376);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitReenablePendingTimer(a1, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1872) + 96LL), &LockHandle);
    StorPortUnitFlushActivePendingRequestQueue(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 104LL);
    if ( v7 )
    {
      PoUnregisterCoalescingCallback(v7, v4, v5, v6, v16, v17);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 104LL) = 0LL;
    }
    v8 = *(void **)(*(_QWORD *)(a1 + 1872) + 112LL);
    if ( v8 )
    {
      PoUnregisterPowerSettingCallback(v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 112LL) = 0LL;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL);
    if ( v9 )
    {
      LOBYTE(v4) = 1;
      ExDeleteTimer(v9, v4, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL) = 0LL;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL);
    if ( v10 )
    {
      LOBYTE(v4) = 1;
      v11 = ExDeleteTimer(v10, v4, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL) = 0LL;
      if ( v11 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 148LL) & 1) != 0 )
        {
          v12 = *(_QWORD *)(a1 + 24);
          if ( RaidUnitCheckAndAcquirePoFx(a1) )
          {
            PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
          }
          if ( *(_QWORD *)(v12 + 4960) )
            RaidAdapterPoFxIdleComponent(v12, 0LL, 0LL);
        }
      }
    }
    v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1864);
    *(_BYTE *)(a1 + 505) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v13);
    v14 = *(_QWORD **)(a1 + 1872);
    *(_QWORD *)(a1 + 1872) = 0LL;
    v15 = (void *)v14[22];
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x4F506152u);
      v14[22] = 0LL;
      *((_DWORD *)v14 + 42) = 0;
    }
    PoFxUnregisterDevice(*v14);
    ExFreePoolWithTag(v14, 0x4F506152u);
  }
}
