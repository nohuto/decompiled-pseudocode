/*
 * XREFs of EtwpUpdateTrace @ 0x14083311C
 * Callers:
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwpSendDbgId @ 0x1407ACCC0 (EtwpSendDbgId.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408301F0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1408305C8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpValidateFlagExtension @ 0x140830D20 (EtwpValidateFlagExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140830DF0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x140830F58 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140831010 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140836450 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140839D68 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeDeleteClientSecurity @ 0x14088D080 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSystemTraceAccess @ 0x14095D9F0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A12F00 (EtwpFreeSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A9290C (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK v6; // r15d
  __int64 result; // rax
  unsigned int *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // r14d
  UNICODE_STRING v14; // xmm0
  _QWORD *v15; // r15
  __int64 v16; // r13
  unsigned int v17; // r9d
  unsigned int v18; // edi
  unsigned int SystemMaximumBufferCount; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _DWORD *v27; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+58h] BYREF

  v31 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  v6 = 128;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v8);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v31);
      if ( updated < 0 )
      {
LABEL_85:
        KeLeaveCriticalRegion();
        return (unsigned int)updated;
      }
      v11 = v31;
      v12 = *(_DWORD *)(a2 + 64);
      v13 = *(_DWORD *)(v31 + 12);
      v27 = (_DWORD *)(v31 + 12);
      if ( (v13 & 0x40) != 0
        || (v12 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v13 & 2) == 0 && (v12 & 2) != 0
        || (v12 & 6) == 6 )
      {
        goto LABEL_83;
      }
      if ( (v12 & 0x100) != 0 || (v13 & 0x100) != 0 )
        v6 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v6 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v6);
      if ( updated < 0 )
        goto LABEL_84;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v13 & 8) != 0 || (v12 & 8) != 0 || (v13 & 0x400) != 0 )
          goto LABEL_83;
        updated = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( updated < 0 )
          goto LABEL_84;
        if ( *(_QWORD *)(v11 + 720) )
        {
          SeDeleteClientSecurity(v11 + 704);
          *(_QWORD *)(v11 + 720) = 0LL;
        }
        v11 = v31;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v31 + 704));
        if ( updated < 0 )
          goto LABEL_84;
        v14 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v11 + 184) = v14;
        EtwpSynchronizeWithLogger(v11, 4LL);
        updated = EtwpSynchronizeWithLogger(v11, 2LL);
        if ( updated < 0 || !*(_DWORD *)(v11 + 320) )
          goto LABEL_84;
      }
      else if ( (v13 & 0x400) != 0 )
      {
        goto LABEL_36;
      }
      if ( (v12 & 0x100) != 0 )
      {
        v13 |= 0x100u;
        if ( !*(_DWORD *)(v11 + 208) )
          *(_DWORD *)(v11 + 208) = (v13 & 0x10) != 0 ? 1000 : 1;
LABEL_36:
        v15 = (_QWORD *)(v11 + 276);
        if ( HeapGuid == *(_QWORD *)(v11 + 276) && *(_QWORD *)(v11 + 284) == 0x4AA2F2756B3425A8LL )
        {
          v16 = a1;
          v17 = 0;
        }
        else
        {
          v16 = a1;
          if ( CritSecGuid != *v15 || *(_QWORD *)(v11 + 284) != 0x6B81390EF58D1581LL )
            goto LABEL_40;
          v17 = 1;
        }
        EtwpUpdatePerProcessTracing(a2, v16, *(_DWORD *)v11, v17);
LABEL_40:
        updated = EtwpCheckForStackTracingExtension(a2, v11);
        if ( updated < 0 )
          goto LABEL_84;
        if ( (*v27 & 0x2000000) != 0 )
        {
          updated = EtwpCheckSystemTraceAccess(v11, 128LL);
          if ( updated < 0 )
            goto LABEL_84;
          if ( v16 == EtwpHostSiloState )
          {
            updated = EtwpCheckForPoolTagFilterExtension(v11, a2, 0);
            if ( updated < 0 )
              goto LABEL_84;
          }
          updated = EtwpUpdateLoggerGroupMasks(v11, a2);
          if ( updated < 0 )
            goto LABEL_84;
        }
        v18 = *(_DWORD *)(a2 + 56);
        if ( !v18 )
        {
LABEL_57:
          if ( (v13 & 0x400) == 0 )
          {
            v20 = *(_DWORD *)(a2 + 68);
            if ( v20 )
            {
              if ( v20 != *(_DWORD *)(v11 + 208) )
              {
                *(_DWORD *)(v11 + 208) = v20;
                EtwpSynchronizeWithLogger(v11, 4LL);
              }
            }
          }
          if ( (v12 & 0x80000) != 0 )
          {
            if ( *(_DWORD *)(v11 + 300) == 1 )
            {
              updated = -1073741637;
LABEL_84:
              RtlFreeAnsiString(&UnicodeString);
              LOBYTE(v26) = 1;
              EtwpReleaseLoggerContext(v11, v26);
              goto LABEL_85;
            }
            _InterlockedOr((volatile signed __int32 *)(v11 + 824), 0x800u);
            v13 |= 0x80000u;
            v21 = 0;
            if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
            {
              v11 = v31;
LABEL_72:
              if ( (v12 & 0x80u) == 0
                || (v32 = 0LL,
                    EtwpGetSecurityDescriptorByGuid(v15, &v32),
                    updated = EtwpUpdateLoggerSecurityDescriptor(v11, v32),
                    EtwpFreeSecurityDescriptor(&v32),
                    v21 = 0,
                    updated >= 0) )
              {
                *(_DWORD *)(v11 + 12) = v13;
                v22 = *(_DWORD *)(a2 + 76);
                if ( v22 )
                {
                  if ( *(_DWORD *)(v11 + 208) || (v13 & 0x400) != 0 )
                    goto LABEL_80;
                  v23 = *(_DWORD *)(v11 + 236) - EtwpQueryUsedProcessorCount(v11, 0LL);
                  v22 = *(_DWORD *)(a2 + 76);
                  v24 = v23 - 1;
                  if ( v22 > v24 )
                  {
                    *(_DWORD *)(a2 + 76) = v24;
                    v22 = v24;
                  }
                  if ( v22 < 0 )
                  {
LABEL_80:
                    *(_DWORD *)(a2 + 76) = v21;
                    v22 = v21;
                  }
                }
                *(_DWORD *)(v11 + 212) = v22;
                updated = EtwpGetLoggerInfoFromContext(a2, v11);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                  EtwpEventWriteTemplateSession(v25, &ETW_EVENT_UPDATE_TRACE, v11);
              }
              goto LABEL_84;
            }
            v11 = v31;
            EtwpSendDbgId(v31);
          }
          else if ( (v13 & 0x80000) != 0 )
          {
            v13 &= ~0x80000u;
          }
          v21 = 0;
          goto LABEL_72;
        }
        if ( *(_DWORD *)(v11 + 4) )
        {
          SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount((unsigned int *)v11);
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
        if ( v18 > *(_DWORD *)(v11 + 236) )
          *(_DWORD *)(v11 + 236) = v18;
        goto LABEL_57;
      }
      if ( (v13 & 0x100) == 0 )
        goto LABEL_36;
      if ( *(_QWORD *)(v11 + 800) )
      {
        v13 &= ~0x100u;
        EtwpSynchronizeWithLogger(v11, 8LL);
        goto LABEL_36;
      }
LABEL_83:
      updated = -1073741811;
      goto LABEL_84;
    }
  }
  return result;
}
