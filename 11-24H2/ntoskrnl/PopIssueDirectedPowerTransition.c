/*
 * XREFs of PopIssueDirectedPowerTransition @ 0x140AB2688
 * Callers:
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 * Callees:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PoFxActivateDevice @ 0x1404909F4 (PoFxActivateDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CEDAC (PopFxIssueDirectedPowerTransition.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14074A99C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 */

void __fastcall PopIssueDirectedPowerTransition(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v4; // si

  v3 = *(_QWORD *)(a2 - 160 + 80);
  if ( *(_BYTE *)a1 == 3 || (v4 = 0, PopDirectedDripsIsPnpSoftwareDeviceNode(a2 - 160)) )
  {
    PopCompleteDirectedPowerTransitionCallback(v3, a1, 0LL);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 4) != 1 )
    {
      v4 = 1;
      PoFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
    }
    PopFxIssueDirectedPowerTransition(v3, v4, a1);
  }
}
