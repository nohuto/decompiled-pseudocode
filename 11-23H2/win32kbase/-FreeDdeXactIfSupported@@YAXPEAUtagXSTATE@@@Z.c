/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C012C5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( qword_1C0295BB8 && (int)qword_1C0295BB8() >= 0 )
  {
    if ( qword_1C0295BC0 )
      qword_1C0295BC0(a1);
  }
}
