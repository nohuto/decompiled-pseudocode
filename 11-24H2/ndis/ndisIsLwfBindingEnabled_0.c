/*
 * XREFs of ndisIsLwfBindingEnabled_0 @ 0x14014637C
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x140145CB0 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x140145EE4 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIsLwfBindingEnabled @ 0x1401462D8 (ndisIsLwfBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x140146180 (ndisIsBindPathEnabled.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x14014F4F4 (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
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
