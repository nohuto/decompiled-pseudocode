/*
 * XREFs of IsDevicePoweredUp @ 0x140041DA4
 * Callers:
 *     PinAddPinToList @ 0x140008D00 (PinAddPinToList.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 536LL) == 1;
}
