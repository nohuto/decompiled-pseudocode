/*
 * XREFs of EtwpStartLogger @ 0x140A374DC
 * Callers:
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     EtwpStartTrace @ 0x140A37464 (EtwpStartTrace.c)
 *     EtwpStartBootLogger @ 0x140C2D494 (EtwpStartBootLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     EtwpFreeApcPool @ 0x14049A350 (EtwpFreeApcPool.c)
 *     EtwpStartLoggerThread @ 0x1404A7B5C (EtwpStartLoggerThread.c)
 *     EtwpSetQpcDeltaTracking @ 0x1404B6D18 (EtwpSetQpcDeltaTracking.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     EtwpSetPartitionContext @ 0x14064492C (EtwpSetPartitionContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     EtwpEventWriteTemplateSessionAndHandle @ 0x140798520 (EtwpEventWriteTemplateSessionAndHandle.c)
 *     EtwpEventWriteTemplateSessionDesiredAccess @ 0x1407985B0 (EtwpEventWriteTemplateSessionDesiredAccess.c)
 *     EtwpEventWriteTemplateSessionFromCapturedData @ 0x140798648 (EtwpEventWriteTemplateSessionFromCapturedData.c)
 *     EtwpEventWriteTemplateSessionMaxLoggers @ 0x140798714 (EtwpEventWriteTemplateSessionMaxLoggers.c)
 *     EtwpCaptureString @ 0x140893884 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     EtwpEventWriteTemplateSession @ 0x1408940B0 (EtwpEventWriteTemplateSession.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140894D8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpCheckGuidAccess @ 0x140898F2C (EtwpCheckGuidAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14089A850 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14098EF58 (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x1409914E0 (EtwpSendSessionNotification.c)
 *     EtwpCreateLogFile @ 0x140991804 (EtwpCreateLogFile.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A37348 (EtwpUpdatePerProcessTracing.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140A383EC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x140A38554 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140A3860C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpGetFlagExtension @ 0x140A386A4 (EtwpGetFlagExtension.c)
 *     EtwpValidateFlagExtension @ 0x140A387D0 (EtwpValidateFlagExtension.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140A38C3C (EtwpInitializeTimeStamp.c)
 *     EtwpLookupLoggerIdByName @ 0x140A38E44 (EtwpLookupLoggerIdByName.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A38EF0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140A39194 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpGenerateFileName @ 0x140A7C3A0 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A89378 (EtwpEventWriteTemplateAdmin.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r15d
  int FileName; // edi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *inited; // rsi
  __int64 FlagExtension; // rax
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // eax
  PVOID v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rcx
  unsigned int i; // ebx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // edx
  unsigned int v48; // eax
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 Pool2; // rax
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rcx
  const WCHAR *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edi
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  char v71; // al
  void *v72; // rcx
  __int64 v73; // rbx
  unsigned int v74; // [rsp+40h] [rbp-C0h]
  unsigned int v75; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v76; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v78; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v80; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-80h] BYREF
  int v82; // [rsp+90h] [rbp-70h] BYREF
  __int64 v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-58h] BYREF
  UUID Buf2; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v88[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v89; // [rsp+F0h] [rbp-10h]
  __int64 v90; // [rsp+F8h] [rbp-8h]
  __int64 *v91; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h]
  int *v93; // [rsp+110h] [rbp+10h]
  __int64 v94; // [rsp+118h] [rbp+18h]

  v2 = 0LL;
  v74 = 8;
  v75 = 0;
  P = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v78 = 0;
  Buf2 = 0LL;
  v80 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v80, 0LL);
  v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((*(_BYTE *)(a2 + 64) & 8) != 0 || (*(_BYTE *)(a2 + 64) & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v5 & 0x40000) != 0 )
    v5 |= 0x80u;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x1000000) != 0 )
    v5 &= ~0x1000000u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_118;
  FileName = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &DestinationString);
  if ( FileName )
    goto LABEL_119;
  if ( (v5 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v5 & 0xF) != 0 )
      goto LABEL_118;
    if ( (v5 & 0x100) != 0 )
      v5 &= ~0x100u;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v5 & 3) == 3
    || (v5 & 0xC000) == 0xC000
    || (v5 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v5 & 6) == 6
    || (v5 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v5 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (*(_DWORD *)(a2 + 64) & 0xC) != 0)
    || (v5 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v5 & 0x402) == 0 && ((v5 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v5 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_118;
  }
  if ( (v5 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v5 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || _bittest((const signed __int32 *)(a2 + 64), 0x19u) )
    {
      goto LABEL_118;
    }
    v50 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v50 )
      v50 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v50 )
      goto LABEL_118;
    v51 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v51 )
      v51 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v51 || (v5 & 4) != 0 )
      goto LABEL_118;
  }
  v7 = *(_DWORD *)(a2 + 64);
  if ( (v7 & 0x3000000) == 0x3000000 || (v7 & 0x4000000) != 0 && (v7 & 0x106) != 0 )
    goto LABEL_118;
  if ( (v7 & 0x10000) != 0 )
    goto LABEL_118;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !EtwpKsrCallbackObject )
    {
      FileName = -1073741637;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LARGE_MDL_NOT_SUPPORTED) )
        EtwpEventWriteTemplateSessionFromCapturedData(
          v59,
          v58,
          a2 + 24,
          *(_DWORD *)(a2 + 64),
          &DestinationString.Length,
          &v80.Length);
      goto LABEL_119;
    }
    if ( (v7 & 0x400) == 0 || (v7 & 0x1000000) != 0 )
      goto LABEL_118;
  }
  v8 = *(_DWORD *)(a2 + 112);
  if ( v8 < 0 )
  {
    if ( EtwpBootPhase || (v8 & 2) == 0 || (v7 & 0x2000000) == 0 || ((*(_DWORD *)(a2 + 40) - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_118;
    v60 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v60 )
      v60 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v60 )
      goto LABEL_118;
  }
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
  {
LABEL_119:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v38,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v39,
        (unsigned int)&DestinationString,
        (__int64)&v80,
        FileName,
        v5);
    if ( DestinationString.Buffer )
      ExFreePool(DestinationString.Buffer);
    if ( v80.Buffer )
      ExFreePool(v80.Buffer);
    if ( P && P != (PVOID)WmipDefaultAccessSd && P != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)FileName;
  }
  v9 = ((v5 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v5 & 0x100 | 0x400) >> 3;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v75) )
    goto LABEL_160;
  v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
  if ( v10 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_119;
  }
  if ( (v5 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)PsGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v5 |= 0x400000u;
    }
    else
    {
      v5 |= 0x800000u;
    }
  }
  v11 = *(_QWORD *)(a1 + 456);
  v12 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v83 = v11;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v12 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v12 )
    goto LABEL_207;
  v13 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v13 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v13 )
  {
LABEL_207:
    RtlFreeAnsiString(&DestinationString);
    v53 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
      v53 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v53 )
    {
      v75 = 2;
      v63 = L"Circular Kernel Context Logger";
      v74 = 1;
      v2 = 16LL;
    }
    else
    {
      v75 = 0;
      v63 = L"NT Kernel Logger";
      v74 = 0;
    }
    if ( !RtlCreateUnicodeString(&DestinationString, v63) )
      goto LABEL_209;
    v5 |= 0x80u;
    if ( (v5 & 0x1000000) != 0 )
      goto LABEL_118;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + v11), v11 | 1, 1LL) == 1;
    goto LABEL_159;
  }
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( v14 )
  {
    v40 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v40 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v40 )
    {
      if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
      {
        v52 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
        if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
          v52 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
        if ( v52 )
          goto LABEL_160;
      }
      for ( i = 4; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v42 = (_QWORD *)EtwpAcquireLoggerContextByLoggerId(a1, i, 0);
        if ( v42 )
        {
          v43 = *(_QWORD *)((char *)v42 + 276) - *(_QWORD *)&Buf2.Data1;
          if ( !v43 )
            v43 = *(_QWORD *)((char *)v42 + 284) - *(_QWORD *)Buf2.Data4;
          v44 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v42[170] + 448LL) + 8LL * *(unsigned int *)v42);
          if ( !v43 )
          {
            ExReleaseRundownProtectionCacheAwareEx(v44, 1u);
            break;
          }
          ExReleaseRundownProtectionCacheAwareEx(v44, 1u);
        }
      }
      v48 = *(_DWORD *)(a1 + 16);
      if ( i < v48 )
        goto LABEL_160;
      v75 = 4;
      if ( v48 > 4 )
      {
        do
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v75), v11 | 1, 1LL) == 1 )
            break;
          ++v75;
        }
        while ( v75 < *(_DWORD *)(a1 + 16) );
      }
      if ( v75 >= *(_DWORD *)(a1 + 16) )
      {
        if ( !byte_140E3E8F9 )
        {
          UserData.Ptr = a1 + 16;
          byte_140E3E8F9 = 1;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &UserData);
          if ( (unsigned int)dword_140E09048 > 5 && tlgKeywordOn((__int64)&dword_140E09048, 0x200000000000LL) )
          {
            v84 = 1LL;
            v89 = &v84;
            v90 = 8LL;
            v91 = &v85;
            v82 = *(_DWORD *)(a1 + 16);
            v93 = &v82;
            v85 = 0x1000000LL;
            v92 = 8LL;
            v94 = 4LL;
            tlgWriteAgg((__int64)&dword_140E09048, (unsigned __int8 *)byte_140050DD0, v61, 5u, (__int64)v88);
          }
        }
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v62,
            &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS,
            &DestinationString.Length,
            *(_DWORD *)(a1 + 16));
        goto LABEL_119;
      }
      goto LABEL_153;
    }
    v75 = 3;
    if ( (v5 & 0x1000000) == 0 )
    {
      if ( DestinationString.Buffer )
      {
        ExFreePool(DestinationString.Buffer);
        DestinationString = 0LL;
      }
      if ( !RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
        goto LABEL_209;
      v5 |= 0x80u;
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1;
LABEL_159:
      if ( !v49 )
        goto LABEL_160;
LABEL_153:
      LODWORD(v2) = v74;
      goto LABEL_46;
    }
LABEL_118:
    FileName = -1073741811;
    goto LABEL_119;
  }
  v75 = 1;
  if ( !EtwpGetFlagExtension(a2, 1LL) )
  {
    LODWORD(v2) = 8;
    goto LABEL_45;
  }
  if ( (v5 & 0x1000000) != 0 )
    goto LABEL_118;
  RtlFreeAnsiString(&DestinationString);
  if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
  {
LABEL_209:
    FileName = -1073741801;
    goto LABEL_119;
  }
  v74 = 0;
LABEL_45:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) != 1 )
  {
LABEL_160:
    FileName = -1073741771;
    goto LABEL_119;
  }
LABEL_46:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * v75), 1u);
  if ( *(int *)(a2 + 112) >= 0 )
  {
    EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &P);
    FileName = EtwpAccessCheck(P, v9, 0LL);
    if ( FileName < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE_ACCESS_DENIED) )
        EtwpEventWriteTemplateSessionDesiredAccess(v65, v64, &DestinationString.Length, (__int64)&Buf2, v9);
      goto LABEL_309;
    }
  }
  v15 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v15 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v15 )
    v76 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v76 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && (_DWORD)v2 == 8 )
  {
    if ( *(int *)(a2 + 112) >= 0 )
    {
      FileName = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
      if ( FileName < 0 )
        goto LABEL_309;
    }
    v66 = 2;
    v74 = 2;
    while ( _bittest((const signed __int32 *)(a1 + 4248), v66) )
    {
      v74 = ++v66;
      if ( v66 >= 8 )
      {
        v74 = v66;
        if ( v66 != 8 )
          break;
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v67,
            &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS,
            &DestinationString.Length,
            8);
        goto LABEL_309;
      }
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v5, *(unsigned int *)(a2 + 112));
  FlagExtension = EtwpGetFlagExtension(a2, 6LL);
  v18 = 0LL;
  v19 = FlagExtension;
  if ( FlagExtension )
  {
    if ( 4 * *(_WORD *)FlagExtension == 12 )
    {
      v68 = EtwpSetPartitionContext((__int64 *)inited + 198, *(_QWORD *)(FlagExtension + 4), 0LL);
      v18 = 0LL;
      FileName = v68;
      if ( v68 < 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_INVALID_MEMORY_PARTITION) )
          EtwpEventWriteTemplateSessionAndHandle(v70, v69, &DestinationString.Length, *(_QWORD *)(v19 + 4));
        goto LABEL_217;
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    v18 = 0LL;
    DestinationString = 0LL;
  }
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_309:
    v73 = v75;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * v75), 1u);
    _InterlockedExchange64((volatile __int64 *)(v83 + 8 * v73), 1LL);
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
  v20 = *(_DWORD *)(a2 + 68);
  if ( v20 )
  {
    inited[52] = v20;
  }
  else if ( (v5 & 0x100) != 0 )
  {
    inited[52] = (v5 & 0x10) != 0 ? 1000 : 1;
  }
  v21 = *(_DWORD *)(a2 + 76);
  v22 = v21;
  if ( v21 && (inited[52] > (unsigned int)v18 || v21 < 0) )
  {
    *(_DWORD *)(a2 + 76) = v18;
    v22 = v18;
  }
  FileName = v18;
  *inited = v75;
  inited[53] = v22;
  *((_QWORD *)inited + 170) = a1;
  if ( *(_WORD *)(a2 + 128) > (unsigned __int16)v18 && *(_QWORD *)(a2 + 136) != v18 )
  {
    v54 = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &v80);
    LODWORD(v18) = 0;
    FileName = v54;
    if ( v54 < 0 )
      goto LABEL_217;
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = v18;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 42) = v80;
    RtlInitUnicodeString(&v80, 0LL);
    FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
    if ( FileName < 0 )
    {
LABEL_217:
      v24 = v74;
LABEL_218:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4248), v24);
      EtwpFreeApcPool((__int64)(inited + 208));
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 131), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140E28C50);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v72 = (void *)*((_QWORD *)inited + 100);
      if ( v72 )
        ZwClose(v72);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_309;
    }
  }
  else
  {
    *(UNICODE_STRING *)(inited + 38) = v80;
    RtlInitUnicodeString(&v80, 0LL);
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
  EtwpInitializeTimeStamp(inited, v23, 0LL);
  v24 = v74;
  if ( v74 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v74;
    if ( v74 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    *(_BYTE *)(a1 + 2LL * v74 + 4232) = v75;
    if ( inited[50] - 1 >= 4 )
      v71 = 1;
    else
      v71 = *((_BYTE *)inited + 200);
    *(_BYTE *)(a1 + 2LL * v74 + 4233) = v71;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4248), v74);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited);
  if ( FileName < 0 )
    goto LABEL_218;
  v25 = *(_DWORD *)(a2 + 52);
  if ( v25 )
    inited[56] = v25;
  v26 = *(_DWORD *)(a2 + 56);
  if ( v26 )
    inited[59] = v26;
  v27 = *(_DWORD *)(a2 + 48);
  if ( v27 )
  {
    if ( v27 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v27 = 0x4000;
    }
    inited[1] = v27 << 10;
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
      v45 = EtwpCreateLogFile((__int64)inited, 0, &v78);
      FileName = v45;
      if ( v45 >= 0 )
        break;
      if ( v45 != -1073741306 )
        goto LABEL_218;
      v46 = inited[1];
      v47 = ~(v78 - 1) & (v46 + v78 - 1);
      if ( v46 == v47 )
        goto LABEL_218;
      inited[1] = v47;
    }
  }
  if ( inited[1] < 0x1000 && (*((_WORD *)inited + 76) || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v28 = inited[1];
  v29 = 0xFFFF;
  if ( (unsigned __int64)(v28 - 72) < 0xFFFF )
    v29 = v28 - 72;
  inited[2] = v29 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
  {
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_218;
  }
  if ( (v5 & 0x4000000) != 0 && (v5 & 0x400) == 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    *((_QWORD *)inited + 177) = Pool2;
    if ( !Pool2 )
    {
      FileName = -1073741801;
      goto LABEL_218;
    }
  }
  v30 = inited[73];
  if ( !(_DWORD)v30 || (inited[3] & 0x2000) != 0 )
    v31 = 10485760LL;
  else
    v31 = v30 << 20;
  v32 = inited[1] * inited[59];
  if ( v31 <= (unsigned int)(2 * v32) )
    v31 = (unsigned int)(2 * v32);
  *((_QWORD *)inited + 52) = v31;
  if ( *(int *)(a2 + 112) >= 0 )
  {
    v33 = P;
    FileName = EtwpInitializeLoggerSecurityDescriptor(inited, P, 0LL);
    if ( v33 )
    {
      if ( v33 != (PVOID)WmipDefaultAccessSd && v33 != EtwpDefaultTraceSecurityDescriptor )
        ExFreePoolWithTag(v33, 0);
      P = 0LL;
    }
    if ( FileName < 0 )
    {
      EtwpFreeTraceBufferPool(inited);
      goto LABEL_217;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4132), 1u);
  v34 = v75;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * v75), 1u);
  if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
    if ( FileName < 0 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v34), 1u);
LABEL_301:
      EtwpFreeLoggerContext((char *)inited);
      return (unsigned int)FileName;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v35, &ETW_EVENT_START_TRACE, (__int64)inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v83 + 8 * v34), (__int64)inited);
  EtwpSendSessionNotification((__int64)inited, 5, 0);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( a1 == EtwpHostSiloState )
    {
      LOBYTE(v36) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v36);
      if ( FileName < 0 )
      {
LABEL_249:
        inited[10] = FileName;
        EtwpStopLoggerInstance((unsigned __int64)inited);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
          EtwpReleaseLoggerContext(inited, 1);
          goto LABEL_301;
        }
        goto LABEL_114;
      }
      v57 = 5LL * v74;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v57) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v57 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_114;
    goto LABEL_249;
  }
LABEL_114:
  if ( v76 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v76);
  EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
  KeReleaseMutex((PRKMUTEX)(inited + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)inited + 170) + 448LL) + 8LL * *inited),
    1u);
  return (unsigned int)FileName;
}
