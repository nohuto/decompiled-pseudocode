/*
 * XREFs of ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802DA830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CStereoRenderTargetBitmap@@UEAA@XZ @ 0x1802DA7FC (--1CStereoRenderTargetBitmap@@UEAA@XZ.c)
 */

CStereoRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::`vector deleting destructor'(
        CStereoRenderTargetBitmap *this,
        char a2)
{
  CStereoRenderTargetBitmap::~CStereoRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
