/*
 * XREFs of EtwpStopTrace @ 0x1408325A4
 * Callers:
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ObReferenceObjectByPointer @ 0x140432520 (ObReferenceObjectByPointer.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140836450 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 result; // rax
  __int16 v8; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  int LoggerInfoFromContext; // edi
  unsigned int *v12; // rbx
  __int64 v13; // rdi
  void *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  v6 = a3;
  result = EtwpValidateLoggerInfo(a2, 0xFFFFFFFFLL, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v8;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v12 = (unsigned int *)P;
      if ( v6 )
        goto LABEL_4;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        LOBYTE(v10) = 1;
        EtwpReleaseLoggerContext(P, v10);
        LoggerInfoFromContext = -1073741535;
        goto LABEL_27;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u);
      if ( LoggerInfoFromContext >= 0 )
      {
LABEL_4:
        v13 = *v12;
        if ( (v12[3] & 0x400) == 0 )
        {
          v14 = (void *)*((_QWORD *)v12 + 4);
          ObReferenceObjectByPointer(v14, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
          KeResetEvent((PRKEVENT)v12 + 19);
          v15 = (unsigned int)v13;
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v13),
                 1u) )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance(v12);
            if ( LoggerInfoFromContext < 0 )
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v15),
                1u);
          }
          else
          {
            LoggerInfoFromContext = -2147483611;
          }
          KeReleaseMutex((PRKMUTEX)(v12 + 158), 0);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v12 + 170) + 704LL) + 8LL * *v12),
            1u);
          if ( LoggerInfoFromContext >= 0 )
          {
            if ( (v12[10] & 0x80000000) == 0 )
            {
              while ( KeWaitForSingleObject(v12 + 114, Executive, 0, 0, &Timeout) == 258 )
                ;
            }
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v12);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = v12[10];
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                EtwpEventWriteTemplateSession(v16, &ETW_EVENT_STOP_TRACE, v12);
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v15),
              1u);
          }
          KeLeaveCriticalRegion();
          if ( LoggerInfoFromContext >= 0 )
            KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
          ObfDereferenceObject(v14);
          return (unsigned int)LoggerInfoFromContext;
        }
        LoggerInfoFromContext = EtwpStopLoggerInstance(v12);
        KeReleaseMutex((PRKMUTEX)(v12 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v12 + 170) + 704LL) + 8LL * *v12),
          1u);
        if ( LoggerInfoFromContext >= 0 )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v12);
          EtwpFreeLoggerContext(v12);
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        EtwpReleaseLoggerContext(v12, v17);
      }
    }
LABEL_27:
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
