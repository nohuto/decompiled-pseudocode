/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x14089F830
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     VRegSetup @ 0x140819310 (VRegSetup.c)
 *     NtSetSecurityObject @ 0x14086E8B0 (NtSetSecurityObject.c)
 *     IoCreateDeviceSecure @ 0x14099CC50 (IoCreateDeviceSecure.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409ABF7C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1, DWORD a2, UNICODE_STRING *a3)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char); // rbx
  char PreviousMode; // [rsp+40h] [rbp-18h]
  DWORD v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  v3 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v4 = *(__int64 (__fastcall **)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char))(v3 + 152);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (char *)v4 == (char *)SeDefaultObjectMethod )
    return SeDefaultObjectMethod(a1, 0LL, &v7, a3, 0LL);
  if ( v4 == IopGetSetSecurityObject )
    return IopGetSetSecurityObject(a1, 0, &v7, a3, 0LL, (int)a1 - 48 + 40, *(_DWORD *)(v3 + 100), v3 + 76, PreviousMode);
  return guard_dispatch_icall_no_overrides(a1);
}
