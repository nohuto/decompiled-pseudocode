/*
 * XREFs of ??1CSceneComponent@@MEAA@XZ @ 0x1802B67C8
 * Callers:
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1802ADA88 (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x1802B6800 (--_GCSceneComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801974B8 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 */

void __fastcall CSceneComponent::~CSceneComponent(CSceneComponent *this)
{
  *(_QWORD *)this = &CSceneComponent::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>((_QWORD **)this + 9);
  CResource::~CResource(this);
}
