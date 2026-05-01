/*
 * XREFs of ??$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@impl@winrt@@YAPEAURegistrationData@implementation@Shell@Internal@Windows@1@AEBUhstring@1@0AEAY00$$CBG@Z @ 0x18063C99C
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FDD8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0RegistrationData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@00@Z @ 0x180661398 (--0RegistrationData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@00@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 *__fastcall winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
        struct winrt::hstring *a1,
        struct winrt::hstring *a2,
        unsigned __int16 *a3)
{
  volatile signed __int32 *v6; // r14
  volatile signed __int32 *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (volatile signed __int32 *)operator new(0x30uLL);
  v8[1] = v6;
  winrt::hstring::hstring((winrt::hstring *)v8, a3);
  winrt::Windows::Internal::Shell::implementation::RegistrationData::RegistrationData(
    (winrt::Windows::Internal::Shell::implementation::RegistrationData *)v6,
    a1,
    a2,
    (const struct winrt::hstring *)v8);
  *(_QWORD *)v6 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(v8);
  return v6;
}
