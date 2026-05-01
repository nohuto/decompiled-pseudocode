/*
 * XREFs of ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x1801F71B0
 * Callers:
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180302AA0 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::_ValidateApplicationState(__int64 a1, int a2)
{
  __int64 result; // rax
  _BYTE *v3; // r8
  char v4; // dl

  result = 0LL;
  v3 = (_BYTE *)(a1 + 568);
  if ( a2 || (v4 = 1, (*v3 & 8) == 0) )
    v4 = 0;
  if ( *(_BYTE *)(a1 + 720) || (*v3 & 1) == 0 && !v4 )
    return 2147947423LL;
  return result;
}
