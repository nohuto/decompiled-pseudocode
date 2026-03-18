/*
 * XREFs of PopDispatchCallout @ 0x140A9C330
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404A9BF8 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
