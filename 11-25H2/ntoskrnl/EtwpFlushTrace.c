/*
 * XREFs of EtwpFlushTrace @ 0x140894628
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCCSwapStop @ 0x1407A4484 (EtwpCCSwapStop.c)
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpCaptureString @ 0x140893884 (EtwpCaptureString.c)
 *     EtwpEventWriteTemplateSession @ 0x1408940B0 (EtwpEventWriteTemplateSession.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140894D8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140896ED4 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
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
  UNICODE_STRING v16; // xmm0
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  P = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v7, &v21);
  if ( LoggerInfoFromContext >= 0 )
  {
    v10 = v21;
    v11 = v21[3];
    v12 = ((v11 & 0x100 | 0x400) >> 3) | 0x40;
    if ( !*((_QWORD *)v21 + 100) )
      v12 = (v21[3] & 0x100 | 0x400) >> 3;
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
          v16 = P;
          P.Buffer = 0LL;
          *(UNICODE_STRING *)(v10 + 46) = v16;
          _InterlockedOr((volatile signed __int32 *)v10 + 206, 1u);
          v17 = v10[3];
          v10 = v21;
          if ( (v17 & 0x2000000) != 0 )
          {
            v18 = a1 + 32LL * *((unsigned __int8 *)v21 + 818) + 4284;
            if ( v18 )
            {
              v19 = *(_DWORD *)(v18 + 4);
              if ( (v19 & 4) != 0 && (v19 & 0x100) != 0 )
                EtwpCCSwapStop(v21[50], 0);
            }
          }
          v14 = EtwpBufferingModeFlush(v10);
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
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 448LL) + 8LL * *v10),
      1u);
  }
  if ( P.Buffer )
    ExFreePool(P.Buffer);
  KeLeaveCriticalRegion();
  return (unsigned int)LoggerInfoFromContext;
}
