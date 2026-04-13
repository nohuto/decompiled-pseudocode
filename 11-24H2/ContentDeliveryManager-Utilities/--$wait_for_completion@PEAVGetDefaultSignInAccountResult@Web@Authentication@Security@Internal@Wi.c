/*
 * XREFs of ??$wait_for_completion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@V?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800913D4
 * Callers:
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x1800921A4 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180091008 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::wait_for_completion<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *,Microsoft::WRL::ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int DefaultSignInAccount; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  DefaultSignInAccount = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *>(
                           a2,
                           (DWORD)a2,
                           a3);
  if ( DefaultSignInAccount >= 0 )
    DefaultSignInAccount = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD *))(*a2)[8])(
                             a2,
                             a1);
  if ( DefaultSignInAccount < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)DefaultSignInAccount,
      1);
  return a1;
}
