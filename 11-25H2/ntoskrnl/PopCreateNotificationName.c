/*
 * XREFs of PopCreateNotificationName @ 0x140A73BA8
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14069CBC0 (ZwCreateWnfStateName.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 */

int __fastcall PopCreateNotificationName(PWNF_STATE_NAME StateName)
{
  int result; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD SecurityDescriptor[5]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE CapabilityGroupSid[56]; // [rsp+B0h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E8h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce(&Acl, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    RtlpAddKnownAce(&Acl, 2u, 0, 1179649, CapabilitySid, 0);
    memset(SecurityDescriptor, 0, 32);
    LOBYTE(SecurityDescriptor[0]) = 1;
    SecurityDescriptor[4] = &Acl;
    WORD1(SecurityDescriptor[0]) = 4;
    return ZwCreateWnfStateName(
             StateName,
             WnfTemporaryStateName,
             WnfDataScopeMachine,
             0,
             0LL,
             0x24u,
             SecurityDescriptor);
  }
  return result;
}
