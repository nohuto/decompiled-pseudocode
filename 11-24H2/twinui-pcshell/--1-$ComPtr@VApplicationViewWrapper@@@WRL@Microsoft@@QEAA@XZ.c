/*
 * XREFs of ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802165EC
 * Callers:
 *     _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView___&__::_1_::dtor$0 @ 0x1806CDBB0 (_wil--MakeOrThrow_ApplicationViewWrapper_IApplicationView___-__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IObjectProvider,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
