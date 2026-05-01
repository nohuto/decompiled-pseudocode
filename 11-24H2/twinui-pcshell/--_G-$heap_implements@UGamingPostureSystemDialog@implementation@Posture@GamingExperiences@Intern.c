/*
 * XREFs of ??_G?$heap_implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18032D890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x18032D384 (--1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UE.c)
 */

winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog>::`scalar deleting destructor'(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *a1,
        char a2)
{
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::~GamingPostureSystemDialog(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
