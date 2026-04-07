/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1800FA810
 * Callers:
 *     ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FAEE0 (-IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Windows::Foundation::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
