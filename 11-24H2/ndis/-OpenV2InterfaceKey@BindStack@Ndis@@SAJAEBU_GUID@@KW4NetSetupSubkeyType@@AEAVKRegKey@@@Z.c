/*
 * XREFs of ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x14015CEA0
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x14015CDE0 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015C2F0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

NTSTATUS __fastcall Ndis::BindStack::OpenV2InterfaceKey(
        struct _GUID *a1,
        __int64 a2,
        enum NetSetupSubkeyType a3,
        struct KRegKey *a4)
{
  size_t v5; // r8
  ULONG v6; // r9d
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-228h] BYREF
  wchar_t pszSrc[256]; // [rsp+40h] [rbp-218h] BYREF

  netsetupBuildObjectPath(2LL, (int *)a1, 0, 2u, pszSrc);
  DestinationString = 0LL;
  result = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v5, v6);
  if ( result >= 0 )
    return KRegKey::Open(a4, 1u, &DestinationString, 0LL);
  return result;
}
