/*
 * XREFs of _lambda_b793b7859585398d23b805c61bb87427_::operator() @ 0x1803B66D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b793b7859585398d23b805c61bb87427___::Run @ 0x1803BF4D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b793b7859585398d23b805c61bb87427___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180246134 (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b793b7859585398d23b805c61bb87427_::operator()(__int64 a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v9);
  try
  {
    winrt::check_hresult(&v8, v2, (__int64)&v5);
    if ( v9 )
      UndockedSearchAppExperienceManager::RegisterViewCoordinatorEventsInternal(*(UndockedSearchAppExperienceManager **)(a1 + 8));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDB0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  }
  return 0LL;
}
