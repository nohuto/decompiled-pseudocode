/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1404F81F0
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1404DA3A8 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1405D74A4 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405D75B0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
