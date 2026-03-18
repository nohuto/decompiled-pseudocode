/*
 * XREFs of ?SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140237C60
 * Callers:
 *     ?SetIntegerProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1402380C0 (-SetIntegerProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r11d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 56) )
      return v5;
    *((_DWORD *)this + 4) |= 0x200u;
    *((_BYTE *)this + 56) = a4 != 0;
    goto LABEL_14;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( a4 == *((_DWORD *)this + 29) )
      return v5;
    *((_DWORD *)this + 4) |= 0x800u;
    *((_DWORD *)this + 29) = a4;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a4 == *((_DWORD *)this + 30) )
      return v5;
    *((_DWORD *)this + 4) |= 0x1000u;
    *((_DWORD *)this + 30) = a4;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 124) )
      return v5;
    *((_DWORD *)this + 4) |= 0x2000u;
    *((_BYTE *)this + 124) = a4 != 0;
LABEL_14:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
