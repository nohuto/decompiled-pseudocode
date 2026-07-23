/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1408999A0
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088F9F0 (AlpcpCancelMessagesByRequestor.c)
 *     PsReleaseProcessWakeCounter @ 0x140898050 (PsReleaseProcessWakeCounter.c)
 *     AlpcMessageCleanupProcedure @ 0x1408982A0 (AlpcMessageCleanupProcedure.c)
 *     PsChargeProcessWakeCounter @ 0x1408983D0 (PsChargeProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A60D10 (PspAdjustKeepAliveCountProcess.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     EtwTraceWakeEvent @ 0x1406F8978 (EtwTraceWakeEvent.c)
 *     EtwTraceWakeCounter @ 0x140897E48 (EtwTraceWakeCounter.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 *     PspIsProcessInJob @ 0x140A10C78 (PspIsProcessInJob.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 Object,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  signed __int64 *v7; // rsi
  char *v9; // rbx
  __int64 v10; // r15
  bool v11; // r14
  char v12; // r13
  volatile signed __int32 *v13; // rcx
  int v14; // ecx
  int v15; // edx
  bool v16; // bl
  int v17; // esi
  __int16 v18; // r13
  __int64 v19; // rbx
  int v21; // ecx
  int v22; // r10d
  _KPROCESS *Process; // r9
  int v24; // r9d
  int v25; // ebx
  __int64 i; // rdx
  __int64 v27; // rdx
  int v28; // r11d
  char v29; // [rsp+40h] [rbp-78h]
  int v30; // [rsp+44h] [rbp-74h]
  int v31; // [rsp+48h] [rbp-70h]
  unsigned int v32; // [rsp+4Ch] [rbp-6Ch]
  int v33; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  char v35; // [rsp+C0h] [rbp+8h]

  v7 = (signed __int64 *)(Object + 456);
  v32 = a3;
  v30 = 0;
  v31 = 1;
  v35 = 0;
  v33 = a2 & 2;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire(Object + 456, 0LL);
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, 0, v9, (__int64)v7);
  if ( v9 )
    v9[10] = 1;
  v10 = *(_QWORD *)(Object + 672);
  v11 = v33 != 0;
  if ( v10 && (v21 = *(_DWORD *)(v10 + 1552), (v21 & 0x1000) != 0) )
  {
    v22 = v33;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( a6 )
    {
      if ( v33 && (v21 & 0x800000) != 0 && a5 > 0 )
        goto LABEL_35;
      v25 = a2;
      if ( (a2 & 1) != 0
        && Process[1].Padding[3]
        && *(_QWORD *)(Process[1].Padding[3] + 1312) == *(_QWORD *)(v10 + 1312) )
      {
        for ( i = *(_QWORD *)(Object + 672);
              (unsigned int)PspIsProcessInJob(Process, i) != 292 || (v28 & *(_DWORD *)(v27 + 1184)) == 0;
              i = *(_QWORD *)(v27 + 1304) )
        {
          if ( v27 == *(_QWORD *)(v10 + 1312) )
            goto LABEL_44;
        }
        v11 = v33 != 0;
        if ( a5 > 0 )
        {
LABEL_35:
          v16 = 0;
          v12 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v25 = a2;
    }
LABEL_44:
    if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v22 )
    {
      v32 = 7;
      v31 = 5;
      if ( v25 < 0 )
        v31 = 7;
      v11 = v33 != 0;
      v12 = 1;
    }
    else
    {
      v11 = 0;
      v12 = 1;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( !a6 || v12 || *(_QWORD *)(Object + 1824) )
  {
    if ( v11 )
    {
      v13 = (volatile signed __int32 *)(Object + 1868);
      v32 = 7;
    }
    else
    {
      v13 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 458LL));
    }
    v14 = _InterlockedExchangeAdd(v13, a5) + a5;
    v29 = 1;
    v15 = v14 & 0x7FFFFFFF;
    v16 = v14 < 0;
    if ( v14 >= 0 )
      v15 = v14;
    v30 = v15;
    if ( !v11 )
    {
      v30 = v15;
      if ( *(_QWORD *)(Object + 1824) )
      {
        v24 = 1 << a3;
        if ( a5 > 0 )
        {
          if ( (v24 & *(_DWORD *)(Object + 1860)) != 0 && v15 == 1 )
          {
            v35 = 1;
LABEL_42:
            v30 = v15;
            goto LABEL_15;
          }
LABEL_51:
          v35 = 0;
          goto LABEL_42;
        }
        if ( (v24 & *(_DWORD *)(Object + 1864)) == 0 || v15 )
          goto LABEL_51;
        v35 = 1;
        v30 = 0;
      }
    }
  }
  else
  {
    v16 = 0;
  }
LABEL_15:
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread();
  if ( v35 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 1824), 0LL, 0, 0LL, 0LL, 0, 0);
    v17 = v30;
    if ( (xmmword_140FC6B50 & 0x400) != 0 && v30 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v17 = v30;
  }
  if ( a7 )
    *a7 = v17;
  if ( v16 || v12 )
  {
    v18 = a3;
    v19 = a5;
    PspChargeJobWakeCounter((PVOID)v10, v31, Object, a4);
  }
  else
  {
    v18 = a3;
    v19 = a5;
  }
  if ( v29 )
  {
    if ( (xmmword_140FC6B50 & 0x2000) != 0 )
      EtwTraceWakeCounter(Object, v11, v18, v19, v17, Object, a4);
    if ( a6 )
    {
      if ( a5 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
        return Object | v32;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    }
  }
  else if ( (xmmword_140FC6B50 & 0x200) != 0 )
  {
    EtwTraceWakeCounter(Object, v11, v18, 0LL, 0LL, Object, a4);
  }
  return 0LL;
}
