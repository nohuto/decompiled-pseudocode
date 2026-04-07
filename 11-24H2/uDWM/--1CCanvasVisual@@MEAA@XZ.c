/*
 * XREFs of ??1CCanvasVisual@@MEAA@XZ @ 0x1800673FC
 * Callers:
 *     ??1CAccent@@MEAA@XZ @ 0x180065B2C (--1CAccent@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800673B0 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18007163C (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCanvasVisual::~CCanvasVisual(void **this)
{
  *this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
