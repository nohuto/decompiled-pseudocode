/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x1405C0068
 * Callers:
 *     IoSteerInterrupt @ 0x140711B70 (IoSteerInterrupt.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiIntSteerAssignCpuSet @ 0x1405C01B0 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405C020C (KiIntSteerClearCpuSetAssignment.c)
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
