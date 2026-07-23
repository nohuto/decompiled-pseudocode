/*
 * XREFs of EtwpUpdateTrace @ 0x140893BB4
 * Callers:
 *     EtwWmitraceWorker @ 0x14079D46C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     EtwpSendDbgId @ 0x14079D8F0 (EtwpSendDbgId.c)
 *     EtwpCaptureString @ 0x140893884 (EtwpCaptureString.c)
 *     EtwpEventWriteTemplateSession @ 0x1408940B0 (EtwpEventWriteTemplateSession.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140894D8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140896ED4 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14089A850 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     SeDeleteClientSecurity @ 0x14098D0C0 (SeDeleteClientSecurity.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A0910C (EtwpFreeSecurityDescriptor.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A37348 (EtwpUpdatePerProcessTracing.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140A383EC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x140A38554 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140A3860C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpValidateFlagExtension @ 0x140A387D0 (EtwpValidateFlagExtension.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140A39034 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A74364 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8DE24 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK v6; // r15d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  unsigned int *v10; // rbx
  int v11; // r12d
  unsigned int v12; // r14d
  UNICODE_STRING v13; // xmm0
  _QWORD *v14; // r15
  __int64 v15; // r13
  __int64 v16; // r9
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v18; // r10d
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v29 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  v6 = 128;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension();
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v29);
      if ( updated < 0 )
      {
LABEL_84:
        KeLeaveCriticalRegion();
        return (unsigned int)updated;
      }
      v10 = v29;
      v11 = *(_DWORD *)(a2 + 64);
      v12 = v29[3];
      v25 = v29 + 3;
      if ( (v12 & 0x40) != 0
        || (v11 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v12 & 2) == 0 && (v11 & 2) != 0
        || (v11 & 6) == 6 )
      {
        goto LABEL_82;
      }
      if ( (v11 & 0x100) != 0 || (v12 & 0x100) != 0 )
        v6 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v6 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v6);
      if ( updated < 0 )
        goto LABEL_83;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v12 & 8) != 0 || (v11 & 8) != 0 || (v12 & 0x400) != 0 )
          goto LABEL_82;
        updated = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( updated < 0 )
          goto LABEL_83;
        if ( *((_QWORD *)v10 + 90) )
        {
          SeDeleteClientSecurity(v10 + 176);
          *((_QWORD *)v10 + 90) = 0LL;
        }
        v10 = v29;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v29 + 176));
        if ( updated < 0 )
          goto LABEL_83;
        v13 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v10 + 46) = v13;
        EtwpSynchronizeWithLogger(v10, 4LL);
        updated = EtwpSynchronizeWithLogger(v10, 2LL);
        if ( updated < 0 || !v10[80] )
          goto LABEL_83;
      }
      else if ( (v12 & 0x400) != 0 )
      {
        goto LABEL_36;
      }
      if ( (v11 & 0x100) != 0 )
      {
        v12 |= 0x100u;
        if ( !v10[52] )
          v10[52] = (v12 & 0x10) != 0 ? 1000 : 1;
LABEL_36:
        v14 = v10 + 69;
        if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)(v10 + 69) && *(_QWORD *)HeapGuid.Data4 == *(_QWORD *)(v10 + 71) )
        {
          v15 = a1;
          v16 = 0LL;
        }
        else
        {
          v15 = a1;
          if ( *(_QWORD *)&CritSecGuid.Data1 != *v14 || *(_QWORD *)CritSecGuid.Data4 != *(_QWORD *)(v10 + 71) )
            goto LABEL_40;
          v16 = 1LL;
        }
        EtwpUpdatePerProcessTracing(a2, v15, *v10, v16);
LABEL_40:
        updated = EtwpCheckForStackTracingExtension(a2, v10);
        if ( updated < 0 )
          goto LABEL_83;
        if ( (*v25 & 0x2000000) != 0 )
        {
          updated = EtwpCheckSystemTraceAccess(v10, 128LL);
          if ( updated < 0 )
            goto LABEL_83;
          if ( v15 == EtwpHostSiloState )
          {
            updated = EtwpCheckForPoolTagFilterExtension(v10, a2, 0LL);
            if ( updated < 0 )
              goto LABEL_83;
          }
          updated = EtwpUpdateLoggerGroupMasks(v10, a2);
          if ( updated < 0 )
            goto LABEL_83;
        }
        if ( !*(_DWORD *)(a2 + 56) )
        {
LABEL_57:
          if ( (v12 & 0x400) == 0 )
          {
            v19 = *(_DWORD *)(a2 + 68);
            if ( v19 )
            {
              if ( v19 != v10[52] )
              {
                v10[52] = v19;
                EtwpSynchronizeWithLogger(v10, 4LL);
              }
            }
          }
          if ( (v11 & 0x80000) != 0 )
          {
            if ( v10[75] == 1 )
            {
              updated = -1073741637;
LABEL_83:
              RtlFreeAnsiString(&UnicodeString);
              LOBYTE(v24) = 1;
              EtwpReleaseLoggerContext(v10, v24);
              goto LABEL_84;
            }
            _InterlockedOr((volatile signed __int32 *)v10 + 206, 0x800u);
            v12 |= 0x80000u;
            if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
            {
              v10 = v29;
            }
            else
            {
              v10 = v29;
              EtwpSendDbgId((__int64)v29);
            }
          }
          else if ( (v12 & 0x80000) != 0 )
          {
            v12 &= ~0x80000u;
          }
          if ( (v11 & 0x80u) == 0
            || (v30 = 0LL,
                EtwpGetSecurityDescriptorByGuid(v14, &v30),
                updated = EtwpUpdateLoggerSecurityDescriptor(v10, v30),
                EtwpFreeSecurityDescriptor(&v30),
                updated >= 0) )
          {
            v10[3] = v12;
            v20 = *(_DWORD *)(a2 + 76);
            if ( v20 )
            {
              if ( v10[52] || (v12 & 0x400) != 0 )
                goto LABEL_79;
              v21 = v10[59] - EtwpQueryUsedProcessorCount((__int64)v10);
              v20 = *(_DWORD *)(a2 + 76);
              v22 = v21 - 1;
              if ( v20 > v22 )
              {
                *(_DWORD *)(a2 + 76) = v22;
                v20 = v22;
              }
              if ( v20 < 0 )
              {
LABEL_79:
                *(_DWORD *)(a2 + 76) = 0;
                v20 = 0;
              }
            }
            v10[53] = v20;
            updated = EtwpGetLoggerInfoFromContext(a2, v10);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
              EtwpEventWriteTemplateSession(v23, &ETW_EVENT_UPDATE_TRACE, v10);
          }
          goto LABEL_83;
        }
        if ( v10[1] )
        {
          SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v10);
          if ( v18 <= SystemMaximumBufferCount )
            goto LABEL_55;
        }
        else
        {
          SystemMaximumBufferCount = 0;
        }
        *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
        v18 = SystemMaximumBufferCount;
LABEL_55:
        if ( v18 > v10[59] )
          v10[59] = v18;
        goto LABEL_57;
      }
      if ( (v12 & 0x100) == 0 )
        goto LABEL_36;
      if ( *((_QWORD *)v10 + 100) )
      {
        v12 &= ~0x100u;
        EtwpSynchronizeWithLogger(v10, 8LL);
        goto LABEL_36;
      }
LABEL_82:
      updated = -1073741811;
      goto LABEL_83;
    }
  }
  return result;
}
