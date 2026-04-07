/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180027DF4
 * Callers:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18000420C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180021D8C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x180054BEC (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CCanvasVisual@@MEAA@XZ @ 0x1800673FC (--1CCanvasVisual@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800703AC (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x1800747CC (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180075C40 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CImage@@EEAA@XZ @ 0x18007876C (--1CImage@@EEAA@XZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x18008135C (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ??1CTouchVisual@@MEAA@XZ @ 0x180086E10 (--1CTouchVisual@@MEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A1FB8 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x1800AD230 (--_GCProjectionBorderVisual@@UEAAPEAXI@Z.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800BCBD4 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800C4B70 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C66C4 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C7A54 (--1CLivePreview@@MEAA@XZ.c)
 *     ??_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z @ 0x1800DA5D0 (--_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSolidRectangleVisual@@UEAAPEAXI@Z @ 0x1800E0760 (--_GCSolidRectangleVisual@@UEAAPEAXI@Z.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800EC17C (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x1800EDC20 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$0 @ 0x1800F76ED (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(void **this)
{
  CBaseObject *v2; // rcx

  *this = &CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = (CBaseObject *)this[25];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[25] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 26);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
