/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x1408587B0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     VRegSetup @ 0x140829110 (VRegSetup.c)
 *     NtSetSecurityObject @ 0x14087A070 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409946EC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IoCreateDeviceSecure @ 0x1409A1B40 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x140AC3B1C (PiSwGetChildPdo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1, ULONG a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  ULONG v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v3 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(__int64, int, ULONG *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v3 + 152) == SeDefaultObjectMethod )
    return SeDefaultObjectMethod(a1, 0, &v5, a3, 0LL, (__int64 *)(a1 - 48 + 40), *(_DWORD *)(v3 + 100), v3 + 76);
  else
    return guard_dispatch_icall_no_overrides(a1, 0LL, &v5, a3);
}
