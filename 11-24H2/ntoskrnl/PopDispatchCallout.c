/*
 * XREFs of PopDispatchCallout @ 0x140AA1C20
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404AAEB8 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
