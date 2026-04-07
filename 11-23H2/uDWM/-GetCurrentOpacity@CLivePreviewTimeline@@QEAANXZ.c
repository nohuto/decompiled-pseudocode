/*
 * XREFs of ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18006D0A0
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DAA6 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C6DC0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall CLivePreviewTimeline::GetCurrentOpacity(CLivePreviewTimeline *this)
{
  double v1; // xmm1_8
  int v2; // edx
  int v3; // edx

  v1 = DOUBLE_1_0;
  v2 = *((_DWORD *)this + 30);
  if ( *((_BYTE *)this + 72) )
  {
    if ( v2 == 3 )
      return 0.0;
  }
  else
  {
    v3 = v2 - 3;
    if ( v3 )
    {
      if ( v3 == 1 )
        return (1.0 - *((double *)this + 16)) * *((double *)this + 6) + *((double *)this + 16);
    }
    else
    {
      return (1.0 - *((double *)this + 6)) * *((double *)this + 16);
    }
  }
  return v1;
}
