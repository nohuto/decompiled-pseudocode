/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801A5D00
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x1801A5CDC (-ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x1801A5DCC (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1801A5E14 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeSize(CVisual *this, double a2, double a3)
{
  CSparseStorage::AllocatedStorage *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 28);
  if ( (*((_DWORD *)v4 + 1) & 0x20000000) != 0 )
    v5 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v4, 3) + 4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( *(float *)&v5 != *(float *)&a2 || *((float *)&v6 + 1) != *(float *)&a3 )
  {
    CVisual::SetRelativeLayoutSizeInternal(
      this,
      (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v6 = __PAIR64__(LODWORD(a3), LODWORD(a2));
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Fu, (const struct D2DVector2 *)&v6);
    CResource::InvalidateAnimationSources(this, 31LL);
  }
}
