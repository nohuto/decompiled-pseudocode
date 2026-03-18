/*
 * XREFs of _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401989E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadPointerDeviceSettings @ 0x1401479D0 (ReadPointerDeviceSettings.c)
 *     SendCrosshairPropertiesChanged @ 0x140147BF0 (SendCrosshairPropertiesChanged.c)
 *     SendCrosshairEnabledStatusChanged @ 0x140147C40 (SendCrosshairEnabledStatusChanged.c)
 *     SendPositionChanged @ 0x140147CA0 (SendPositionChanged.c)
 */

__int64 __fastcall lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  W32GetUserSessionState(a1);
  SendPositionChanged();
  LOBYTE(v2) = *(_DWORD *)(W32GetUserSessionState(v1) + 67504) != 0;
  SendCrosshairEnabledStatusChanged(v2);
  v4 = 0;
  result = ReadPointerDeviceSettings(178LL, &v4);
  if ( (_DWORD)result )
    return SendCrosshairPropertiesChanged(v4);
  return result;
}
