/*
 * XREFs of RaidUnitNotifyHardwareGone @ 0x14009FB30
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x140056074 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     StorProcessNVMeModifiedNodes @ 0x1400C0F7C (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitNotifyHardwareGone(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 504);
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    *(_BYTE *)(a1 + 504) = v1;
  }
  return (v1 & 2) != 0;
}
