/*
 * XREFs of _anonymous_namespace_::StringifyApplicationState @ 0x180207324
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251C20 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18046D77C (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x18046DD6C (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     _lambda_cbd8600547eeabb3ce2712a18af507ce_::operator() @ 0x18046F104 (_lambda_cbd8600547eeabb3ce2712a18af507ce_--operator().c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::StringifyApplicationState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return L"AppStateUnknown";
  v1 = a1 - 1;
  if ( !v1 )
    return L"AppActive";
  v2 = v1 - 1;
  if ( !v2 )
    return L"AppSuspending";
  v4 = v2 - 1;
  if ( !v4 )
    return L"AppSuspended";
  v5 = v4 - 1;
  if ( !v5 )
    return L"AppTerminatedBySystem";
  if ( v5 == 1 )
    return L"AppTerminatedByUser";
  return L"AppStateInvalid";
}
