/*
 * XREFs of Feature_ShellHKeyAndLockScreen__private_IsEnabledDeviceUsageNoInline @ 0x1402897C4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     Feature_ShellHKeyAndLockScreen__private_IsEnabledFallback @ 0x1402897FC (Feature_ShellHKeyAndLockScreen__private_IsEnabledFallback.c)
 */

__int64 Feature_ShellHKeyAndLockScreen__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShellHKeyAndLockScreen__private_featureState & 0x10) != 0 )
    return Feature_ShellHKeyAndLockScreen__private_featureState & 1;
  else
    return Feature_ShellHKeyAndLockScreen__private_IsEnabledFallback(
             (unsigned int)Feature_ShellHKeyAndLockScreen__private_featureState,
             3LL);
}
