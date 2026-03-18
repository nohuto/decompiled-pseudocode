/*
 * XREFs of ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0073620
 * Callers:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00126F8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072DBC (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0151390 (DCELogicalSpeedTopLevelHitTest.c)
 *     _ChildWindowFromPointEx @ 0x1C0154E3A (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EE28 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C022FDA8 (_RealChildWindowFromPoint.c)
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
