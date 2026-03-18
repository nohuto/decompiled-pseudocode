/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1402FDCA0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402FDBBC (PoRunDownDeviceObject.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // r9
  struct _DEVICE_OBJECT_POWER_EXTENSION *v10; // rdx
  ULONG DeviceType; // eax
  int v13; // esi
  __int64 Dope; // rdi
  KIRQL v15; // dl
  _QWORD *v16; // rax
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r8
  _QWORD *v20; // rcx

  v4 = 0LL;
  if ( ConservationIdleTime || PerformanceIdleTime )
  {
    if ( (unsigned int)(State - 2) > 2 )
      return v4;
    DeviceType = DeviceObject->DeviceType;
    v13 = 0;
    if ( DeviceType == 7 || DeviceType == 45 )
    {
      if ( (!PopPlatformAoAcCapabilityInitialized || !PopPlatformAoAc) && (DeviceObject->Characteristics & 1) != 0 )
        return v4;
      v13 = 1;
    }
    Dope = PopGetDope();
    if ( Dope )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      *(_DWORD *)(Dope + 16) = ConservationIdleTime;
      v16 = (_QWORD *)(Dope + 32);
      *(_DWORD *)(Dope + 20) = PerformanceIdleTime;
      *(_DWORD *)(Dope + 52) = State;
      *(_DWORD *)(Dope + 48) = v13;
      if ( (_QWORD *)*v16 == v16 )
      {
        *(_DWORD *)(Dope + 56) = 1;
        v20 = (_QWORD *)qword_140F0B4A8;
        if ( *(__int64 **)qword_140F0B4A8 != &PopIdleDetectList )
          goto LABEL_15;
        *v16 = &PopIdleDetectList;
        *(_QWORD *)(Dope + 40) = v20;
        *v20 = v16;
        qword_140F0B4A8 = Dope + 32;
      }
      KeReleaseSpinLock(&PopDopeGlobalLock, v15);
      PopCheckForWork();
      return (PULONG)Dope;
    }
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    v10 = DeviceObject->DeviceObjectExtension->Dope;
    if ( v10 )
    {
      p_IdleList = &v10->IdleList;
      Flink = v10->IdleList.Flink;
      if ( Flink != &v10->IdleList )
      {
        if ( Flink->Blink != p_IdleList || (Blink = v10->IdleList.Blink, Blink->Flink != p_IdleList) )
LABEL_15:
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        *(_QWORD *)&v10->IdleType = 0LL;
        *(_QWORD *)&v10->ConservationIdleTime = 0LL;
        v10->CurrentState = PowerDeviceUnspecified;
        v10->IdleCount = 0;
        v10->BusyCount = 0;
        v10->BusyReference = 0;
        v10->TotalBusyCount = 0;
        v10->Specific = 0LL;
        v10->IdleList.Blink = &v10->IdleList;
        p_IdleList->Flink = p_IdleList;
      }
    }
    KeReleaseSpinLock(&PopDopeGlobalLock, v9);
  }
  return v4;
}
