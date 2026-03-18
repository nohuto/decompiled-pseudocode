/*
 * XREFs of PnpQueryDeviceRelations @ 0x140835048
 * Callers:
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x140A3A63C (PiQueryDeviceRelations.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14035EA70 (PnpSendIrp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
