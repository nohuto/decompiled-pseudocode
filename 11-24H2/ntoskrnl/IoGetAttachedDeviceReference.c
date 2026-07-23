/*
 * XREFs of IoGetAttachedDeviceReference @ 0x140411960
 * Callers:
 *     HalpQueryPccInterface @ 0x140701C5C (HalpQueryPccInterface.c)
 *     ExpQueryPrmInterface @ 0x1407BFA68 (ExpQueryPrmInterface.c)
 *     CmpGetVolumeClusterSize @ 0x140932C5C (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B6AFFC (IoBuildPoDeviceNotifyList.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  char *v3; // rcx
  volatile __int64 *v4; // rdx
  _QWORD *v5; // rax
  struct _DEVICE_OBJECT *i; // rax
  volatile signed __int64 **v7; // rdi
  __int64 v9; // rcx
  volatile __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v4 = (volatile __int64 *)*((_QWORD *)v3 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v5 = (_QWORD *)_InterlockedExchange64(v4, (__int64)v3);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)v3, v5);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v3, v4);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  ObfReferenceObjectWithTag(DeviceObject, 0x746C6644u);
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
    goto LABEL_11;
  }
  _m_prefetchw(v7);
  v9 = (__int64)*v7;
  if ( !*v7 )
  {
    if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      goto LABEL_11;
    v9 = KxWaitForLockChainValid((__int64 *)v7);
  }
  *v7 = 0LL;
  v10 = (volatile __int64 *)(v9 + 8);
  v11 = (__int64)v7[1];
  v12 = _InterlockedExchange64(v10, v11);
  LOBYTE(v12) = v11 ^ v12;
  if ( (v12 & 4) != 0 )
    KeWakeAddressAll((unsigned __int64)v10, v12);
LABEL_11:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
