/*
 * XREFs of ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801E05E0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029A8FC (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 */

void __fastcall CGlobalComposition::BeginUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rbp
  CCursorVisual **i; // rsi
  CCursorVisual *v4; // rdi
  unsigned __int64 FrameTargetTime; // rax

  v1 = (CCursorVisual **)*((_QWORD *)this + 820);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 819); i != v1; ++i )
  {
    v4 = *i;
    FrameTargetTime = CComposition::GetFrameTargetTime(this);
    CCursorVisual::ProcessStateChanges(v4, FrameTargetTime);
  }
}
