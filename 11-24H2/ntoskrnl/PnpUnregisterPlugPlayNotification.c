/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x140469950
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140759250 (PopPolicyDeviceTargetChange.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140A45730 (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x140A8AF00 (IoUnregisterPlugPlayNotification.c)
 *     PopCleanCoolingExtension @ 0x140AAC570 (PopCleanCoolingExtension.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
  PVOID *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rdx
  PVOID **v12; // rax

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v8 = (PVOID *)PnpDeferredRegistrationList;
    while ( v8 != &PnpDeferredRegistrationList )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = v11;
        if ( v11[1] != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        PnpDereferenceNotify(*v9);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = (PVOID *)*v8;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      KeLeaveCriticalRegion();
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
