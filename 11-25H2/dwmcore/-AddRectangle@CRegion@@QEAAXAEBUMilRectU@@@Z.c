/*
 * XREFs of ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180289E60
 * Callers:
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180289F00 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180063EB0 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CRegion::AddRectangle(const struct FastRegion::Internal::CRgnData **this, struct tagRECT *a2)
{
  signed int v3; // ebx
  struct tagRECT v4; // [rsp+20h] [rbp-78h] BYREF
  FastRegion::CRegion *v5[10]; // [rsp+30h] [rbp-68h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = *a2;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v5, &v4);
  v3 = FastRegion::CRegion::Union(this, v5);
  FastRegion::CRegion::FreeMemory(v5);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT(v3, retaddr);
}
