/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140238150
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140237D10 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  bool result; // al

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 25) )
  {
    *((_DWORD *)this + 4) |= 0x20000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 42) || *((_DWORD *)this + 44) || *((_DWORD *)this + 43) || *((_DWORD *)this + 45) )
  {
    *((_DWORD *)this + 4) |= 0x40000u;
    return 1;
  }
  return result;
}
