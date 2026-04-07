/*
 * XREFs of ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800CAD68
 * Callers:
 *     ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800CAE50 (--_GCProjectedShadowScene@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001D834 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  CContainerVisual **v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  v2 = (CContainerVisual **)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CVisual::RemoveSelfFromParent(v2);
    v3 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v5 )
    CBaseObject::Release(v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  CBaseObject::~CBaseObject(this);
}
