/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C00B3A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( qword_1C0295B68 && (int)qword_1C0295B68() >= 0 )
  {
    if ( qword_1C0295B70 )
      qword_1C0295B70(a1);
  }
}
