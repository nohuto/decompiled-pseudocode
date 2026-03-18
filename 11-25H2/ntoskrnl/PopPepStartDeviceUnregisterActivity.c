/*
 * XREFs of PopPepStartDeviceUnregisterActivity @ 0x1405D6E00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

char __fastcall PopPepStartDeviceUnregisterActivity(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return 0;
}
