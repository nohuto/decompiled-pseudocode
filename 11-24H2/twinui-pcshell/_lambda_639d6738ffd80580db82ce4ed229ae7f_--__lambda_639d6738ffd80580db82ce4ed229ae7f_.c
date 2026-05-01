/*
 * XREFs of _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x18030B4F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x18030B518 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--_CTask.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18030BE10 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180038080 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
