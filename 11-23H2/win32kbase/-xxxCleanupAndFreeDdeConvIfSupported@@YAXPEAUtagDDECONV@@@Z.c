/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C012C890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  if ( qword_1C0295BA8 && (int)qword_1C0295BA8() >= 0 )
  {
    if ( qword_1C0295BB0 )
      qword_1C0295BB0(a1);
  }
}
