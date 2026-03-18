/*
 * XREFs of IoGetAttachedDeviceReference @ 0x14041DD00
 * Callers:
 *     HalpQueryPccInterface @ 0x1406F81BC (HalpQueryPccInterface.c)
 *     ExpQueryPrmInterface @ 0x1407AFE48 (ExpQueryPrmInterface.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140A93244 (WmipGetFilePDO.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B59AAC (IoBuildPoDeviceNotifyList.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // bp
  char *ArbitraryUserPointer; // rax
  struct _KPRCB *v4; // rcx
  volatile __int64 *v5; // r8
  struct _KPRCB **v6; // rdx
  struct _DEVICE_OBJECT *i; // rax
  volatile signed __int64 **v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // di
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  signed __int32 v20[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (struct _KPRCB *)(ArbitraryUserPointer + 160);
  v5 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = (struct _KPRCB **)_InterlockedExchange64(v5, (__int64)v4);
    if ( v6 )
      KxWaitForLockOwnerShip(v4, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v4, v5);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  ObfReferenceObjectWithTag(DeviceObject, 0x746C6644u);
  v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v8);
    v9 = (__int64)*v8;
    if ( !*v8 )
    {
      if ( v8 == (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
        goto LABEL_16;
      v9 = KxWaitForLockChainValid((__int64 *)v8);
    }
    *v8 = 0LL;
    v10 = (__int64)v8[1];
    if ( (((unsigned __int8)v10 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v9 + 8), v10)) & 4) != 0 )
    {
      _InterlockedOr(v20, 0);
      v13 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v14, _InterlockedExchange64((volatile __int64 *)(v12 + 8 * v11), 0LL));
      if ( v13 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v18 = *SchedulerAssist;
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
          }
          while ( v19 != v18 );
          if ( (v18 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
