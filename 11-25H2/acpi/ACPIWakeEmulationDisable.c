/*
 * XREFs of ACPIWakeEmulationDisable @ 0x140032CC4
 * Callers:
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032388 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x140033E84 (ACPIDisconnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  result = *(unsigned int *)(a1 + 116);
  if ( (_DWORD)result )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (unsigned int)result > 1 )
      v2 = (_QWORD *)*v2;
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      result = ACPIDisconnectWakeInterrupt(v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
