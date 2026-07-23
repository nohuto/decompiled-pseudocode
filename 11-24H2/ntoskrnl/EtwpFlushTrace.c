/*
 * XREFs of EtwpFlushTrace @ 0x1409D2420
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     EtwpCCSwapStop @ 0x1407B3CA4 (EtwpCCSwapStop.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x1408361C0 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x1409D26F0 (EtwpEventWriteTemplateSession.c)
 *     EtwpCaptureString @ 0x1409D28F8 (EtwpCaptureString.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v8; // rbx
  unsigned int v9; // r15d
  ACCESS_MASK v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  PVOID P[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, (__int64 *)&v21);
  if ( LoggerInfoFromContext >= 0 )
  {
    v8 = v21;
    v9 = v21[3];
    v10 = ((v9 & 0x100 | 0x400) >> 3) | 0x40;
    if ( !*((_QWORD *)v21 + 100) )
      v10 = (v21[3] & 0x100 | 0x400) >> 3;
    if ( (v9 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v11 = a2 + 128, !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v10 |= 0x40u;
    }
    else
    {
      v11 = a2 + 128;
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10, (__int64)v21);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v11, P, v12, v13);
        if ( LoggerInfoFromContext >= 0 )
        {
          v16 = *(_OWORD *)P;
          P[1] = 0LL;
          *(_OWORD *)(v8 + 46) = v16;
          _InterlockedOr((volatile signed __int32 *)v8 + 206, 1u);
          v17 = v8[3];
          v8 = v21;
          if ( (v17 & 0x2000000) != 0 )
          {
            v18 = a1 + 32LL * *((unsigned __int8 *)v21 + 818) + 4556;
            if ( v18 )
            {
              v19 = *(_DWORD *)(v18 + 4);
              if ( (v19 & 4) != 0 && (v19 & 0x100) != 0 )
                EtwpCCSwapStop(v21[50], 0);
            }
          }
          v14 = EtwpBufferingModeFlush(v8);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v9 & 0x40000) == 0 )
        {
          v14 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_11:
          LoggerInfoFromContext = v14;
          if ( v14 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    KeReleaseMutex((PRKMUTEX)(v8 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 704LL) + 8LL * *v8),
      1u);
  }
  if ( P[1] )
    ExFreePool(P[1]);
  KeLeaveCriticalRegion();
  return (unsigned int)LoggerInfoFromContext;
}
