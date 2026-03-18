/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0233514
 * Callers:
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C0235598 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00227A0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2, v3, v4);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
