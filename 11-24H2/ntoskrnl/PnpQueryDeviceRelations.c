/*
 * XREFs of PnpQueryDeviceRelations @ 0x1408B8FB8
 * Callers:
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x140A3435C (PiQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14025DB5C (PnpSendIrp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
