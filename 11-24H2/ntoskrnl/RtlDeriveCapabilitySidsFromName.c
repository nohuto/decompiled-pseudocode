/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x14046B090
 * Callers:
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1409BA188 (PopCreateNotificationName.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x140C37920 (SepVariableInitialization.c)
 * Callees:
 *     SymCryptSha256 @ 0x14051ADAC (SymCryptSha256.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140962470 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING String2, _OWORD *Sid, _OWORD *a3)
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
  if ( !String2 || !Sid || !a3 )
    __fastfail(5u);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *Sid = 0LL;
  Sid[1] = 0LL;
  *((_QWORD *)Sid + 4) = 0LL;
  *((_DWORD *)Sid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, String2, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v12);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v12;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v13;
    *(_OWORD *)((char *)Sid + 12) = v7;
    *(_OWORD *)((char *)Sid + 28) = v8;
    for ( i = 0; i < 0xC; ++i )
    {
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * i], 0) )
      {
        RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
        *((_DWORD *)a3 + 2) = 3;
        *((_DWORD *)a3 + 3) = i + 1;
        break;
      }
    }
    RtlFreeAnsiString(&DestinationString);
    if ( i == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)a3 + 2) = 3;
      *((_DWORD *)a3 + 3) = RtlPrefixUnicodeString(&String1, String2, 1u) != 0 ? 0x10000 : 1024;
      v10 = v13;
      a3[1] = v12;
      a3[2] = v10;
    }
    return 0;
  }
  return result;
}
