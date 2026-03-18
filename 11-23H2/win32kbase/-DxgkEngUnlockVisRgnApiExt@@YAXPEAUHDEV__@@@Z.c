/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C00E05A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( qword_1C0294480 && (int)qword_1C0294480() >= 0 )
  {
    if ( qword_1C0294488 )
      qword_1C0294488(a1);
  }
}
