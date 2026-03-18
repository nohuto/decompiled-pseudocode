/*
 * XREFs of XmIllOp @ 0x1405770C0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1404FB920 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
