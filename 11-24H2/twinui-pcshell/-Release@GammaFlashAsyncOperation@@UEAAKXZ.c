/*
 * XREFs of ?Release@GammaFlashAsyncOperation@@UEAAKXZ @ 0x180358DE0
 * Callers:
 *     ?Release@GammaFlashAsyncOperation@@W7EAAKXZ @ 0x180358DF0 (-Release@GammaFlashAsyncOperation@@W7EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WBA@EAAKXZ @ 0x180358E00 (-Release@GammaFlashAsyncOperation@@WBA@EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WGA@EAAKXZ @ 0x180358E10 (-Release@GammaFlashAsyncOperation@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GammaFlashAsyncOperation::Release(GammaFlashAsyncOperation *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncAction,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release();
}
