/*
 * XREFs of KeDeregisterBoundCallback @ 0x1405AD690
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140AB1CEC (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  char v9; // si

  CurrentThread = KeGetCurrentThread();
  v6 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v7 = ExReferenceCallBackBlock(&KiBoundsCallback, a2, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    v9 = 0;
    if ( v7[1].Count == a1 )
      v9 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v7);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v8);
    if ( v9 )
    {
      ExWaitForCallBacks(v8);
      PspUserApcKernelRoutine(v8);
      v6 = 0;
    }
  }
  KeLeaveCriticalRegion();
  return v6;
}
