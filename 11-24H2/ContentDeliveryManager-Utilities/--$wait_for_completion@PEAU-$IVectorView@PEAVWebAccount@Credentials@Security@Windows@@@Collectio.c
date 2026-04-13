/*
 * XREFs of ??$wait_for_completion@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@V?$ComPtr@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180066B50
 * Callers:
 *     ??$call_and_wait_for_completion@UIIdentityManager@ContentManagement@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$$Z$$V@wil@@YA?A_PPEAUIIdentityManager@ContentManagement@@P812@EAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z@Z @ 0x1800668F0 (--$call_and_wait_for_completion@UIIdentityManager@ContentManagement@@PEAPEAU-$IAsyncOperation@PE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800662D0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVWebAccount@Credentials@Security.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::wait_for_completion<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *,Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *>(
         a2,
         (DWORD)a2,
         a3);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD *))(*a2)[8])(a2, a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
