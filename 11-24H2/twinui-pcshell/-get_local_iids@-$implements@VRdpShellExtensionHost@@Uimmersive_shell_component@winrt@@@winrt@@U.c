/*
 * XREFs of ?get_local_iids@?$implements@VRdpShellExtensionHost@@Uimmersive_shell_component@winrt@@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1802DF870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<RdpShellExtensionHost,winrt::immersive_shell_component>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
