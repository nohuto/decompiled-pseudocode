/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C00A0BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( qword_1C0295BD8 && (int)qword_1C0295BD8() >= 0 )
  {
    if ( qword_1C0295BE0 )
      qword_1C0295BE0(a1);
  }
}
