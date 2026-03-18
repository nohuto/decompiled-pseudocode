/*
 * XREFs of DeviceSlot_Initialize @ 0x140019DCC
 * Callers:
 *     DeviceSlot_D0Entry @ 0x140019D70 (DeviceSlot_D0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x140045C3C (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14001A080 (XilCoreDeviceSlot_Initialize.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x140046190 (XilDeviceSlot_InitializeSecureResources.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources();
  return XilCoreDeviceSlot_Initialize();
}
