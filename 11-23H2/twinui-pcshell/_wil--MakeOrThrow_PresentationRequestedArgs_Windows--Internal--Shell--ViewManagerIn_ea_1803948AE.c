/*
 * XREFs of _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int_&__::_1_::dtor$0 @ 0x1803948AE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180396480 (--1-$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<PresentationRequestedArgs>::~ComPtr<PresentationRequestedArgs>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
