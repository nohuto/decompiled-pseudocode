/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x140463B10
 * Callers:
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1409A07D8 (PopCreateNotificationName.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x140C39A60 (SepVariableInitialization.c)
 * Callees:
 *     SymCryptSha256 @ 0x14051867C (SymCryptSha256.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int i; // edi
  __int128 v10; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]

  DestinationString = 0LL;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v12);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v12;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v8 = v13;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v8;
    for ( i = 0; i < 0xC; ++i )
    {
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * i], 0) )
      {
        RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
        *((_DWORD *)CapabilitySid + 2) = 3;
        *((_DWORD *)CapabilitySid + 3) = i + 1;
        break;
      }
    }
    RtlFreeAnsiString(&DestinationString);
    if ( i == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = RtlPrefixUnicodeString(&String1, UnicodeString, 1u) != 0 ? 0x10000 : 1024;
      v10 = v13;
      *((_OWORD *)CapabilitySid + 1) = v12;
      *((_OWORD *)CapabilitySid + 2) = v10;
    }
    return 0;
  }
  return result;
}
