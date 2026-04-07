/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x1800370D4
 * Callers:
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x180005B9C (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x18000EA20 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180018F7C (--1CAccent@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x18001DBA0 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18001DD3C (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18004FB60 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180053EDC (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180054120 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x180054B3C (--1CImage@@EEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180055814 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$0 @ 0x180067478 (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$0.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18009E830 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A2310 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800B2504 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800B6FD8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800BF9BC (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800C1D1C (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C45A0 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800C4F9C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C5FD0 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800CCB40 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800CCE30 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800CD2E4 (--1CPressTapVisual@@MEAA@XZ.c)
 *     ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x1800CFB40 (--_GCProjectionBorderVisual@@UEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D6820 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800E33C4 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E7788 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800E85E8 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800E95D0 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??_GCSolidRectangleVisual@@UEAAPEAXI@Z @ 0x1800F48C0 (--_GCSolidRectangleVisual@@UEAAPEAXI@Z.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x180104E30 (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x180108B40 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRenderDataVisual::~CRenderDataVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  CBaseObject *v7; // rcx

  *this = (CBaseObject *)&CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[31];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CBaseObject *, __int64))v2)(v2, 1LL);
    this[31] = 0LL;
  }
  if ( this[32] != this[33] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[32] = 0LL;
  }
  *this = (CBaseObject *)&CVisual::`vftable';
  VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  v3 = this[13];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CBaseObject *, __int64))v3)(v3, 1LL);
    this[13] = 0LL;
    v4 = (__int64 *)(this + 2);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[2] + 2) + 16LL) + 376LL))(
           *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this[2] + 2) + 24LL),
           0LL);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x132u, 0LL);
  }
  else
  {
    v4 = (__int64 *)(this + 2);
  }
  v6 = *v4;
  if ( *v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    *v4 = 0LL;
  }
  v7 = this[14];
  if ( v7 )
  {
    CBaseObject::Release(v7);
    this[14] = 0LL;
  }
  this[4] = (CBaseObject *)&VisualCollection::`vftable';
  if ( this[6] != this[7] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[6] = 0LL;
  }
  *this = (CBaseObject *)&CGlassColorizationResources::`vftable';
}
