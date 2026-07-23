/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x1404F7E70
 * Callers:
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x140559E3C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x14055A288 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 *     Amd64OverflowHandlerInternal @ 0x140569440 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall PoGetProcessorIdleAccounting(_QWORD *a1)
{
  struct _KPRCB *result; // rax
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // rdx

  result = KeGetCurrentPrcb();
  IdleAccounting = result->PowerState.IdleAccounting;
  if ( a1 )
  {
    if ( IdleAccounting )
    {
      result = (struct _KPRCB *)IdleAccounting->TotalTransitions;
      *a1 = result;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return result;
}
