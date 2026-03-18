/*
 * XREFs of HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1400246C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BF40 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat(__int64 a1)
{
  HUBDTX_SetDeviceInterfaceUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
