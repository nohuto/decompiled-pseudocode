/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x140024C28
 * Callers:
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     UsbhQueryBusRelations @ 0x140024E3C (UsbhQueryBusRelations.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x140025314 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhDeleteOrphanPdo @ 0x1400397FC (UsbhDeleteOrphanPdo.c)
 *     UsbhDeregisterPdo @ 0x140045D8C (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1400478C0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048294 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004898C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_HWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 16) = a3;
  *(_DWORD *)((char *)result + v6 + 20) = result[281];
  *(_DWORD *)((char *)result + v6 + 24) = a2;
  result[281] = a2;
  return result;
}
