/*
 * XREFs of ACPIBusIrpSetPower @ 0x140028AB0
 * Callers:
 *     ACPICMButtonSetPower @ 0x14004BAF0 (ACPICMButtonSetPower.c)
 * Callees:
 *     ACPIBusIrpSetDevicePower @ 0x140028AE4 (ACPIBusIrpSetDevicePower.c)
 *     ACPIBusIrpSetSystemPower @ 0x140028B44 (ACPIBusIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIBusIrpSetPower(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIBusIrpSetDevicePower();
  else
    ACPIBusIrpSetSystemPower(a1, a2);
  return 259LL;
}
