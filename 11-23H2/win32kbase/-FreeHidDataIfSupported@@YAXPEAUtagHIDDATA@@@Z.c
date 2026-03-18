/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C012C660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( qword_1C0295BE8 && (int)qword_1C0295BE8() >= 0 )
  {
    if ( qword_1C0295BF0 )
      qword_1C0295BF0(a1);
  }
}
