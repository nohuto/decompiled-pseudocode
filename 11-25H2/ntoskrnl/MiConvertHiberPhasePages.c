/*
 * XREFs of MiConvertHiberPhasePages @ 0x140B52534
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  int v4[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v5; // [rsp+29h] [rbp-BFh]
  char *v6; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v7; // [rsp+48h] [rbp-A0h]
  __int64 v8; // [rsp+50h] [rbp-98h]
  void *v9; // [rsp+C8h] [rbp-20h]
  __int64 v10; // [rsp+D8h] [rbp-10h]

  memset_0(v4, 0, 0xC0uLL);
  v4[0] = 8961;
  v9 = &MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v8 = -1LL;
  v6 = AnyMultiplexedVm;
  v7 = 0xFFFF800000000000uLL;
  v5 = 17;
  v10 = a1;
  result = MiWalkPageTables(v4);
  if ( a1 )
    return MiIssueFlushTbEntire(0LL, -1);
  return result;
}
