/*
 * XREFs of RtlCapabilityCheck @ 0x140A62840
 * Callers:
 *     PopCapabilityCheck @ 0x1404D6030 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140780B90 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x140A62804 (ExpCapabilityCheck.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A62BCC (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140A85D18 (RtlpLogCapabilityCheckLatency.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *String2, char *a3)
{
  char v4; // r12
  int v7; // ebx
  PULONG v8; // r13
  int v9; // eax
  int v11; // r8d
  int v12; // r9d
  PULONG v13; // r13
  int v14; // eax
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  char v17; // [rsp+34h] [rbp-CCh] BYREF
  char v18; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING *QuadPart; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD Sid[2]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD Group[3]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v29[3]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = String2;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v18 = 0;
  memset(&ObjectAttributes, 0, 44);
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v17 = 0;
  v4 = 0;
  KeyValueInformation = 0LL;
  v15 = 0;
  v16 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !String2 || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_14;
  }
  *a3 = 0;
  v7 = RtlDeriveCapabilitySidsFromName(String2, Group, v29);
  if ( v7 < 0 )
    goto LABEL_14;
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
    && ZwQueryValueKey(KeyHandle, String2, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0 )
  {
    v18 = 1;
    Sid[0] = 0x500000000000101LL;
    v13 = RtlSubAuthoritySid(Sid, 0);
    *v13 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_14;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v13 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v14 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    v7 = v14;
    if ( v14 < 0 )
      goto LABEL_14;
  }
  else
  {
    v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Group, 2, &v16);
    if ( v7 < 0 )
      goto LABEL_14;
    if ( v16 )
      goto LABEL_13;
    Sid[0] = 0x500000000000101LL;
    v8 = RtlSubAuthoritySid(Sid, 0);
    *v8 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_14;
    *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 513;
    *v8 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_14;
    *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 257;
    *v8 = 4;
    v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v15);
    v4 = v15;
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_14;
    if ( v15 )
    {
LABEL_13:
      v7 = RtlCheckTokenCapability(ExistingTokenHandle, v29, &v17);
      if ( v7 < 0 )
        goto LABEL_14;
      *a3 = v17;
    }
  }
  if ( *a3 )
    v7 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle);
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (UNICODE_STRING *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v12) = v4;
    LOBYTE(v11) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v11, v12, v18, *a3);
  }
  return (unsigned int)v7;
}
