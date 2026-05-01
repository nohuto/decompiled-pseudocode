/*
 * XREFs of ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803F08A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803F0670 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 */

__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureWithWICBitmap(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  int ScreenCaptureInternal; // eax
  unsigned int v5; // ecx

  ScreenCaptureInternal = PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
                            (PenWorkspaceScreenCaptureBroker *)((char *)this - 32),
                            a2,
                            a3,
                            a4);
  v5 = 0;
  if ( ScreenCaptureInternal < 0 )
    return (unsigned int)ScreenCaptureInternal;
  return v5;
}
