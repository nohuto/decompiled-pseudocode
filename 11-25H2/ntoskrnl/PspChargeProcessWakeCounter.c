/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1408B2120
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1408B0AE0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x1408B0B30 (PsChargeProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A64E18 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     EtwTraceWakeEvent @ 0x1406EEEC4 (EtwTraceWakeEvent.c)
 *     EtwTraceWakeCounter @ 0x1408B322C (EtwTraceWakeCounter.c)
 *     PspChargeJobWakeCounter @ 0x1408B3740 (PspChargeJobWakeCounter.c)
 *     PspIsProcessInJob @ 0x140A0F0B8 (PspIsProcessInJob.c)
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
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v8; // rbx
  bool v10; // bp
  __int64 *v11; // rdi
  __int64 v12; // r15
  bool v13; // r14
  char v14; // al
  volatile signed __int32 *v15; // rcx
  int v16; // ecx
  int v17; // edx
  bool v18; // bp
  int v19; // r13d
  unsigned int v20; // ebp
  int v21; // ebx
  int v23; // ecx
  int v24; // r10d
  _KPROCESS *Process; // r9
  int v26; // r9d
  int v27; // ecx
  __int64 i; // rdx
  __int64 v29; // rdx
  int v30; // r11d
  char v31; // [rsp+40h] [rbp-68h]
  char v32; // [rsp+41h] [rbp-67h]
  int v33; // [rsp+44h] [rbp-64h]
  int v34; // [rsp+48h] [rbp-60h]
  unsigned int v35; // [rsp+4Ch] [rbp-5Ch]
  int v36; // [rsp+50h] [rbp-58h]
  char v37; // [rsp+B0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v8 = (signed __int64 *)(Object + 456);
  v33 = 0;
  v35 = a3;
  v34 = 1;
  v31 = 0;
  v10 = (a2 & 2) != 0;
  v36 = a2 & 2;
  --CurrentThread->KernelApcDisable;
  v37 = 0;
  v32 = 0;
  v11 = KeAbPreAcquire(Object + 456, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v11, (unsigned __int64)v8);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = *(_QWORD *)(Object + 672);
  v13 = v10;
  if ( !v12 || (v23 = *(_DWORD *)(v12 + 1552), (v23 & 0x1000) == 0) )
  {
    v14 = 0;
    goto LABEL_7;
  }
  v24 = v36;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a6 )
  {
    if ( v36 && (v23 & 0x800000) != 0 && a5 > 0 )
      goto LABEL_38;
    v27 = a2;
    if ( (a2 & 1) == 0 || !Process[1].Padding[3] )
      goto LABEL_52;
    if ( *(_QWORD *)(Process[1].Padding[3] + 1312) == *(_QWORD *)(v12 + 1312) )
    {
      for ( i = *(_QWORD *)(Object + 672);
            (unsigned int)PspIsProcessInJob(Process, i) != 292 || (v30 & *(_DWORD *)(v29 + 1184)) == 0;
            i = *(_QWORD *)(v29 + 1304) )
      {
        if ( v29 == *(_QWORD *)(v12 + 1312) )
          goto LABEL_61;
      }
      v13 = v10;
      if ( a5 > 0 )
        goto LABEL_38;
    }
  }
LABEL_61:
  v27 = a2;
LABEL_52:
  if ( (Process[1].DirectoryTableBase & 0x40) == 0 && v24 )
  {
    v35 = 7;
    v34 = 5;
    if ( v27 < 0 )
      v34 = 7;
    v14 = 1;
    v13 = v10;
    v31 = 1;
  }
  else
  {
    v14 = 1;
    v13 = 0;
    v31 = 1;
  }
LABEL_7:
  if ( a6 && !v14 && !*(_QWORD *)(Object + 1824) )
  {
LABEL_38:
    v18 = 0;
    goto LABEL_15;
  }
  if ( v13 )
  {
    v15 = (volatile signed __int32 *)(Object + 1868);
    v35 = 7;
  }
  else
  {
    v15 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 458LL));
  }
  v16 = _InterlockedExchangeAdd(v15, a5) + a5;
  v32 = 1;
  v17 = v16 & 0x7FFFFFFF;
  v18 = v16 < 0;
  if ( v16 >= 0 )
    v17 = v16;
  v33 = v17;
  if ( !v13 )
  {
    v33 = v17;
    if ( *(_QWORD *)(Object + 1824) )
    {
      v26 = 1 << a3;
      if ( a5 > 0 )
      {
        if ( (v26 & *(_DWORD *)(Object + 1860)) != 0 && v17 == 1 )
        {
          v37 = 1;
LABEL_49:
          v33 = v17;
          goto LABEL_15;
        }
LABEL_58:
        v37 = 0;
        goto LABEL_49;
      }
      if ( (v26 & *(_DWORD *)(Object + 1864)) == 0 || v17 )
        goto LABEL_58;
      v37 = 1;
      v33 = 0;
    }
  }
LABEL_15:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v37 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 1824), 0LL, 0, 0LL, 0LL, 0, 0);
    v19 = v33;
    if ( (xmmword_140FC5B10 & 0x400) != 0 && v33 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v19 = v33;
  }
  if ( a7 )
    *a7 = v19;
  if ( v18 || v31 )
  {
    v20 = a3;
    v21 = a5;
    PspChargeJobWakeCounter((PVOID)v12, v34, Object, a4);
  }
  else
  {
    v20 = a3;
    v21 = a5;
  }
  if ( v32 )
  {
    if ( (xmmword_140FC5B10 & 0x2000) != 0 )
      EtwTraceWakeCounter(Object, v13, v20, v21, v19, Object, a4);
    if ( a6 )
    {
      if ( a5 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
        return Object | v35;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    }
  }
  else if ( (xmmword_140FC5B10 & 0x200) != 0 )
  {
    EtwTraceWakeCounter(Object, v13, v20, 0, 0LL, Object, a4);
  }
  return 0LL;
}
