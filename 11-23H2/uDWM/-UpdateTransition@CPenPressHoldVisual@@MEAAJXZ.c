/*
 * XREFs of ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD270
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD220 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::UpdateTransition(CPenPressHoldVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax

  v2 = *((_DWORD *)this + 90);
  v3 = (int)(float)((float)*(double *)(*((_QWORD *)this + 39) + 48LL) * (float)v2);
  if ( v3 >= v2 )
    v3 = v2 - 1;
  CImage::SetBitmapSource(*((CImage **)this + 40), *(struct CBitmapSource **)(*((_QWORD *)this + 42) + 8LL * v3));
  if ( *(_BYTE *)(*((_QWORD *)this + 39) + 72LL) )
    CPenPressHoldVisual::StopTimer(this);
  return 0LL;
}
