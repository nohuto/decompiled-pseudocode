/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x1805E80D4
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x1805E867C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdi

  *(_QWORD *)(a2 + 289) = a6;
  *(_QWORD *)(a2 + 297) = 0LL;
  *(_QWORD *)(a2 + 305) = 0LL;
  *(_QWORD *)(a2 + 297) = *a4;
  *(_QWORD *)(a2 + 305) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a2 + 313) = a5;
  *(_QWORD *)a2 = anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v8 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  *(_QWORD *)(v8 + 16) = off_180757968;
  *(_QWORD *)(v8 + 24) = off_180757910;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v8 + 8) = 1LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_BYTE *)(v8 + 48) = 0;
  *(_QWORD *)v8 = &off_1807578D0;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_QWORD *)(v8 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v8 + 56));
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_DWORD *)(v8 + 96) = 0;
  *(_BYTE *)(v8 + 100) = 0;
  *(_QWORD *)v8 = &off_180757890;
  *(_QWORD *)(v8 + 104) = 0LL;
  *a3 = v8 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a6 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a6);
  *(_BYTE *)(a2 + 288) = 0;
  return anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(a2);
}
