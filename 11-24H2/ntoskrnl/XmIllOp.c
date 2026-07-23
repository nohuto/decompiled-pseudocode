/*
 * XREFs of XmIllOp @ 0x140574550
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
