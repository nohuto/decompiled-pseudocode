/*
 * XREFs of EtwpStartLogger @ 0x1409D017C
 * Callers:
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpStartTrace @ 0x1409D0104 (EtwpStartTrace.c)
 *     EtwpStartBootLogger @ 0x140C408C0 (EtwpStartBootLogger.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     EtwpFreeApcPool @ 0x140495034 (EtwpFreeApcPool.c)
 *     EtwpStartLoggerThread @ 0x1404A2E5C (EtwpStartLoggerThread.c)
 *     EtwpSetQpcDeltaTracking @ 0x1404B0FCC (EtwpSetQpcDeltaTracking.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     EtwpSetPartitionContext @ 0x14064EF1C (EtwpSetPartitionContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     EtwpEventWriteTemplateSessionAndHandle @ 0x1407A7A30 (EtwpEventWriteTemplateSessionAndHandle.c)
 *     EtwpEventWriteTemplateSessionDesiredAccess @ 0x1407A7AC0 (EtwpEventWriteTemplateSessionDesiredAccess.c)
 *     EtwpEventWriteTemplateSessionFromCapturedData @ 0x1407A7B58 (EtwpEventWriteTemplateSessionFromCapturedData.c)
 *     EtwpEventWriteTemplateSessionMaxLoggers @ 0x1407A7C24 (EtwpEventWriteTemplateSessionMaxLoggers.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140836FE0 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1409CF810 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 *     EtwpLookupLoggerIdByName @ 0x1409CFB04 (EtwpLookupLoggerIdByName.c)
 *     EtwpInitializeTimeStamp @ 0x1409CFBB0 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1409D108C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x1409D11F4 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1409D12AC (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpGetFlagExtension @ 0x1409D1344 (EtwpGetFlagExtension.c)
 *     EtwpValidateFlagExtension @ 0x1409D1470 (EtwpValidateFlagExtension.c)
 *     EtwpEventWriteTemplateSession @ 0x1409D26F0 (EtwpEventWriteTemplateSession.c)
 *     EtwpCaptureString @ 0x1409D28F8 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x1409D4E48 (EtwpSendSessionNotification.c)
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140A4927C (EtwpFreeTraceBufferPool.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A8A8A8 (EtwpEventWriteTemplateAdmin.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r15d
  int FileName; // edi
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int *inited; // rsi
  __int64 FlagExtension; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  int v36; // eax
  PVOID v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rcx
  unsigned int i; // ebx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // edx
  unsigned int v54; // eax
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  __int64 Pool2; // rax
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rcx
  const WCHAR *v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int v72; // edi
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  char v77; // al
  void *v78; // rcx
  __int64 v79; // rbx
  unsigned int v80; // [rsp+40h] [rbp-C0h]
  unsigned int v81; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v82; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v84; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v86; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-80h] BYREF
  int v88; // [rsp+90h] [rbp-70h] BYREF
  __int64 v89; // [rsp+98h] [rbp-68h]
  __int64 v90; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-58h] BYREF
  UUID Buf2; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v94[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  __int64 *v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+108h] [rbp+8h]
  int *v99; // [rsp+110h] [rbp+10h]
  __int64 v100; // [rsp+118h] [rbp+18h]

  v2 = 0LL;
  v80 = 8;
  v81 = 0;
  P = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v84 = 0;
  Buf2 = 0LL;
  v86 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v86, 0LL);
  v7 = *(_DWORD *)(a2 + 64) & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((*(_BYTE *)(a2 + 64) & 8) != 0 || (*(_BYTE *)(a2 + 64) & 4) != 0) )
    v7 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v7 & 0x40000) != 0 )
    v7 |= 0x80u;
  if ( (v7 & 0x80000) != 0 && (v7 & 0x1000000) != 0 )
    v7 &= ~0x1000000u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_118;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString, v5, v6);
  if ( FileName )
    goto LABEL_119;
  if ( (v7 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v7 & 0xF) != 0 )
      goto LABEL_118;
    if ( (v7 & 0x100) != 0 )
      v7 &= ~0x100u;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v7 & 3) == 3
    || (v7 & 0xC000) == 0xC000
    || (v7 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v7 & 6) == 6
    || (v7 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v7 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (*(_DWORD *)(a2 + 64) & 0xC) != 0)
    || (v7 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v7 & 0x402) == 0 && ((v7 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v7 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_118;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v7 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || _bittest((const signed __int32 *)(a2 + 64), 0x19u) )
    {
      goto LABEL_118;
    }
    v56 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v56 )
      v56 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v56 )
      goto LABEL_118;
    v57 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v57 )
      v57 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v57 || (v7 & 4) != 0 )
      goto LABEL_118;
  }
  v9 = *(_DWORD *)(a2 + 64);
  if ( (v9 & 0x3000000) == 0x3000000 || (v9 & 0x4000000) != 0 && (v9 & 0x106) != 0 )
    goto LABEL_118;
  if ( (v9 & 0x10000) != 0 )
    goto LABEL_118;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !EtwpKsrCallbackObject )
    {
      FileName = -1073741637;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LARGE_MDL_NOT_SUPPORTED) )
        EtwpEventWriteTemplateSessionFromCapturedData(
          v65,
          v64,
          a2 + 24,
          *(_DWORD *)(a2 + 64),
          &DestinationString.Length,
          &v86.Length);
      goto LABEL_119;
    }
    if ( (v9 & 0x400) == 0 || (v9 & 0x1000000) != 0 )
      goto LABEL_118;
  }
  v10 = *(_DWORD *)(a2 + 112);
  if ( v10 < 0 )
  {
    if ( EtwpBootPhase || (v10 & 2) == 0 || (v9 & 0x2000000) == 0 || ((*(_DWORD *)(a2 + 40) - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_118;
    v66 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v66 )
      v66 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v66 )
      goto LABEL_118;
  }
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
  {
LABEL_119:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v44,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v45,
        (unsigned int)&DestinationString,
        (__int64)&v86,
        FileName,
        v7);
    if ( DestinationString.Buffer )
      ExFreePool(DestinationString.Buffer);
    if ( v86.Buffer )
      ExFreePool(v86.Buffer);
    if ( P && P != (PVOID)WmipDefaultAccessSd && P != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)FileName;
  }
  v11 = ((v7 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v11 = (v7 & 0x100 | 0x400) >> 3;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v81) )
    goto LABEL_160;
  v12 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
  if ( v12 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_119;
  }
  if ( (v7 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)PsGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v7 |= 0x400000u;
    }
    else
    {
      v7 |= 0x800000u;
    }
  }
  v13 = *(_QWORD *)(a1 + 712);
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v89 = v13;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v14 )
    goto LABEL_207;
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v15 )
  {
LABEL_207:
    RtlFreeAnsiString(&DestinationString);
    v59 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
      v59 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v59 )
    {
      v81 = 2;
      v69 = L"Circular Kernel Context Logger";
      v80 = 1;
      v2 = 16LL;
    }
    else
    {
      v81 = 0;
      v69 = L"NT Kernel Logger";
      v80 = 0;
    }
    if ( !RtlCreateUnicodeString(&DestinationString, v69) )
      goto LABEL_209;
    v7 |= 0x80u;
    if ( (v7 & 0x1000000) != 0 )
      goto LABEL_118;
    v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + v13), v13 | 1, 1LL) == 1;
    goto LABEL_159;
  }
  v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( v16 )
  {
    v46 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v46 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v46 )
    {
      if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
      {
        v58 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
        if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
          v58 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
        if ( v58 )
          goto LABEL_160;
      }
      for ( i = 4; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v48 = (_QWORD *)EtwpAcquireLoggerContextByLoggerId(a1, i, 0);
        if ( v48 )
        {
          v49 = *(_QWORD *)((char *)v48 + 276) - *(_QWORD *)&Buf2.Data1;
          if ( !v49 )
            v49 = *(_QWORD *)((char *)v48 + 284) - *(_QWORD *)Buf2.Data4;
          v50 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v48[170] + 704LL) + 8LL * *(unsigned int *)v48);
          if ( !v49 )
          {
            ExReleaseRundownProtectionCacheAwareEx(v50, 1u);
            break;
          }
          ExReleaseRundownProtectionCacheAwareEx(v50, 1u);
        }
      }
      v54 = *(_DWORD *)(a1 + 16);
      if ( i < v54 )
        goto LABEL_160;
      v81 = 4;
      if ( v54 > 4 )
      {
        do
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8LL * v81), v13 | 1, 1LL) == 1 )
            break;
          ++v81;
        }
        while ( v81 < *(_DWORD *)(a1 + 16) );
      }
      if ( v81 >= *(_DWORD *)(a1 + 16) )
      {
        if ( !byte_140E3EC79 )
        {
          UserData.Ptr = a1 + 16;
          byte_140E3EC79 = 1;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &UserData);
          if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x200000000000LL) )
          {
            v90 = 1LL;
            v95 = &v90;
            v96 = 8LL;
            v97 = &v91;
            v88 = *(_DWORD *)(a1 + 16);
            v99 = &v88;
            v91 = 0x1000000LL;
            v98 = 8LL;
            v100 = 4LL;
            tlgWriteAgg((__int64)&dword_140E09198, (unsigned __int8 *)&dword_140052CF4, v67, 5u, (__int64)v94);
          }
        }
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v68,
            &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS,
            &DestinationString.Length,
            *(_DWORD *)(a1 + 16));
        goto LABEL_119;
      }
      goto LABEL_153;
    }
    v81 = 3;
    if ( (v7 & 0x1000000) == 0 )
    {
      if ( DestinationString.Buffer )
      {
        ExFreePool(DestinationString.Buffer);
        DestinationString = 0LL;
      }
      if ( !RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
        goto LABEL_209;
      v7 |= 0x80u;
      v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v13 | 1, 1LL) == 1;
LABEL_159:
      if ( !v55 )
        goto LABEL_160;
LABEL_153:
      LODWORD(v2) = v80;
      goto LABEL_46;
    }
LABEL_118:
    FileName = -1073741811;
    goto LABEL_119;
  }
  v81 = 1;
  if ( !EtwpGetFlagExtension(a2, 1LL) )
  {
    LODWORD(v2) = 8;
    goto LABEL_45;
  }
  if ( (v7 & 0x1000000) != 0 )
    goto LABEL_118;
  RtlFreeAnsiString(&DestinationString);
  if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
  {
LABEL_209:
    FileName = -1073741801;
    goto LABEL_119;
  }
  v80 = 0;
LABEL_45:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v13 | 1, 1LL) != 1 )
  {
LABEL_160:
    FileName = -1073741771;
    goto LABEL_119;
  }
LABEL_46:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v81), 1u);
  if ( *(int *)(a2 + 112) >= 0 )
  {
    EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &P);
    FileName = EtwpAccessCheck(P, v11, 0LL);
    if ( FileName < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE_ACCESS_DENIED) )
        EtwpEventWriteTemplateSessionDesiredAccess(v71, v70, &DestinationString.Length, (__int64)&Buf2, v11);
      goto LABEL_309;
    }
  }
  v17 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v17 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v17 )
    v82 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v82 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && (_DWORD)v2 == 8 )
  {
    if ( *(int *)(a2 + 112) >= 0 )
    {
      FileName = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
      if ( FileName < 0 )
        goto LABEL_309;
    }
    v72 = 2;
    v80 = 2;
    while ( _bittest((const signed __int32 *)(a1 + 4520), v72) )
    {
      v80 = ++v72;
      if ( v72 >= 8 )
      {
        v80 = v72;
        if ( v72 != 8 )
          break;
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v73,
            &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS,
            &DestinationString.Length,
            8);
        goto LABEL_309;
      }
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v7, *(_DWORD *)(a2 + 112));
  FlagExtension = EtwpGetFlagExtension(a2, 6LL);
  v21 = 0LL;
  v22 = FlagExtension;
  if ( FlagExtension )
  {
    if ( 4 * *(_WORD *)FlagExtension == 12 )
    {
      v74 = EtwpSetPartitionContext((__int64 *)inited + 198, *(_QWORD *)(FlagExtension + 4), 0LL);
      v21 = 0LL;
      FileName = v74;
      if ( v74 < 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_INVALID_MEMORY_PARTITION) )
          EtwpEventWriteTemplateSessionAndHandle(v76, v75, &DestinationString.Length, *(_QWORD *)(v22 + 4));
        goto LABEL_217;
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    v21 = 0LL;
    DestinationString = 0LL;
  }
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_309:
    v79 = v81;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v81), 1u);
    _InterlockedExchange64((volatile __int64 *)(v89 + 8 * v79), 1LL);
    goto LABEL_119;
  }
  *(UUID *)(inited + 69) = Buf2;
  inited[73] = *(_DWORD *)(a2 + 60);
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
  inited[50] = *(_DWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
  {
    FileName = EtwpSetQpcDeltaTracking((__int64)inited);
    if ( FileName < 0 )
      goto LABEL_217;
  }
  if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
    inited[204] |= 0x40000000u;
  v23 = *(_DWORD *)(a2 + 68);
  if ( v23 )
  {
    inited[52] = v23;
  }
  else if ( (v7 & 0x100) != 0 )
  {
    inited[52] = (v7 & 0x10) != 0 ? 1000 : 1;
  }
  v24 = *(_DWORD *)(a2 + 76);
  v25 = v24;
  if ( v24 && (inited[52] > (unsigned int)v21 || v24 < 0) )
  {
    *(_DWORD *)(a2 + 76) = v21;
    v25 = v21;
  }
  FileName = v21;
  *inited = v81;
  inited[53] = v25;
  *((_QWORD *)inited + 170) = a1;
  if ( *(_WORD *)(a2 + 128) > (unsigned __int16)v21 && *(_QWORD *)(a2 + 136) != v21 )
  {
    v60 = EtwpCaptureString(a2 + 128, &v86, v21, v20);
    LODWORD(v21) = 0;
    FileName = v60;
    if ( v60 < 0 )
      goto LABEL_217;
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = v21;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 42) = v86;
    RtlInitUnicodeString(&v86, 0LL);
    FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
    if ( FileName < 0 )
    {
LABEL_217:
      v27 = v80;
LABEL_218:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4520), v27);
      EtwpFreeApcPool((__int64)(inited + 208));
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 131), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140E28FD0);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v78 = (void *)*((_QWORD *)inited + 100);
      if ( v78 )
        ZwClose(v78);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_309;
    }
  }
  else
  {
    *(UNICODE_STRING *)(inited + 38) = v86;
    RtlInitUnicodeString(&v86, 0LL);
  }
  if ( *(int *)(a2 + 112) >= 0 )
  {
    ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
    ClientSecurityQos.Length = 12;
    *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
    FileName = SeCreateClientSecurity(
                 KeGetCurrentThread(),
                 &ClientSecurityQos,
                 0,
                 (PSECURITY_CLIENT_CONTEXT)(inited + 176));
  }
  if ( FileName < 0 )
    goto LABEL_217;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
  if ( *(int *)(a2 + 112) < 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x80000000);
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited, v26);
  v27 = v80;
  if ( v80 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v80;
    if ( v80 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    *(_BYTE *)(a1 + 2LL * v80 + 4504) = v81;
    if ( inited[50] - 1 >= 4 )
      v77 = 1;
    else
      v77 = *((_BYTE *)inited + 200);
    *(_BYTE *)(a1 + 2LL * v80 + 4505) = v77;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4520), v80);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited);
  if ( FileName < 0 )
    goto LABEL_218;
  v28 = *(_DWORD *)(a2 + 52);
  if ( v28 )
    inited[56] = v28;
  v29 = *(_DWORD *)(a2 + 56);
  if ( v29 )
    inited[59] = v29;
  v30 = *(_DWORD *)(a2 + 48);
  if ( v30 )
  {
    if ( v30 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v30 = 0x4000;
    }
    inited[1] = v30 << 10;
  }
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    inited[1] = (inited[1] + 0x1FFFFF) & 0xFFE00000;
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20000000u);
  }
  if ( *((_WORD *)inited + 76) )
  {
    *((_QWORD *)inited + 4) = KeGetCurrentThread();
    while ( 1 )
    {
      _InterlockedOr((volatile signed __int32 *)inited + 206, 1u);
      v51 = EtwpCreateLogFile(inited, 0LL, &v84);
      FileName = v51;
      if ( v51 >= 0 )
        break;
      if ( v51 != -1073741306 )
        goto LABEL_218;
      v52 = inited[1];
      v53 = ~(v84 - 1) & (v52 + v84 - 1);
      if ( v52 == v53 )
        goto LABEL_218;
      inited[1] = v53;
    }
  }
  if ( inited[1] < 0x1000 && (*((_WORD *)inited + 76) || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v31 = inited[1];
  v32 = 0xFFFF;
  if ( (unsigned __int64)(v31 - 72) < 0xFFFF )
    v32 = v31 - 72;
  inited[2] = v32 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited, v31);
  if ( FileName < 0 )
  {
    EtwpFreeTraceBufferPool(inited, v33, 0LL);
    goto LABEL_218;
  }
  if ( (v7 & 0x4000000) != 0 && (v7 & 0x400) == 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, inited[1], 0x5A777445u);
    *((_QWORD *)inited + 177) = Pool2;
    if ( !Pool2 )
    {
      FileName = -1073741801;
      goto LABEL_218;
    }
  }
  v34 = inited[73];
  if ( !(_DWORD)v34 || (inited[3] & 0x2000) != 0 )
    v35 = 10485760LL;
  else
    v35 = v34 << 20;
  v36 = inited[1] * inited[59];
  if ( v35 <= (unsigned int)(2 * v36) )
    v35 = (unsigned int)(2 * v36);
  *((_QWORD *)inited + 52) = v35;
  if ( *(int *)(a2 + 112) >= 0 )
  {
    v37 = P;
    FileName = EtwpInitializeLoggerSecurityDescriptor((__int64)inited, (__int16 *)P);
    if ( v37 )
    {
      if ( v37 != (PVOID)WmipDefaultAccessSd && v37 != EtwpDefaultTraceSecurityDescriptor )
        ExFreePoolWithTag(v37, 0);
      P = 0LL;
    }
    if ( FileName < 0 )
    {
      EtwpFreeTraceBufferPool(inited, v38, v39);
      goto LABEL_217;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4404), 1u);
  v40 = v81;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v81), 1u);
  if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
    if ( FileName < 0 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v40), 1u);
LABEL_301:
      EtwpFreeLoggerContext(inited);
      return (unsigned int)FileName;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v41, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v89 + 8 * v40), (__int64)inited);
  EtwpSendSessionNotification(inited, 5LL);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( a1 == EtwpHostSiloState )
    {
      LOBYTE(v42) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v42);
      if ( FileName < 0 )
      {
LABEL_249:
        inited[10] = FileName;
        EtwpStopLoggerInstance(inited);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
          EtwpReleaseLoggerContext(inited, 1);
          goto LABEL_301;
        }
        goto LABEL_114;
      }
      v63 = 5LL * v80;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v63) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v63 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_114;
    goto LABEL_249;
  }
LABEL_114:
  if ( v82 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v82);
  EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
  KeReleaseMutex((PRKMUTEX)(inited + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)inited + 170) + 704LL) + 8LL * *inited),
    1u);
  return (unsigned int)FileName;
}
