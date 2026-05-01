/*
 * XREFs of _anonymous_namespace_::StringifyApplicationState @ 0x18051B3EC
 * Callers:
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::operator() @ 0x180207574 (_lambda_4b0775d64c2392808fe7dff402e255dc_--operator().c)
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::StringifyApplicationState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return L"AppStateUnknown";
  v1 = a1 - 1;
  if ( !v1 )
    return L"AppActive";
  v2 = v1 - 1;
  if ( !v2 )
    return L"AppSuspending";
  v3 = v2 - 1;
  if ( !v3 )
    return L"AppSuspended";
  v4 = v3 - 1;
  if ( !v4 )
    return L"AppTerminatedBySystem";
  if ( v4 == 1 )
    return L"AppTerminatedByUser";
  return L"AppStateInvalid";
}
