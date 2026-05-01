/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1806DA45C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1806A6C08 (--1-$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::~ComPtr<XamlSnapAssistViewHost>(*(__int64 **)(a2 + 64));
  }
  return result;
}
