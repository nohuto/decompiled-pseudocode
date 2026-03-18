/*
 * XREFs of ?ActivateTrigger@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA_N@Z @ 0x140237B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ActivateTrigger(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a3 != 10 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x4000u;
  *a4 = 1;
  return result;
}
