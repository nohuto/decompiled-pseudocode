/*
 * XREFs of XmHltOp @ 0x140573C60
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
