/*
 * XREFs of ACPIPepCleanupEpmNotificationSupport @ 0x1400A0FF4
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400A1328 (ACPIPepInitializeEpmNotificationSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIPepCleanupEpmNotificationSupport(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 272) )
  {
    PoUnregisterFromEffectivePowerModeNotifications();
    *(_QWORD *)(a1 + 272) = 0LL;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 260) = 0;
    *(_DWORD *)(a1 + 264) = -1;
    *(_DWORD *)(a1 + 268) = -1;
    *(_BYTE *)(a1 + 257) = 0;
    *(_BYTE *)(a1 + 280) = 0;
  }
  return result;
}
