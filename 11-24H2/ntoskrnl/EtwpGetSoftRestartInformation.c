/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x1407AFBC0
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char v6; // r14
  __int64 v7; // r8
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rax

  v6 = 0;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  *a3 = 24;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v9 = (unsigned __int16)*(_QWORD *)(a1 + 8);
  if ( (_DWORD)v9 == 0xFFFF )
    v9 = *(unsigned __int8 *)(EtwpHostSiloState + 4504);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v7) = 1;
  v11 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v9, v7);
  if ( v11 )
  {
    v13 = EtwpCheckLoggerControlAccess(1u);
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)(v11 + 1352);
      if ( v14 )
        v6 = *(_BYTE *)(v14 + 32);
    }
    LOBYTE(v12) = 1;
    EtwpReleaseLoggerContext(v11, v12);
  }
  else
  {
    v13 = -1073741162;
  }
  KeLeaveCriticalRegion();
  if ( v13 >= 0 )
    *(_BYTE *)(a1 + 16) = v6;
  return (unsigned int)v13;
}
