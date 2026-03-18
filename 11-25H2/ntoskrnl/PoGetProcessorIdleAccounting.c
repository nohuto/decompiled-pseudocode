/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x1404F80C0
 * Callers:
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x14055990C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x140559D58 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A190 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055A63C (EmonOverflowHandlerInternalV2Original.c)
 *     Amd64OverflowHandlerInternal @ 0x140568CB0 (Amd64OverflowHandlerInternal.c)
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
