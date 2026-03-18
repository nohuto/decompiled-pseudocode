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

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *String2, char *a3)
{
  char v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  PULONG v10; // r13
  int v11; // eax
  int v13; // r8d
  int v14; // r9d
  PULONG v15; // r13
  int v16; // eax
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  char v19; // [rsp+34h] [rbp-CCh] BYREF
  char v20; // [rsp+35h] [rbp-CBh]
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
  _OWORD v31[3]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = String2;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v20 = 0;
  memset(&ObjectAttributes, 0, 44);
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v19 = 0;
  v4 = 0;
  KeyValueInformation = 0LL;
  v17 = 0;
  v18 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !String2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(String2, Group, v31);
  if ( v9 < 0 )
    goto LABEL_14;
  if ( (unsigned __int8)RtlIsMultiSessionSku(v8, v7)
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
    v20 = 1;
    Sid[0] = 0x500000000000101LL;
    v15 = RtlSubAuthoritySid(Sid, 0);
    *v15 = 18;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_14;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v15 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v16 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    v9 = v16;
    if ( v16 < 0 )
      goto LABEL_14;
  }
  else
  {
    v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Group, 2, &v18);
    if ( v9 < 0 )
      goto LABEL_14;
    if ( v18 )
      goto LABEL_13;
    Sid[0] = 0x500000000000101LL;
    v10 = RtlSubAuthoritySid(Sid, 0);
    *v10 = 18;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_14;
    *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 513;
    *v10 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v9 < 0 )
      goto LABEL_14;
    *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = IdentifierAuthority;
    LOWORD(Sid[0]) = 257;
    *v10 = 4;
    v11 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v17);
    v4 = v17;
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_14;
    if ( v17 )
    {
LABEL_13:
      v9 = RtlCheckTokenCapability(ExistingTokenHandle, v31, &v19);
      if ( v9 < 0 )
        goto LABEL_14;
      *a3 = v19;
    }
  }
  if ( *a3 )
    v9 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle);
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (UNICODE_STRING *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v14) = v4;
    LOBYTE(v13) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v13, v14, v20, *a3);
  }
  return (unsigned int)v9;
}
