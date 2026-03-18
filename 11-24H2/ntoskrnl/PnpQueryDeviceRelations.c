/*
 * XREFs of PnpQueryDeviceRelations @ 0x1408BB608
 * Callers:
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     PiQueryDeviceRelations @ 0x140A3E9EC (PiQueryDeviceRelations.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14037529C (PnpSendIrp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int16 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]

  memset_0(&v10, 0, 0x48uLL);
  v10 = 1819;
  v11 = a2;
  return PnpSendIrp(a1, (__int64)&v10, v8, a3, a4);
}
