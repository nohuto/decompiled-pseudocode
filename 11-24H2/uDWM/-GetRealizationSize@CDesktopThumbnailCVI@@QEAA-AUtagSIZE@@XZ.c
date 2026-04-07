/*
 * XREFs of ?GetRealizationSize@CDesktopThumbnailCVI@@QEAA?AUtagSIZE@@XZ @ 0x18009B150
 * Callers:
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007D130 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall CDesktopThumbnailCVI::GetRealizationSize(CDesktopThumbnailCVI *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 6);
  return (struct tagSIZE)a2;
}
