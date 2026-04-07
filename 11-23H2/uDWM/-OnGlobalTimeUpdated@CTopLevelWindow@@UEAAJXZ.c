/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x18006D980
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180106CF0 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnGlobalTimeUpdated(CTopLevelWindow *this)
{
  int v2; // eax

  if ( (*((_BYTE *)this + 248) & 0x40) != 0 )
    CWindowIconic::OnGlobalTimeUpdated(*(CWindowIconic **)(*((_QWORD *)this + 94) + 488LL));
  if ( *((_DWORD *)this + 63) )
  {
    v2 = *((_DWORD *)this + 22);
    if ( (v2 & 0x800000) == 0 )
    {
      *((_DWORD *)this + 22) = v2 | 0x800000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return 0LL;
}
