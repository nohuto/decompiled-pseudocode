/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1405C0100
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiIntSteerAssignCpuSet @ 0x1405C01B0 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405C020C (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // rcx
  int v8; // edx
  KIRQL v9; // si
  unsigned int v10; // edi

  v6 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v7 = KiIntTrackRootList;
  v8 = -1;
  v9 = v6;
  v10 = a1 != -1 ? 0xC0000225 : 0;
  while ( (__int64 *)v7 != &KiIntTrackRootList )
  {
    if ( a1 == v8 )
    {
      KiIntSteerClearCpuSetAssignment(v7);
    }
    else if ( *(_DWORD *)(v7 + 32) == a1 )
    {
      v10 = KiIntSteerAssignCpuSet(v7, a2, a3);
      break;
    }
    v7 = *(_QWORD *)v7;
  }
  KeReleaseSpinLock(&KiIntTrackSpinlock, v9);
  return v10;
}
