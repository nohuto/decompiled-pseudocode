/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180021D8C
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180021D40 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180021D08 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023D54 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  if ( *((_QWORD *)this + 36) )
    CTopLevelWindow3D::StopAnimation(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 504, v2);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((char *)this + 496);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((char *)this + 328);
  CRenderDataVisual::~CRenderDataVisual(this);
}
