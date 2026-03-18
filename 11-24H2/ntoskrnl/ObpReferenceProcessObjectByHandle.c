/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1409405E0
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x140940090 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     ObpIncrPointerCount @ 0x140428440 (ObpIncrPointerCount.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14084D528 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v12; // rbx
  __int64 v13; // r8
  unsigned __int64 HandlePointer; // rax
  int v15; // r8d
  volatile signed __int64 *v16; // rdi
  int v17; // r10d
  __int64 *HandleExtraInfo; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) != 0LL )
  {
    if ( a1 == -1LL )
    {
      *a7 = 0;
      a7[1] = 0x1FFFFF;
      *a8 = 0LL;
      ObpTraceObjectReferenceIfActive((_DWORD)a2 - 48);
      ObpIncrPointerCount(&a2[-1].SchedulerAssistLastYieldBoostTime);
      result = 0LL;
      *a6 = a2;
      return result;
    }
    if ( a1 == -2LL )
    {
      *a7 = 0;
      a7[1] = 0x1FFFFF;
      *a8 = 0LL;
      ObpTraceObjectReferenceIfActive((_DWORD)CurrentThread - 48);
      ObpIncrPointerCount(&CurrentThread[-1].SchedulerAssistLastYieldBoostTime);
      result = 0LL;
      *a6 = CurrentThread;
      return result;
    }
    if ( a4 )
      return 3221225480LL;
    a3 = ObpKernelHandleTable;
    v8 = a1 ^ 0xFFFFFFFF80000000uLL;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v8 & 0x3FC) == 0 || (v12 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a3, v8)) == 0LL )
  {
LABEL_22:
    KeLeaveCriticalRegionThread();
    return 3221225480LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v12);
      v13 = *v12;
      if ( (*v12 & 1) != 0 )
        break;
      if ( !v13 )
        goto LABEL_22;
      ExpBlockOnLockedHandleEntry(a3, v12, v13);
    }
  }
  while ( v13 != _InterlockedCompareExchange64(v12, v13 - 1, v13) );
  HandlePointer = ExGetHandlePointer(v12);
  v15 = *((_DWORD *)v12 + 2);
  v16 = (volatile signed __int64 *)HandlePointer;
  v17 = v15 & 0x1FFFFFF;
  if ( *(_DWORD *)(a3 + 4)
    && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo((unsigned int *)a3, v8),
        v15 = *((_DWORD *)v12 + 2),
        HandleExtraInfo) )
  {
    v19 = *HandleExtraInfo;
  }
  else
  {
    v19 = 0LL;
  }
  *a8 = v19;
  v20 = ((__int64)*(unsigned int *)v12 >> 17) & 7;
  a7[1] = v17;
  v21 = v20 | 8;
  if ( (v15 & 0x2000000) == 0 )
    v21 = v20;
  *a7 = v21;
  BugCheckParameter4 = _InterlockedIncrement64(v16);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v16 + 6), 0x10uLL, BugCheckParameter4);
  _InterlockedIncrement64(v12);
  _InterlockedOr(v24, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock(a3 + 48, 0LL);
  KeLeaveCriticalRegionThread();
  ObpTraceObjectReferenceIfActive((int)v16);
  *a6 = (struct _KTHREAD *)(v16 + 6);
  return 0LL;
}
