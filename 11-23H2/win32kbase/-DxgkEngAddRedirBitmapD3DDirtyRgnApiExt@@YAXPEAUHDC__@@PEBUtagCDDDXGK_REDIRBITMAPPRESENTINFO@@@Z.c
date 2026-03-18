/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C0168AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  if ( qword_1C0294530 && (int)qword_1C0294530() >= 0 )
  {
    if ( qword_1C0294538 )
      qword_1C0294538(a1, a2);
  }
}
