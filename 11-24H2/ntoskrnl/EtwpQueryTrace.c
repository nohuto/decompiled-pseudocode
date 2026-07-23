/*
 * XREFs of EtwpQueryTrace @ 0x1408360C0
 * Callers:
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x1408361C0 (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1408EEA78 (EtwCheckSecurityLoggerAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v9; // rbx
  struct _KTHREAD *v10; // rdx
  int v11; // eax
  unsigned int *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v12);
    if ( LoggerInfoFromContext >= 0 )
    {
      v9 = v12;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( (v9[204] & 0x4000) == 0
          || (v10 = KeGetCurrentThread(),
              LOBYTE(v10) = v10->PreviousMode,
              v11 = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, v10),
              v9 = v12,
              LoggerInfoFromContext = v11,
              v11 >= 0) )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v9);
        }
      }
      KeReleaseMutex((PRKMUTEX)(v9 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v9 + 170) + 704LL) + 8LL * *v9),
        1u);
    }
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
