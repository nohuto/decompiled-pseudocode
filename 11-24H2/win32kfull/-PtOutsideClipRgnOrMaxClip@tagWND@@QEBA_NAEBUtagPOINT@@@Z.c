/*
 * XREFs of ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140068100
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x140067D2C (_ChildWindowFromPointEx.c)
 *     _RealChildWindowFromPoint @ 0x14006CF5C (_RealChildWindowFromPoint.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402DF7A8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tagWND::PtOutsideClipRgnOrMaxClip(tagWND *this, const struct tagPOINT *a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 168LL);
  if ( v3 )
    return (unsigned int)GrePtInRegion(v3, (unsigned int)a2->x, (unsigned int)a2->y) == 0;
  return v2;
}
