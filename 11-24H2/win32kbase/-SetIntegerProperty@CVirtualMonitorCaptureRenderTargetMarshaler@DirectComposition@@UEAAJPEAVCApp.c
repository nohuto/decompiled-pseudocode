/*
 * XREFs of ?SetIntegerProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1402380C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140237C60 (-SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 14:
      *((_QWORD *)this + 25) = a4;
      goto LABEL_9;
    case 16:
      if ( ((_DWORD)a4 != 0) == *((_BYTE *)this + 212) )
        return v5;
      *((_DWORD *)this + 4) |= 0x20000u;
      *((_BYTE *)this + 212) = (_DWORD)a4 != 0;
LABEL_10:
      *a5 = 1;
      return v5;
    case 17:
      *((_DWORD *)this + 52) = a4;
LABEL_9:
      *((_DWORD *)this + 4) |= 0x20000u;
      goto LABEL_10;
  }
  return (unsigned int)DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
