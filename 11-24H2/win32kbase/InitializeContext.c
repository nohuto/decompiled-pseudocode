/*
 * XREFs of InitializeContext @ 0x140212970
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     RegisterCoreMsgProviderPreferences @ 0x1401404F0 (RegisterCoreMsgProviderPreferences.c)
 */

__int64 InitializeContext()
{
  RegisterCoreMsgProviderPreferences(
    20LL,
    1u,
    2u,
    0LL,
    (__int64)lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  return RegisterCoreMsgProviderPreferences(
           2LL,
           1u,
           2u,
           0LL,
           (__int64)lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_);
}
