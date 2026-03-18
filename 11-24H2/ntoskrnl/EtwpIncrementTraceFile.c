/*
 * XREFs of EtwpIncrementTraceFile @ 0x1407AA940
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1408343FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x140836450 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v11);
    if ( LoggerInfoFromContext >= 0 )
    {
      v10 = v11;
      if ( (*(_DWORD *)(v11 + 12) & 8) != 0 )
      {
        v10 = v11;
        if ( (*(_DWORD *)(v11 + 824) & 1) != 0
          || (EtwpSynchronizeWithLogger(v11, 4LL),
              EtwpGenerateFileName(v10 + 168, v10 + 296, v10 + 184),
              LoggerInfoFromContext = EtwpSynchronizeWithLogger(v10, 1LL),
              LoggerInfoFromContext >= 0) )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
        }
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      LOBYTE(v8) = 1;
      EtwpReleaseLoggerContext(v10, v8);
    }
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
