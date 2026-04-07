/*
 * XREFs of ??1CContainerVisual@@MEAA@XZ @ 0x18002189C
 * Callers:
 *     ??_GCContainerVisual@@MEAAPEAXI@Z @ 0x180021800 (--_GCContainerVisual@@MEAAPEAXI@Z.c)
 *     ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x180021850 (--_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180027DF4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18002D450 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002DA94 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003892C (--1CWindowBorder@@UEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180096E70 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Destroy@CContainerVisual@@IEAAXXZ @ 0x1800218D4 (-Destroy@CContainerVisual@@IEAAXXZ.c)
 *     ??1VisualCollection@@QEAA@XZ @ 0x180021918 (--1VisualCollection@@QEAA@XZ.c)
 */

void __fastcall CContainerVisual::~CContainerVisual(CContainerVisual *this)
{
  *(_QWORD *)this = &CContainerVisual::`vftable';
  CContainerVisual::Destroy(this);
  VisualCollection::~VisualCollection((CContainerVisual *)((char *)this + 144));
  CVisual::~CVisual(this);
}
