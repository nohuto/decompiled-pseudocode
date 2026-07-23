/*
 * XREFs of KiSaveProcessorState @ 0x1405C7B70
 * Callers:
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x1406B7B40 (KxNmiInterrupt.c)
 * Callees:
 *     KeContextFromKframes @ 0x1403D3460 (KeContextFromKframes.c)
 *     RtlSaveNpxState @ 0x1405EE18C (RtlSaveNpxState.c)
 *     KiSaveProcessorControlState @ 0x1406AB1B0 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Context; // rbx
  unsigned int ContextFlagsInit; // edx
  unsigned __int64 CompactionMaskInit; // r8
  char v8; // r9

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  *(_DWORD *)(Context + 48) = ContextFlagsInit;
  CompactionMaskInit = CurrentPrcb->CompactionMaskInit;
  v8 = *(_BYTE *)(a1 + 368) & 1;
  if ( CompactionMaskInit )
    *(_QWORD *)(*(int *)(Context + 1248) + Context + 1240) = CompactionMaskInit | 0x8000000000000000uLL;
  if ( !v8 && ((ContextFlagsInit & 0x100040) == 1048640 || (ContextFlagsInit & 0x100008) == 1048584) )
    RtlSaveNpxState(Context);
  KeContextFromKframes(a1, a2, Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
