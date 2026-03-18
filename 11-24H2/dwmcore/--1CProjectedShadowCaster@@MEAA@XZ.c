/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x18028EEB0
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x18028EF30 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1800E7450 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18028EE80 (--1-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(CVisual **this)
{
  CVisual *v2; // rcx

  *this = (CVisual *)&CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::SetCastingVisual(this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  v2 = this[13];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[15] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[13] = 0LL;
    this[14] = 0LL;
    this[15] = 0LL;
  }
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::~_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>((_QWORD **)this + 11);
  CResource::~CResource((CResource *)this);
}
