/*
 * XREFs of ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801D3360
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029085C (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 */

void __fastcall CGlobalComposition::BeginUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rbp
  CCursorVisual **i; // rsi
  CCursorVisual *v4; // rdi
  unsigned __int64 FrameTargetTime; // rax

  v1 = (CCursorVisual **)*((_QWORD *)this + 817);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 816); i != v1; ++i )
  {
    v4 = *i;
    FrameTargetTime = CComposition::GetFrameTargetTime(this);
    CCursorVisual::ProcessStateChanges(v4, FrameTargetTime);
  }
}
