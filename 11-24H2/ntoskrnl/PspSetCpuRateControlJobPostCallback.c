/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x1408D77E0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1408D88A8 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  void *v5; // r9
  _QWORD *NextJobProcess; // rax
  _QWORD *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = (a2 + 128) & -(__int64)(a2 != 0);
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, (__int64)CurrentThread, &v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    PspSetProcessSchedulingGroup(NextJobProcess, v4);
    v5 = v7;
    a1 = v2;
  }
  return 0LL;
}
