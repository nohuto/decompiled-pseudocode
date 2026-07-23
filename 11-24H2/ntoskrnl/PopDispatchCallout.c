/*
 * XREFs of PopDispatchCallout @ 0x140A9CFB0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404A50B8 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
