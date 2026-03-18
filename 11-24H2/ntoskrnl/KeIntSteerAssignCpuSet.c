/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x1405C40F4
 * Callers:
 *     IoSteerInterrupt @ 0x14071DC70 (IoSteerInterrupt.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1405C423C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405C443C (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // bp

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
      v4 = KiIntSteerAssignCpuSet(v8, a2, a3);
    else
      KiIntSteerClearCpuSetAssignment(v8);
    KeReleaseSpinLock(&KiIntTrackSpinlock, v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
