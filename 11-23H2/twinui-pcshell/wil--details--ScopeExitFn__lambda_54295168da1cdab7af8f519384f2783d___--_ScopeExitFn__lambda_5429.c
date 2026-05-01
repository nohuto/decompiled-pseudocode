/*
 * XREFs of wil::details::ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___::_ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___ @ 0x180562E70
 * Callers:
 *     _CPPIAllUpViewHost::Show_::_1_::dtor$2 @ 0x180563D38 (_CPPIAllUpViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180563110 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___::_ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
