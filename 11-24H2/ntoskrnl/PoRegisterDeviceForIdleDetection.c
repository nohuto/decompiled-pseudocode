/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1403E5A70
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // r9
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  ULONG DeviceType; // eax
  int v13; // esi
  __int64 v14; // rdi
  KIRQL v15; // dl
  _QWORD *v16; // rax
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r8
  _QWORD *v20; // rcx

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    p_IdleList = &Dope->IdleList;
    Flink = Dope->IdleList.Flink;
    if ( Flink == &Dope->IdleList )
      goto LABEL_4;
    if ( Flink->Blink == p_IdleList )
    {
      Blink = Dope->IdleList.Blink;
      if ( Blink->Flink == p_IdleList )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        *(_QWORD *)&Dope->IdleType = 0LL;
        *(_QWORD *)&Dope->ConservationIdleTime = 0LL;
        Dope->CurrentState = PowerDeviceUnspecified;
        Dope->IdleCount = 0;
        Dope->BusyCount = 0;
        Dope->BusyReference = 0;
        Dope->TotalBusyCount = 0;
        Dope->Specific = 0LL;
        Dope->IdleList.Blink = &Dope->IdleList;
        p_IdleList->Flink = p_IdleList;
LABEL_4:
        KeReleaseSpinLock(&PopDopeGlobalLock, v9);
        return v4;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v13 = 0;
  if ( DeviceType != 7 && DeviceType != 45 )
  {
LABEL_9:
    v14 = PopGetDope();
    if ( !v14 )
      return v4;
    v15 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    *(_DWORD *)(v14 + 16) = ConservationIdleTime;
    v16 = (_QWORD *)(v14 + 32);
    *(_DWORD *)(v14 + 20) = PerformanceIdleTime;
    *(_DWORD *)(v14 + 52) = State;
    *(_DWORD *)(v14 + 48) = v13;
    if ( (_QWORD *)*v16 == v16 )
    {
      *(_DWORD *)(v14 + 56) = 1;
      v20 = (_QWORD *)qword_140F0B568;
      if ( *(__int64 **)qword_140F0B568 != &PopIdleDetectList )
        goto LABEL_17;
      *v16 = &PopIdleDetectList;
      *(_QWORD *)(v14 + 40) = v20;
      *v20 = v16;
      qword_140F0B568 = v14 + 32;
    }
    KeReleaseSpinLock(&PopDopeGlobalLock, v15);
    PopCheckForWork();
    return (PULONG)v14;
  }
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc || (DeviceObject->Characteristics & 1) == 0 )
  {
    v13 = 1;
    goto LABEL_9;
  }
  return v4;
}
