/*
 * XREFs of IsDevicePoweredUp @ 0x1400415E4
 * Callers:
 *     PinAddPinToList @ 0x1400087B0 (PinAddPinToList.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 536LL) == 1;
}
