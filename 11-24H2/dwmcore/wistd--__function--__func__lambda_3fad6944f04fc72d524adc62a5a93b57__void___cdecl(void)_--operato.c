/*
 * XREFs of wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_::operator() @ 0x18025A530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x180225C8C (-UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z.c)
 */

ULONG __fastcall wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl_void__::operator()(
        __int64 a1)
{
  ULONG result; // eax

  if ( g_pComposition )
    return CComposition::UpdateConnectedStandbyState(a1, 0xFFFFFFFF);
  return result;
}
