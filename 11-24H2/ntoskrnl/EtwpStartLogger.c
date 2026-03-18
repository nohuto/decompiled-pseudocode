/*
 * XREFs of EtwpStartLogger @ 0x140831694
 * Callers:
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     EtwpStartTrace @ 0x1408330A4 (EtwpStartTrace.c)
 *     EtwpStartBootLogger @ 0x140C3E770 (EtwpStartBootLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     EtwpFreeApcPool @ 0x14049A610 (EtwpFreeApcPool.c)
 *     EtwpStartLoggerThread @ 0x1404A8A40 (EtwpStartLoggerThread.c)
 *     EtwpSetQpcDeltaTracking @ 0x1404B67EC (EtwpSetQpcDeltaTracking.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     EtwpSetPartitionContext @ 0x14065093C (EtwpSetPartitionContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     EtwpEventWriteTemplateSessionAndHandle @ 0x1407A78F0 (EtwpEventWriteTemplateSessionAndHandle.c)
 *     EtwpEventWriteTemplateSessionDesiredAccess @ 0x1407A7980 (EtwpEventWriteTemplateSessionDesiredAccess.c)
 *     EtwpEventWriteTemplateSessionFromCapturedData @ 0x1407A7A18 (EtwpEventWriteTemplateSessionFromCapturedData.c)
 *     EtwpEventWriteTemplateSessionMaxLoggers @ 0x1407A7AE4 (EtwpEventWriteTemplateSessionMaxLoggers.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408301F0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x14083042C (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpAllocateTraceBufferPool @ 0x140830488 (EtwpAllocateTraceBufferPool.c)
 *     EtwpLookupLoggerIdByName @ 0x140830720 (EtwpLookupLoggerIdByName.c)
 *     EtwpInitializeTimeStamp @ 0x1408307CC (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     EtwpValidateFlagExtension @ 0x140830D20 (EtwpValidateFlagExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140830DF0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x140830F58 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140831010 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpGetFlagExtension @ 0x1408310A8 (EtwpGetFlagExtension.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     EtwpCheckGuidAccess @ 0x14083848C (EtwpCheckGuidAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140839D68 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x1408EA880 (ExUuidCreate.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1409D7BCC (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x1409DA338 (EtwpSendSessionNotification.c)
 *     EtwpCreateLogFile @ 0x1409DA6AC (EtwpCreateLogFile.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A8E2D8 (EtwpEventWriteTemplateAdmin.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned __int16 *FlagExtension; // rax
  __int64 v18; // r8
  unsigned __int16 *v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int v34; // eax
  PVOID v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rcx
  unsigned int i; // ebx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v47; // rcx
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // edx
  unsigned int v51; // eax
  bool v52; // zf
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 Pool2; // rax
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rcx
  const WCHAR *v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int v69; // edi
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // rdx
  void *v76; // rcx
  __int64 v77; // rbx
  unsigned int v78; // [rsp+40h] [rbp-C0h]
  unsigned int v79; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v80; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v84; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-80h] BYREF
  int v86; // [rsp+90h] [rbp-70h] BYREF
  __int64 v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-58h] BYREF
  UUID Buf2; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v92[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h]
  __int64 *v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h]
  int *v97; // [rsp+110h] [rbp+10h]
  __int64 v98; // [rsp+118h] [rbp+18h]

  v2 = 0LL;
  v78 = 8;
  v79 = 0;
  P = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v82 = 0;
  Buf2 = 0LL;
  v84 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v84, 0LL);
  v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((*(_BYTE *)(a2 + 64) & 8) != 0 || (*(_BYTE *)(a2 + 64) & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v5 & 0x40000) != 0 )
    v5 |= 0x80u;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x1000000) != 0 )
    v5 &= ~0x1000000u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_118;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
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
    v53 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
    if ( !v53 )
      v53 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v53 )
      goto LABEL_118;
    v54 = *(_QWORD *)(a2 + 24) - CKCLGuid;
    if ( !v54 )
      v54 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v54 || (v5 & 4) != 0 )
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
          v62,
          v61,
          a2 + 24,
          *(_DWORD *)(a2 + 64),
          &DestinationString.Length,
          &v84.Length);
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
    v63 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v63 )
      v63 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v63 )
      goto LABEL_118;
  }
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
  {
LABEL_119:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v41,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v42,
        (unsigned int)&DestinationString,
        (__int64)&v84,
        FileName,
        v5);
    if ( DestinationString.Buffer )
      ExFreePool(DestinationString.Buffer);
    if ( v84.Buffer )
      ExFreePool(v84.Buffer);
    if ( P && P != (PVOID)WmipDefaultAccessSd && P != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)FileName;
  }
  v9 = ((v5 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v5 & 0x100 | 0x400) >> 3;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v79) )
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
  v11 = *(_QWORD *)(a1 + 712);
  v12 = *(_QWORD *)&Buf2.Data1 - SystemTraceControlGuid;
  v87 = v11;
  if ( *(_QWORD *)&Buf2.Data1 == SystemTraceControlGuid )
    v12 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
  if ( !v12 )
    goto LABEL_207;
  v13 = *(_QWORD *)&Buf2.Data1 - CKCLGuid;
  if ( *(_QWORD *)&Buf2.Data1 == CKCLGuid )
    v13 = *(_QWORD *)Buf2.Data4 - 0x74F156D0633E71AFLL;
  if ( !v13 )
  {
LABEL_207:
    RtlFreeAnsiString(&DestinationString);
    v56 = *(_QWORD *)&Buf2.Data1 - SystemTraceControlGuid;
    if ( *(_QWORD *)&Buf2.Data1 == SystemTraceControlGuid )
      v56 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
    if ( v56 )
    {
      v79 = 2;
      v66 = L"Circular Kernel Context Logger";
      v78 = 1;
      v2 = 16LL;
    }
    else
    {
      v79 = 0;
      v66 = L"NT Kernel Logger";
      v78 = 0;
    }
    if ( !RtlCreateUnicodeString(&DestinationString, v66) )
      goto LABEL_209;
    v5 |= 0x80u;
    if ( (v5 & 0x1000000) != 0 )
      goto LABEL_118;
    v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + v11), v11 | 1, 1LL) == 1;
    goto LABEL_159;
  }
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( v14 )
  {
    v43 = *(_QWORD *)&Buf2.Data1 - AuditLoggerGuid;
    if ( *(_QWORD *)&Buf2.Data1 == AuditLoggerGuid )
      v43 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
    if ( v43 )
    {
      if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
      {
        v55 = *(_QWORD *)&Buf2.Data1 - AuditLoggerGuid;
        if ( *(_QWORD *)&Buf2.Data1 == AuditLoggerGuid )
          v55 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
        if ( v55 )
          goto LABEL_160;
      }
      for ( i = 4; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v45 = (_QWORD *)EtwpAcquireLoggerContextByLoggerId(a1, i, 0LL);
        if ( v45 )
        {
          v46 = *(_QWORD *)((char *)v45 + 276) - *(_QWORD *)&Buf2.Data1;
          if ( !v46 )
            v46 = *(_QWORD *)((char *)v45 + 284) - *(_QWORD *)Buf2.Data4;
          v47 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v45[170] + 704LL) + 8LL * *(unsigned int *)v45);
          if ( !v46 )
          {
            ExReleaseRundownProtectionCacheAwareEx(v47, 1u);
            break;
          }
          ExReleaseRundownProtectionCacheAwareEx(v47, 1u);
        }
      }
      v51 = *(_DWORD *)(a1 + 16);
      if ( i < v51 )
        goto LABEL_160;
      v79 = 4;
      if ( v51 > 4 )
      {
        do
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v79), v11 | 1, 1LL) == 1 )
            break;
          ++v79;
        }
        while ( v79 < *(_DWORD *)(a1 + 16) );
      }
      if ( v79 >= *(_DWORD *)(a1 + 16) )
      {
        if ( !byte_140E3EB39 )
        {
          UserData.Ptr = a1 + 16;
          byte_140E3EB39 = 1;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &UserData);
          if ( (unsigned int)dword_140E09128 > 5 && tlgKeywordOn((__int64)&dword_140E09128, 0x200000000000LL) )
          {
            v88 = 1LL;
            v93 = &v88;
            v94 = 8LL;
            v95 = &v89;
            v86 = *(_DWORD *)(a1 + 16);
            v97 = &v86;
            v89 = 0x1000000LL;
            v96 = 8LL;
            v98 = 4LL;
            tlgWriteAgg((__int64)&dword_140E09128, (unsigned __int8 *)word_1400521FA, v64, 5u, (__int64)v92);
          }
        }
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v65,
            &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS,
            &DestinationString.Length,
            *(_DWORD *)(a1 + 16));
        goto LABEL_119;
      }
      goto LABEL_153;
    }
    v79 = 3;
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
      v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1;
LABEL_159:
      if ( !v52 )
        goto LABEL_160;
LABEL_153:
      LODWORD(v2) = v78;
      goto LABEL_46;
    }
LABEL_118:
    FileName = -1073741811;
    goto LABEL_119;
  }
  v79 = 1;
  if ( !EtwpGetFlagExtension(a2, 1) )
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
  v78 = 0;
LABEL_45:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) != 1 )
  {
LABEL_160:
    FileName = -1073741771;
    goto LABEL_119;
  }
LABEL_46:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v79), 1u);
  if ( *(int *)(a2 + 112) >= 0 )
  {
    EtwpGetSecurityDescriptorByGuid(&Buf2, &P);
    FileName = EtwpAccessCheck(P, v9);
    if ( FileName < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE_ACCESS_DENIED) )
        EtwpEventWriteTemplateSessionDesiredAccess(v68, v67, &DestinationString.Length, (__int64)&Buf2, v9);
      goto LABEL_309;
    }
  }
  v15 = HeapGuid - *(_QWORD *)&Buf2.Data1;
  if ( HeapGuid == *(_QWORD *)&Buf2.Data1 )
    v15 = 0x4AA2F2756B3425A8LL - *(_QWORD *)Buf2.Data4;
  if ( v15 )
    v80 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v80 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && (_DWORD)v2 == 8 )
  {
    if ( *(int *)(a2 + 112) >= 0 )
    {
      FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
      if ( FileName < 0 )
        goto LABEL_309;
    }
    v69 = 2;
    v78 = 2;
    while ( _bittest((const signed __int32 *)(a1 + 4520), v69) )
    {
      v78 = ++v69;
      if ( v69 >= 8 )
      {
        v78 = v69;
        if ( v69 != 8 )
          break;
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v70,
            &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS,
            &DestinationString.Length,
            8);
        goto LABEL_309;
      }
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v5, *(_DWORD *)(a2 + 112));
  FlagExtension = EtwpGetFlagExtension(a2, 6);
  v18 = 0LL;
  v19 = FlagExtension;
  if ( FlagExtension )
  {
    if ( 4 * *FlagExtension == 12 )
    {
      v71 = EtwpSetPartitionContext((__int64 *)inited + 198, *(_QWORD *)(FlagExtension + 2), 0LL);
      v18 = 0LL;
      FileName = v71;
      if ( v71 < 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_INVALID_MEMORY_PARTITION) )
          EtwpEventWriteTemplateSessionAndHandle(v73, v72, &DestinationString.Length, *(_QWORD *)(v19 + 2));
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
    v77 = v79;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v79), 1u);
    _InterlockedExchange64((volatile __int64 *)(v87 + 8 * v77), 1LL);
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
  *inited = v79;
  inited[53] = v22;
  *((_QWORD *)inited + 170) = a1;
  if ( *(_WORD *)(a2 + 128) > (unsigned __int16)v18 && *(_QWORD *)(a2 + 136) != v18 )
  {
    v57 = EtwpCaptureString(a2 + 128, &v84);
    LODWORD(v18) = 0;
    FileName = v57;
    if ( v57 < 0 )
      goto LABEL_217;
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = v18;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 42) = v84;
    RtlInitUnicodeString(&v84, 0LL);
    FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
    if ( FileName < 0 )
    {
LABEL_217:
      v25 = v78;
LABEL_218:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4520), v25);
      EtwpFreeApcPool((__int64)(inited + 208));
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 131), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140E28E90);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v76 = (void *)*((_QWORD *)inited + 100);
      if ( v76 )
        ZwClose(v76);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_309;
    }
  }
  else
  {
    *(UNICODE_STRING *)(inited + 38) = v84;
    RtlInitUnicodeString(&v84, 0LL);
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
  EtwpInitializeTimeStamp((__int64)inited, v23, 0LL, v24);
  v25 = v78;
  if ( v78 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v78;
    if ( v78 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    *(_BYTE *)(a1 + 2LL * v78 + 4504) = v79;
    if ( inited[50] - 1 >= 4 )
      v74 = 1;
    else
      v74 = *((_BYTE *)inited + 200);
    *(_BYTE *)(a1 + 2LL * v78 + 4505) = v74;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4520), v78);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_218;
  v26 = *(_DWORD *)(a2 + 52);
  if ( v26 )
    inited[56] = v26;
  v27 = *(_DWORD *)(a2 + 56);
  if ( v27 )
    inited[59] = v27;
  v28 = *(_DWORD *)(a2 + 48);
  if ( v28 )
  {
    if ( v28 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v28 = 0x4000;
    }
    inited[1] = v28 << 10;
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
      v48 = EtwpCreateLogFile(inited, 0LL, &v82);
      FileName = v48;
      if ( v48 >= 0 )
        break;
      if ( v48 != -1073741306 )
        goto LABEL_218;
      v49 = inited[1];
      v50 = ~(v82 - 1) & (v49 + v82 - 1);
      if ( v49 == v50 )
        goto LABEL_218;
      inited[1] = v50;
    }
  }
  if ( inited[1] < 0x1000 && (*((_WORD *)inited + 76) || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v29 = inited[1];
  v30 = 0xFFFF;
  if ( (unsigned __int64)(v29 - 72) < 0xFFFF )
    v30 = v29 - 72;
  inited[2] = v30 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited, v29);
  if ( FileName < 0 )
  {
    EtwpFreeTraceBufferPool(inited, v31, 0LL);
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
  v32 = inited[73];
  if ( !(_DWORD)v32 || (inited[3] & 0x2000) != 0 )
    v33 = 10485760LL;
  else
    v33 = v32 << 20;
  v34 = inited[1] * inited[59];
  if ( v33 <= (unsigned int)(2 * v34) )
    v33 = (unsigned int)(2 * v34);
  *((_QWORD *)inited + 52) = v33;
  if ( *(int *)(a2 + 112) >= 0 )
  {
    v35 = P;
    FileName = EtwpInitializeLoggerSecurityDescriptor((__int64)inited, P);
    if ( v35 )
    {
      if ( v35 != (PVOID)WmipDefaultAccessSd && v35 != EtwpDefaultTraceSecurityDescriptor )
        ExFreePoolWithTag(v35, 0);
      P = 0LL;
    }
    if ( FileName < 0 )
    {
      EtwpFreeTraceBufferPool(inited, v36, v37);
      goto LABEL_217;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4404), 1u);
  v38 = v79;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v79), 1u);
  if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
    if ( FileName < 0 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v38), 1u);
LABEL_301:
      EtwpFreeLoggerContext(inited);
      return (unsigned int)FileName;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v39, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v87 + 8 * v38), (__int64)inited);
  EtwpSendSessionNotification(inited, 5LL);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( a1 == EtwpHostSiloState )
    {
      FileName = EtwpCheckForPoolTagFilterExtension((__int64)inited, a2, 1);
      if ( FileName < 0 )
      {
LABEL_249:
        inited[10] = FileName;
        EtwpStopLoggerInstance(inited);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, inited);
          LOBYTE(v75) = 1;
          EtwpReleaseLoggerContext(inited, v75);
          goto LABEL_301;
        }
        goto LABEL_114;
      }
      v60 = 5LL * v78;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v60) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v60 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks((__int64)inited, a2);
    if ( FileName >= 0 )
      goto LABEL_114;
    goto LABEL_249;
  }
LABEL_114:
  if ( v80 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v80);
  EtwpGetLoggerInfoFromContext(a2, inited);
  KeReleaseMutex((PRKMUTEX)(inited + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)inited + 170) + 704LL) + 8LL * *inited),
    1u);
  return (unsigned int)FileName;
}
