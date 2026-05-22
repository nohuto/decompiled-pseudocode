/*
 * XREFs of ?__StaticInitConfig@TwoFingerDragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1801AF038
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801AE844 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1801ABFF4 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall TwoFingerDragRecognizer::__StaticInitConfig(HKEY a1)
{
  TwoFingerDragRecognizer::s_twoFingerDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                            a1,
                                                            L"TwoFingerDistanceThreshold",
                                                            0x1E0u,
                                                            1);
  TwoFingerDragRecognizer::s_initialDragThreshold = GestureSession::ReadRegConfigValue(
                                                      a1,
                                                      L"TwoFingerDragInitialThreshold",
                                                      0x14u,
                                                      1);
  TwoFingerDragRecognizer::s_twoFingerActionTimeThreshold = GestureSession::ReadRegConfigValue(
                                                              a1,
                                                              L"TwoFingerActionTimeThreshold",
                                                              0x32u,
                                                              0);
  TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold = GestureSession::ReadRegConfigValue(
                                                                     a1,
                                                                     L"TwoFingerDistanceVariationThreshold",
                                                                     0x32u,
                                                                     1);
}
