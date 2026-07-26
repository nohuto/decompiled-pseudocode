/*
 * XREFs of ndisIsLwfBindingEnabled_0 @ 0x14015103C
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x140150970 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x140150BA4 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIsLwfBindingEnabled @ 0x140150F98 (ndisIsLwfBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x140150E40 (ndisIsBindPathEnabled.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x14015A1C4 (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled_0(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v6; // rcx
  wchar_t pszSrc[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( *(_DWORD *)(a1 + 64) || (v6 = 0LL, *(_DWORD *)(a2 + 56)) )
    v6 = 1LL;
  netsetupBuildBindingRegistryPath(v6, 0LL, a1, 0LL, a2, 0LL, pszSrc);
  return ndisIsBindPathEnabled(pszSrc, *(_BYTE *)(a2 + 52), a3);
}
