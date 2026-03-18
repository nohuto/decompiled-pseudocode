/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180181100
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801810D4 (-ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFS.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18000D550 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180181F44 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeOffset(
        struct CSparseStorage::AllocatedStorage **this,
        FLOAT a2,
        FLOAT a3,
        double a4)
{
  unsigned __int64 v5; // rcx
  struct D2D_VECTOR_3F v6; // [rsp+20h] [rbp-58h] BYREF

  CVisual::GetRelativeOffsetInternal((CVisual *)this, &v6);
  if ( v6.x != a2 || v6.y != a3 || v6.z != *(float *)&a4 )
  {
    *(_QWORD *)&v6.x = __PAIR64__(LODWORD(a3), LODWORD(a2));
    v5 = __PAIR64__(LODWORD(a3), LODWORD(a2)) - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
    v6.z = *(FLOAT *)&a4;
    if ( __PAIR64__(LODWORD(a3), LODWORD(a2)) == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
      v5 = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)&a4);
    if ( v5 )
      CSparseStorage::SetData(this + 28, 4, 0xCu, &v6);
    else
      *((_DWORD *)this[28] + 1) &= ~0x10000000u;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged((CVisual *)this);
    v6.x = a2;
    v6.y = a3;
    v6.z = *(FLOAT *)&a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(
      (CPropertyChangeResource *)this,
      0x1Eu,
      (const struct D2DVector3 *)&v6);
    CResource::InvalidateAnimationSources((CResource *)this, 30);
  }
}
