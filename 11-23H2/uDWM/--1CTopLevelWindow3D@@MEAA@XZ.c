/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18004FB60
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x18004FBE0 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x18001E9D4 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18004FCC8 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CBaseObject *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  if ( *((_QWORD *)this + 42) )
    CTopLevelWindow3D::StopAnimation(this, v2, v3);
  std::_Func_class<long,>::_Tidy((__int64)this + 552, v2);
  v4 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = *((_QWORD *)this + 47);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
