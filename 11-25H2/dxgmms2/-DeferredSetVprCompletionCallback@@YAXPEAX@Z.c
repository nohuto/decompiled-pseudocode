/*
 * XREFs of ?DeferredSetVprCompletionCallback@@YAXPEAX@Z @ 0x1400A4060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeferredSetVprCompletionCallback(_QWORD **a1)
{
  KeSetEvent(*(PRKEVENT *)(*a1[5] + 24LL), 0, 0);
}
