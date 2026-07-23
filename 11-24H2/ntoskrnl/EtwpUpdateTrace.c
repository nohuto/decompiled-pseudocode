/*
 * XREFs of EtwpUpdateTrace @ 0x140ADA038
 * Callers:
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x1408361C0 (EtwpValidateLoggerInfo.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140836FE0 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     SeDeleteClientSecurity @ 0x140890300 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSystemTraceAccess @ 0x1409454B0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1409CF9AC (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1409D108C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x1409D11F4 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1409D12AC (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpValidateFlagExtension @ 0x1409D1470 (EtwpValidateFlagExtension.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x1409D26F0 (EtwpEventWriteTemplateSession.c)
 *     EtwpCaptureString @ 0x1409D28F8 (EtwpCaptureString.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A0B660 (EtwpFreeSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8F0BC (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  ACCESS_MASK v4; // r15d
  __int64 result; // rax
  unsigned int *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  __int64 v9; // rbx
  int v10; // r12d
  int v11; // r14d
  UNICODE_STRING v12; // xmm0
  unsigned int *v13; // r15
  __int64 v14; // r13
  unsigned int v15; // r9d
  unsigned int v16; // edi
  unsigned int SystemMaximumBufferCount; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  _DWORD *v24; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+50h] BYREF
  __int16 *v29; // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  v4 = 128;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v6);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v28);
      if ( updated < 0 )
      {
LABEL_85:
        KeLeaveCriticalRegion();
        return (unsigned int)updated;
      }
      v9 = v28;
      v10 = *(_DWORD *)(a2 + 64);
      v11 = *(_DWORD *)(v28 + 12);
      v24 = (_DWORD *)(v28 + 12);
      if ( (v11 & 0x40) != 0
        || (v10 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v11 & 2) == 0 && (v10 & 2) != 0
        || (v10 & 6) == 6 )
      {
        goto LABEL_83;
      }
      if ( (v10 & 0x100) != 0 || (v11 & 0x100) != 0 )
        v4 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v4 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v4, v28);
      if ( updated < 0 )
        goto LABEL_84;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v11 & 8) != 0 || (v10 & 8) != 0 || (v11 & 0x400) != 0 )
          goto LABEL_83;
        updated = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( updated < 0 )
          goto LABEL_84;
        if ( *(_QWORD *)(v9 + 720) )
        {
          SeDeleteClientSecurity(v9 + 704);
          *(_QWORD *)(v9 + 720) = 0LL;
        }
        v9 = v28;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v28 + 704));
        if ( updated < 0 )
          goto LABEL_84;
        v12 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v9 + 184) = v12;
        EtwpSynchronizeWithLogger(v9, 4u);
        updated = EtwpSynchronizeWithLogger(v9, 2u);
        if ( updated < 0 || !*(_DWORD *)(v9 + 320) )
          goto LABEL_84;
      }
      else if ( (v11 & 0x400) != 0 )
      {
        goto LABEL_36;
      }
      if ( (v10 & 0x100) != 0 )
      {
        v11 |= 0x100u;
        if ( !*(_DWORD *)(v9 + 208) )
          *(_DWORD *)(v9 + 208) = (v11 & 0x10) != 0 ? 1000 : 1;
LABEL_36:
        v13 = (unsigned int *)(v9 + 276);
        if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)(v9 + 276) && *(_QWORD *)HeapGuid.Data4 == *(_QWORD *)(v9 + 284) )
        {
          v14 = a1;
          v15 = 0;
        }
        else
        {
          v14 = a1;
          if ( *(_QWORD *)&CritSecGuid.Data1 != *(_QWORD *)v13 || *(_QWORD *)CritSecGuid.Data4 != *(_QWORD *)(v9 + 284) )
            goto LABEL_40;
          v15 = 1;
        }
        EtwpUpdatePerProcessTracing(a2, v14, *(_DWORD *)v9, v15);
LABEL_40:
        updated = EtwpCheckForStackTracingExtension(a2, v9);
        if ( updated < 0 )
          goto LABEL_84;
        if ( (*v24 & 0x2000000) != 0 )
        {
          updated = EtwpCheckSystemTraceAccess(v9, 0x80u);
          if ( updated < 0 )
            goto LABEL_84;
          if ( v14 == EtwpHostSiloState )
          {
            updated = EtwpCheckForPoolTagFilterExtension(v9, a2, 0);
            if ( updated < 0 )
              goto LABEL_84;
          }
          updated = EtwpUpdateLoggerGroupMasks(v9, a2);
          if ( updated < 0 )
            goto LABEL_84;
        }
        v16 = *(_DWORD *)(a2 + 56);
        if ( !v16 )
        {
LABEL_57:
          if ( (v11 & 0x400) == 0 )
          {
            v18 = *(_DWORD *)(a2 + 68);
            if ( v18 )
            {
              if ( v18 != *(_DWORD *)(v9 + 208) )
              {
                *(_DWORD *)(v9 + 208) = v18;
                EtwpSynchronizeWithLogger(v9, 4u);
              }
            }
          }
          if ( (v10 & 0x80000) != 0 )
          {
            if ( *(_DWORD *)(v9 + 300) == 1 )
            {
              updated = -1073741637;
LABEL_84:
              RtlFreeAnsiString(&UnicodeString);
              EtwpReleaseLoggerContext((unsigned int *)v9, 1);
              goto LABEL_85;
            }
            _InterlockedOr((volatile signed __int32 *)(v9 + 824), 0x800u);
            v11 |= 0x80000u;
            v19 = 0;
            if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
            {
              v9 = v28;
LABEL_72:
              if ( (v10 & 0x80u) == 0
                || (v29 = 0LL,
                    EtwpGetSecurityDescriptorByGuid(v13, &v29),
                    updated = EtwpUpdateLoggerSecurityDescriptor(v9, v29),
                    EtwpFreeSecurityDescriptor((void **)&v29),
                    v19 = 0,
                    updated >= 0) )
              {
                *(_DWORD *)(v9 + 12) = v11;
                v20 = *(_DWORD *)(a2 + 76);
                if ( v20 )
                {
                  if ( *(_DWORD *)(v9 + 208) || (v11 & 0x400) != 0 )
                    goto LABEL_80;
                  v21 = *(_DWORD *)(v9 + 236) - EtwpQueryUsedProcessorCount(v9, 0LL);
                  v20 = *(_DWORD *)(a2 + 76);
                  v22 = v21 - 1;
                  if ( v20 > v22 )
                  {
                    *(_DWORD *)(a2 + 76) = v22;
                    v20 = v22;
                  }
                  if ( v20 < 0 )
                  {
LABEL_80:
                    *(_DWORD *)(a2 + 76) = v19;
                    v20 = v19;
                  }
                }
                *(_DWORD *)(v9 + 212) = v20;
                updated = EtwpGetLoggerInfoFromContext(a2, v9);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                  EtwpEventWriteTemplateSession(v23, &ETW_EVENT_UPDATE_TRACE, v9);
              }
              goto LABEL_84;
            }
            v9 = v28;
            EtwpSendDbgId(v28);
          }
          else if ( (v11 & 0x80000) != 0 )
          {
            v11 &= ~0x80000u;
          }
          v19 = 0;
          goto LABEL_72;
        }
        if ( *(_DWORD *)(v9 + 4) )
        {
          SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount((unsigned int *)v9);
          if ( v16 <= SystemMaximumBufferCount )
            goto LABEL_55;
        }
        else
        {
          SystemMaximumBufferCount = 0;
        }
        *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
        v16 = SystemMaximumBufferCount;
LABEL_55:
        if ( v16 > *(_DWORD *)(v9 + 236) )
          *(_DWORD *)(v9 + 236) = v16;
        goto LABEL_57;
      }
      if ( (v11 & 0x100) == 0 )
        goto LABEL_36;
      if ( *(_QWORD *)(v9 + 800) )
      {
        v11 &= ~0x100u;
        EtwpSynchronizeWithLogger(v9, 8u);
        goto LABEL_36;
      }
LABEL_83:
      updated = -1073741811;
      goto LABEL_84;
    }
  }
  return result;
}
