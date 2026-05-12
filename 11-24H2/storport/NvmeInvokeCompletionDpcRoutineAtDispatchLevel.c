/*
 * XREFs of NvmeInvokeCompletionDpcRoutineAtDispatchLevel @ 0x14012ACC8
 * Callers:
 *     ProcessNVMeCompletionQueues @ 0x14012D930 (ProcessNVMeCompletionQueues.c)
 * Callees:
 *     NvmeCompletionDpcRoutine @ 0x14011A4A0 (NvmeCompletionDpcRoutine.c)
 */

void __fastcall NvmeInvokeCompletionDpcRoutineAtDispatchLevel(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        char *SystemArgument2)
{
  KIRQL v8; // bl

  v8 = KfRaiseIrql(2u);
  NvmeCompletionDpcRoutine(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  KeLowerIrql(v8);
}
