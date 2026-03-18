/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00B4310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( qword_1C0295B88 && (int)qword_1C0295B88() >= 0 )
  {
    if ( qword_1C0295B90 )
      qword_1C0295B90(a1);
  }
}
