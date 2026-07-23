/*
 * XREFs of RtlCapabilityCheck @ 0x140A09AE0
 * Callers:
 *     PopCapabilityCheck @ 0x1404D6940 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140771940 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x140A09AA0 (ExpCapabilityCheck.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     RtlInitializeSid @ 0x1409EAF40 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A09EA8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140A81324 (RtlpLogCapabilityCheckLatency.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // si
  BOOLEAN v5; // di
  BOOLEAN v6; // r12
  int v9; // ebx
  PULONG v10; // r13
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  int v15; // r8d
  int v16; // r9d
  PULONG v17; // r13
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  BOOLEAN v20; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v21; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v22; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN IsMember; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PUNICODE_STRING QuadPart; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD Sid[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = CapabilityName;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v25 = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, 44);
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v5 = 0;
  HasCapabilitya = 0;
  v6 = 0;
  KeyValueInformation = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  IsMember = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_16;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_16;
  if ( RtlIsMultiSessionSku()
    && (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
    && ZwQueryValueKey(
         KeyHandle,
         CapabilityName,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x10u,
         &ResultLength) >= 0 )
  {
    v25 = 1;
    Sid[0] = 0x500000000000101LL;
    v17 = RtlSubAuthoritySid(Sid, 0);
    *v17 = 18;
    v18 = RtlCheckTokenMembership(TokenHandle, Sid, &v21);
    v5 = v21;
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_16;
    if ( v21 )
      goto LABEL_15;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v17 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v19 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
    v4 = v20;
    v9 = v19;
    if ( v19 < 0 )
      goto LABEL_16;
    if ( v20 )
      goto LABEL_15;
  }
  else
  {
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember);
    if ( v9 < 0 )
      goto LABEL_16;
    if ( IsMember )
      goto LABEL_15;
    Sid[0] = 0x500000000000101LL;
    v10 = RtlSubAuthoritySid(Sid, 0);
    *v10 = 18;
    v11 = RtlCheckTokenMembership(TokenHandle, Sid, &v21);
    v5 = v21;
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_16;
    if ( v21 )
      goto LABEL_15;
    *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 513;
    *v10 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v12 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
    v4 = v20;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_16;
    if ( v20 )
      goto LABEL_15;
    *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 257;
    *v10 = 4;
    v13 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v22);
    v6 = v22;
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_16;
    if ( v22 )
    {
LABEL_15:
      v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
      if ( v9 < 0 )
        goto LABEL_16;
      *HasCapability = HasCapabilitya;
    }
  }
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle);
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v16) = v6;
    LOBYTE(v15) = v4;
    RtlpLogCapabilityCheckLatency(
      (unsigned int)&PerformanceCounter,
      (unsigned int)&QuadPart,
      v15,
      v16,
      v25,
      *HasCapability);
  }
  return v9;
}
