/*
 * XREFs of EtwpStopTrace @ 0x1409D2184
 * Callers:
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x1408361C0 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1409D26F0 (EtwpEventWriteTemplateSession.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  void *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64)a2, (__int64 *)&P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( a3 )
        goto LABEL_4;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        EtwpReleaseLoggerContext((unsigned int *)P, 1);
        LoggerInfoFromContext = -1073741535;
        goto LABEL_27;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
      if ( LoggerInfoFromContext >= 0 )
      {
LABEL_4:
        v11 = *v10;
        if ( (v10[3] & 0x400) == 0 )
        {
          v12 = (void *)*((_QWORD *)v10 + 4);
          ObReferenceObjectByPointer(v12, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
          KeResetEvent((PRKEVENT)v10 + 19);
          v13 = (unsigned int)v11;
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v11),
                 1u) )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance(v10);
            if ( LoggerInfoFromContext < 0 )
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v13),
                1u);
          }
          else
          {
            LoggerInfoFromContext = -2147483611;
          }
          KeReleaseMutex((PRKMUTEX)(v10 + 158), 0);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
            1u);
          if ( LoggerInfoFromContext >= 0 )
          {
            if ( (v10[10] & 0x80000000) == 0 )
            {
              while ( KeWaitForSingleObject(v10 + 114, Executive, 0, 0, &Timeout) == 258 )
                ;
            }
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v10);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = v10[10];
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                EtwpEventWriteTemplateSession(v14, &ETW_EVENT_STOP_TRACE, v10);
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v13),
              1u);
          }
          KeLeaveCriticalRegion();
          if ( LoggerInfoFromContext >= 0 )
            KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
          ObfDereferenceObject(v12);
          return (unsigned int)LoggerInfoFromContext;
        }
        LoggerInfoFromContext = EtwpStopLoggerInstance(v10);
        KeReleaseMutex((PRKMUTEX)(v10 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
          1u);
        if ( LoggerInfoFromContext >= 0 )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v10);
          EtwpFreeLoggerContext(v10);
        }
      }
      else
      {
        EtwpReleaseLoggerContext(v10, 1);
      }
    }
LABEL_27:
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
