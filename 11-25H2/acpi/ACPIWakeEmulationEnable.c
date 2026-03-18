/*
 * XREFs of ACPIWakeEmulationEnable @ 0x1400344E0
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPIAssociateWakeInterrupt @ 0x140033F48 (ACPIAssociateWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationEnable(__int64 a1)
{
  unsigned int v1; // r14d
  _QWORD *v2; // rsi
  int v3; // ebp
  __int64 i; // rbx
  KIRQL v6; // al

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (_QWORD *)(a1 + 152);
  v3 = 0;
  if ( v1 > 1 )
    v2 = (_QWORD *)*v2;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    v3 = ACPIAssociateWakeInterrupt((__int64)&v2[5 * i]);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  *(_DWORD *)(a1 + 108) |= 1u;
  KeReleaseSpinLock(&AcpiPowerLock, v6);
  return (unsigned int)v3;
}
