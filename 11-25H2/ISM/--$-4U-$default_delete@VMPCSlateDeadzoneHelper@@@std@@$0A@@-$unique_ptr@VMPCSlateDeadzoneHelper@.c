/*
 * XREFs of ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1268
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C2170 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801B45F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801B77B0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C37E4 (-reset@-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@s.c)
 */

__int64 __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset(a1, v4);
  return a1;
}
