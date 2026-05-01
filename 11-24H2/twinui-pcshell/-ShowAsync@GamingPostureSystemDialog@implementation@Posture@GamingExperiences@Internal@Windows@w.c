/*
 * XREFs of ?ShowAsync@GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@67@XZ @ 0x18033F220
 * Callers:
 *     ?ShowAsync@?$produce@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureSystemDialog@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18033F1D0 (-ShowAsync@-$produce@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Interna.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_InitCoro$2 @ 0x18033E564 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 */

__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync(
        __int64 a1,
        __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+6E8h] [rbp+10h] BYREF

  v4 = operator new(0x6B0uLL);
  v6 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
