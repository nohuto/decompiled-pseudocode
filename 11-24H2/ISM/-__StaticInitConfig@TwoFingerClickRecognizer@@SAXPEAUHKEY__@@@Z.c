/*
 * XREFs of ?__StaticInitConfig@TwoFingerClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1801B6DF0
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801B5DD4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1801B3584 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall TwoFingerClickRecognizer::__StaticInitConfig(HKEY a1)
{
  TwoFingerClickRecognizer::s_twoFingerDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                             a1,
                                                             L"TwoFingerDistanceThreshold",
                                                             0x1E0u,
                                                             1);
  TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold = GestureSession::ReadRegConfigValue(
                                                               a1,
                                                               L"TwoFingerActionTimeThreshold",
                                                               0x32u,
                                                               0);
  TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                                   a1,
                                                                   L"TwoFingerTapAndHoldTimeThreshold",
                                                                   0xC8u,
                                                                   0);
  TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                                a1,
                                                                L"TwoFingerTapDistanceThreshold",
                                                                0x14u,
                                                                1);
  TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold = GestureSession::ReadRegConfigValue(
                                                                  a1,
                                                                  L"TwoFingerDoubleTapTimeThreshold",
                                                                  0x190u,
                                                                  0);
  TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                                      a1,
                                                                      L"TwoFingerDoubleTapDistanceThreshold",
                                                                      0x3Cu,
                                                                      1);
}
