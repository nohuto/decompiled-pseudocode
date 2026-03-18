/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140A04B54
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140434FA4 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x140455294 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
