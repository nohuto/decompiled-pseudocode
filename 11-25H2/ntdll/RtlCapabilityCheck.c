/*
 * XREFs of RtlCapabilityCheck @ 0x18008D9E0
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1801160D0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     RtlRunOnceBeginInitialize @ 0x18008E110 (RtlRunOnceBeginInitialize.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18008E210 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlIsMultiSessionSku @ 0x18008E430 (RtlIsMultiSessionSku.c)
 *     EtwEventWriteTransfer @ 0x18008E770 (EtwEventWriteTransfer.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18008FD38 (RtlpCapabilityCheckSystemCapability.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  char v3; // r13
  BOOLEAN v5; // r14
  BOOLEAN v6; // di
  int v9; // ebx
  size_t v10; // rax
  unsigned int v11; // r13d
  BOOLEAN v12; // di
  NTSTATUS v13; // eax
  BOOLEAN v16; // cl
  BOOLEAN IsMember[4]; // [rsp+38h] [rbp-D0h] BYREF
  BOOLEAN HasCapabilitya[4]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h]
  int v20; // [rsp+44h] [rbp-C4h]
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v23; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCounter_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  __int128 KeyValueInformation; // [rsp+C0h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  void *v31; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+F0h] [rbp-18h]
  int v33; // [rsp+F4h] [rbp-14h]
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  ULONG *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  char *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  char *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 SidToCheck; // [rsp+148h] [rbp+40h] BYREF
  int v45; // [rsp+150h] [rbp+48h]
  int v46; // [rsp+154h] [rbp+4Ch]
  _BYTE CapabilityGroupSid[48]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+188h] [rbp+80h] BYREF

  v3 = 0;
  ResultLength[1] = 0;
  v5 = 0;
  v6 = 0;
  KeyHandle = 0LL;
  v19 = 0;
  LOWORD(v20) = 1280;
  *(_OWORD *)&PerformanceCounter_8[0].LowPart = 0LL;
  HasCapabilitya[0] = 0;
  memset(&ObjectAttributes, 0, 44);
  IsMember[1] = 0;
  IsMember[0] = 0;
  KeyValueInformation = 0LL;
  IsMember[2] = 0;
  IsMember[3] = 0;
  PerformanceCounter.QuadPart = 0LL;
  v23.QuadPart = 0LL;
  RtlQueryPerformanceCounter(&PerformanceCounter);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_28;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_28;
  if ( !RtlIsMultiSessionSku() )
    goto LABEL_14;
  PerformanceCounter_8[0].HighPart = 0;
  PerformanceCounter_8[1].QuadPart = (__int64)L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities";
  v10 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v10 >= 0xFFFE )
    LOWORD(v10) = -4;
  LOWORD(PerformanceCounter_8[0].LowPart) = v10;
  HIWORD(PerformanceCounter_8[0].u.LowPart) = v10 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)PerformanceCounter_8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0
    || NtQueryValueKey(
         KeyHandle,
         CapabilityName,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x10u,
         &ResultLength[1]) < 0 )
  {
LABEL_14:
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember[3]);
    if ( v9 < 0 )
      goto LABEL_28;
    if ( IsMember[3] )
      goto LABEL_22;
    SidToCheck = 0x500000000000101LL;
    v45 = 18;
    v9 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, IsMember);
    if ( v9 >= 0 )
    {
      v6 = IsMember[0];
      if ( !IsMember[0] )
      {
        v11 = v19;
        HIWORD(SidToCheck) = v20;
        LOWORD(SidToCheck) = 513;
        *(_DWORD *)((char *)&SidToCheck + 2) = v19;
        v45 = 32;
        v46 = 544;
        v9 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &IsMember[1]);
        if ( v9 < 0 )
        {
          v3 = 0;
          goto LABEL_28;
        }
        v5 = IsMember[1];
        if ( !IsMember[1] )
        {
          HIWORD(SidToCheck) = v20;
          LOWORD(SidToCheck) = 257;
          *(_DWORD *)((char *)&SidToCheck + 2) = v11;
          v45 = 4;
          v3 = 0;
          v9 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 2u, &IsMember[2]);
          if ( v9 < 0 )
            goto LABEL_28;
          if ( IsMember[2] )
            goto LABEL_22;
          goto LABEL_24;
        }
        v3 = 0;
      }
LABEL_22:
      v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, HasCapabilitya);
      if ( v9 < 0 )
        goto LABEL_28;
      *HasCapability = HasCapabilitya[0];
      goto LABEL_24;
    }
LABEL_49:
    v6 = IsMember[0];
    goto LABEL_28;
  }
  SidToCheck = 0x500000000000101LL;
  v45 = 18;
  v3 = 1;
  v9 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, IsMember);
  if ( v9 < 0 )
    goto LABEL_49;
  v6 = IsMember[0];
  if ( IsMember[0] )
    goto LABEL_22;
  *(_DWORD *)((char *)&SidToCheck + 2) = v19;
  HIWORD(SidToCheck) = v20;
  LOWORD(SidToCheck) = 513;
  v45 = 32;
  v46 = 544;
  v9 = RtlCheckTokenMembershipEx(TokenHandle, &SidToCheck, 0, &IsMember[1]);
  if ( v9 < 0 )
    goto LABEL_28;
  v5 = IsMember[1];
  if ( IsMember[1] )
    goto LABEL_22;
LABEL_24:
  if ( *HasCapability && !v5 && !v6 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle);
LABEL_28:
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlQueryPerformanceCounter(&v23);
  if ( !v6 )
  {
    v12 = *HasCapability;
    if ( NtCurrentPeb()->ProcessHeap )
    {
      HasCapabilitya[1] = 0;
      v13 = RtlRunOnceBeginInitialize(&RtlpCapChkTelemetryRunOnceCtx, 0, 0LL);
      if ( v13 < 0 )
      {
        v16 = 0;
      }
      else
      {
        if ( v13 != 259
          || (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE638),
              RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300],
              v13 = RtlRunOnceComplete(&RtlpCapChkTelemetryRunOnceCtx, 0, 0LL),
              v13 >= 0) )
        {
LABEL_34:
          if ( PerformanceCounter.QuadPart
            && v23.QuadPart
            && RtlpPerformanceCounterFrequency
            && _InterlockedExchangeAdd16(&TelemetryEventThrottle, 0xFFFFu) == 1 )
          {
            if ( (unsigned int)dword_1801CE638 > 5
              && (qword_1801CE648 & 0x200000000000LL) != 0
              && (qword_1801CE650 & 0x200000000000LL) == qword_1801CE650 )
            {
              v26 = 1000000 * (v23.QuadPart - PerformanceCounter.QuadPart) / RtlpPerformanceCounterFrequency;
              EventDescriptor.Keyword = 0x200000000000LL;
              v34 = &v26;
              LOWORD(ResultLength[0]) = *(_WORD *)&IsMember[1];
              v35 = 8LL;
              v36 = ResultLength;
              v38 = (char *)ResultLength + 1;
              v40 = (char *)ResultLength + 2;
              v42 = (char *)ResultLength + 3;
              *(_DWORD *)&EventDescriptor.Level = 5;
              UserData.Ptr = (unsigned __int64)off_1801CE640;
              v37 = 1LL;
              v39 = 1LL;
              BYTE2(ResultLength[0]) = v3;
              v41 = 1LL;
              HIBYTE(ResultLength[0]) = v12;
              v43 = 1LL;
              *(_DWORD *)&EventDescriptor.Id = 184549376;
              UserData.Size = *(unsigned __int16 *)off_1801CE640;
              v31 = &unk_1801A42D4;
              UserData.Reserved = 2;
              v32 = 105;
              v33 = 1;
              v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(qword_1801CE658, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
            }
            TelemetryEventThrottle = 100;
          }
          return v9;
        }
        v16 = 1;
      }
      HasCapabilitya[1] = v16;
      RtlReportCriticalFailure(v13, (__int64)&HasCapabilitya[1], 1);
      goto LABEL_34;
    }
  }
  return v9;
}
