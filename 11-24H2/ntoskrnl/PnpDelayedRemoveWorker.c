/*
 * XREFs of PnpDelayedRemoveWorker @ 0x1409C6B60
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140A878A4 (PnpChainDereferenceComplete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipRemoveDevicesInRelationList @ 0x1409C6D70 (PipRemoveDevicesInRelationList.c)
 *     PnpEnableWatchdog @ 0x1409C74F8 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDelayedRemoveWorker(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID **v3; // rdx
  PVOID *v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  PVOID *v12; // rax
  PVOID *v13; // rax
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  p_Pa = &Pa;
  Pa = &Pa;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  v3 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v4 = *v3;
      if ( *((_BYTE *)v3 + 104) )
      {
        if ( *((_DWORD *)*v3[8] + 2) == *(_DWORD *)*v3[8] )
        {
          if ( v4[1] != v3 || (v12 = v3[1], *v12 != v3) || (*v12 = v4, v4[1] = v12, v13 = p_Pa, *p_Pa != &Pa) )
LABEL_19:
            __fastfail(3u);
          v3[1] = p_Pa;
          *v3 = &Pa;
          *v13 = v3;
          p_Pa = (PVOID *)v3;
        }
        else
        {
          *((_BYTE *)v3 + 104) = 0;
        }
      }
      v3 = (PVOID **)v4;
    }
    while ( v4 != &IopPendingSurpriseRemovals );
  }
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v5 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa )
      goto LABEL_19;
    v6 = *(_QWORD *)Pa;
    if ( *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa )
      goto LABEL_19;
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v6 + 8) = &Pa;
    if ( P )
    {
      P[2] = v5;
      P[1] = v5[7];
      v7 = v5[7];
      v8 = v7 ? *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) : 0LL;
      *P = v8;
      v9 = PnpEnableWatchdog(3LL, P, (v8 + 56) & -(__int64)(v8 != 0));
      P[3] = v9;
      if ( v9 )
      {
        v11 = (void *)P[1];
        if ( v11 )
          ObfReferenceObjectWithTag(v11, 0x56706E50u);
      }
    }
    PipRemoveDevicesInRelationList(v5);
    if ( P )
    {
      if ( P[3] )
      {
        PnpDisableWatchdog();
        v10 = (void *)P[1];
        P[3] = 0LL;
        if ( v10 )
          ObfDereferenceObjectWithTag(v10, 0x56706E50u);
      }
    }
  }
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = 0LL;
  if ( P )
    ExFreePoolWithTag(P, 0x54706E50u);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
}
