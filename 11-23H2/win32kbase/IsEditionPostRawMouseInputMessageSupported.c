/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C02330CC
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0054CAC (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C02074C0 (ApiSetEditionPostRawMouseInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C0296C10 )
    return qword_1C0296C10();
  else
    return 3221225659LL;
}
