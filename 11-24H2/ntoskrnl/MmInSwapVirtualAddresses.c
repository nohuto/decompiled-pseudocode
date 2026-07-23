/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140A03180
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048633C (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x1403C67DC (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140A03778 (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx

  EtwTraceWorkingSetSwap(Process);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  EtwTraceWorkingSetSwap(Process);
  return 0LL;
}
