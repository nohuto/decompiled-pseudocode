/*
 * XREFs of WaitForDebuggerIfRegistryKeyIsSet @ 0x1800994CC
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004F6C4 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS WaitForDebuggerIfRegistryKeyIsSet()
{
  LSTATUS result; // eax
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\DWM",
             L"MPCInputRouterWaitForDebugger",
             0x10u,
             0LL,
             &v1,
             &v2);
  if ( v1 == 1 )
  {
    while ( 1 )
    {
      result = IsDebuggerPresent();
      if ( result )
        break;
      Sleep(0x64u);
    }
    __debugbreak();
  }
  return result;
}
