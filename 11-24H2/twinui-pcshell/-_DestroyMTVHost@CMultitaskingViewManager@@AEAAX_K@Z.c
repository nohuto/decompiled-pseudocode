/*
 * XREFs of ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x1804A42BC
 * Callers:
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18025A820 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x1804A3CE0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x1800B3740 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void __fastcall CMultitaskingViewManager::_DestroyMTVHost(CMultitaskingViewManager *this, unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8

  v4 = 16 * a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(16 * a2 + *((_QWORD *)this + 36) + 8LL));
  if ( a2 < *((_QWORD *)this + 37) )
  {
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)(v4 + *((_QWORD *)this + 36)));
    v5 = *((_QWORD *)this + 37);
    if ( a2 != v5 - 1 )
      memmove_0(
        (void *)(v4 + *((_QWORD *)this + 36)),
        (const void *)(v4 + *((_QWORD *)this + 36) + 16),
        16 * (v5 - a2) - 16);
    --*((_QWORD *)this + 37);
  }
}
