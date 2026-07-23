/*
 * XREFs of MiConvertHiberPhasePages @ 0x140B64734
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  __int64 v4; // r8
  int v5[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v6; // [rsp+29h] [rbp-BFh]
  char *v7; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v8; // [rsp+48h] [rbp-A0h]
  __int64 v9; // [rsp+50h] [rbp-98h]
  void *v10; // [rsp+C8h] [rbp-20h]
  __int64 v11; // [rsp+D8h] [rbp-10h]

  memset_0(v5, 0, 0xC0uLL);
  v5[0] = 8961;
  v10 = &MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v9 = -1LL;
  v7 = AnyMultiplexedVm;
  v8 = 0xFFFF800000000000uLL;
  v6 = 17;
  v11 = a1;
  result = MiWalkPageTables(v5);
  if ( a1 )
    return MiIssueFlushTbEntire(0LL, 0xFFFFFFFFLL, v4);
  return result;
}
