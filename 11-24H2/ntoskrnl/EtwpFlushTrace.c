/*
 * XREFs of EtwpFlushTrace @ 0x140833B94
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     EtwpCCSwapStop @ 0x1407B3854 (EtwpCCSwapStop.c)
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140836450 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v10; // rbx
  unsigned int v11; // r15d
  ACCESS_MASK v12; // r8d
  unsigned __int16 *v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  UNICODE_STRING v17; // xmm0
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = 0LL;
  P = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v7, &v22);
  if ( LoggerInfoFromContext >= 0 )
  {
    v10 = v22;
    v11 = v22[3];
    v12 = ((v11 & 0x100 | 0x400) >> 3) | 0x40;
    if ( !*((_QWORD *)v22 + 100) )
      v12 = (v22[3] & 0x100 | 0x400) >> 3;
    if ( (v11 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v13 = (unsigned __int16 *)(a2 + 128), !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v12 |= 0x40u;
    }
    else
    {
      v13 = (unsigned __int16 *)(a2 + 128);
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v12);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v11 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v13, &P);
        if ( LoggerInfoFromContext >= 0 )
        {
          v17 = P;
          P.Buffer = 0LL;
          *(UNICODE_STRING *)(v10 + 46) = v17;
          _InterlockedOr((volatile signed __int32 *)v10 + 206, 1u);
          v18 = v10[3];
          v10 = v22;
          if ( (v18 & 0x2000000) != 0 )
          {
            v19 = a1 + 32LL * *((unsigned __int8 *)v22 + 818) + 4556;
            if ( v19 )
            {
              v20 = *(_DWORD *)(v19 + 4);
              if ( (v20 & 4) != 0 && (v20 & 0x100) != 0 )
                EtwpCCSwapStop(v22[50], 0);
            }
          }
          v14 = EtwpBufferingModeFlush(v10, v16);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v11 & 0x40000) == 0 )
        {
          v14 = EtwpSynchronizeWithLogger((__int64)v10, 4u);
LABEL_11:
          LoggerInfoFromContext = v14;
          if ( v14 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_FLUSH_TRACE, (__int64)v10);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    KeReleaseMutex((PRKMUTEX)(v10 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
      1u);
  }
  if ( P.Buffer )
    ExFreePool(P.Buffer);
  KeLeaveCriticalRegion();
  return (unsigned int)LoggerInfoFromContext;
}
