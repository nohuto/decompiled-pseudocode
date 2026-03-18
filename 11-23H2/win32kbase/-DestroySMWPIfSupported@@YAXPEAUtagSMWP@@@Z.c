/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C00AC550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( qword_1C0295B78 && (int)qword_1C0295B78() >= 0 )
  {
    if ( qword_1C0295B80 )
      qword_1C0295B80(a1);
  }
}
