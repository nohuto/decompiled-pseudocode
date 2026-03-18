/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1400D90C0 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3B24 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 * Callees:
 *     ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1401D0444 (-Insert@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?Lookup@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1401D0698 (-Lookup@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  signed __int64 v5; // rbp
  char v6; // si
  __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // r12
  signed __int64 v10; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *Pool2; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v12; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v13; // rsi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***v14; // rax
  volatile signed __int64 v15; // rax
  __int64 v16; // rbp
  NSInstrumentation::CPrioritizedWriterLock *v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  unsigned __int16 CurrentThreadId; // ax
  __int16 v21; // cx
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF

  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  if ( v5 && v5 == 1011 * (v5 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  while ( 1 )
  {
    v8 = *((_QWORD *)a2 + 4);
    v9 = v8 < 0;
    v10 = -v8;
    if ( v8 >= 0 )
      v10 = *((_QWORD *)a2 + 4);
    if ( v10 == v7 )
      break;
    KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v9 )
    {
      Pool2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePool2(258LL, 4096LL, 1648980821LL);
      if ( Pool2 )
      {
        v12 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v12 != a2 )
          goto LABEL_22;
        *(_QWORD *)Pool2 = a2;
        *((_QWORD *)Pool2 + 1) = v12;
        *v12 = Pool2;
        *((_QWORD *)a2 + 1) = Pool2;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v7;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 == a2 )
    {
LABEL_19:
      _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
      if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v10) )
        _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v10);
      KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
      goto LABEL_23;
    }
    v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
    if ( *v13 == a2 )
    {
      v14 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***)v13[1];
      if ( *v14 == v13 )
      {
        *((_QWORD *)a2 + 1) = v14;
        *v14 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2;
        memmove((char *)v13 + 52, (char *)a2 + 52, 0xFCCuLL);
        v15 = *(_QWORD *)a2;
        if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) == a2 )
        {
          *v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v15;
          v13[1] = a2;
          *(_QWORD *)(v15 + 8) = v13;
          *(_QWORD *)a2 = v13;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_23:
  v16 = v5 % 1011;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v17 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)this + 4);
  v18 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v17,
          (NSInstrumentation::CBackTrace *)BackTrace);
  if ( v18
    || (v18 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v17,
                (NSInstrumentation::CBackTrace *)BackTrace)) != 0 )
  {
    v19 = *(_DWORD *)(v18 + 180);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
    LOWORD(v19) = -1;
  }
  *((_WORD *)a2 + 2 * v16 + 26) = (2 * v19) | *((_WORD *)a2 + 2 * v16 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v21 = *((_WORD *)a2 + 2 * v16 + 26);
  *((_WORD *)a2 + 2 * v16 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v16 + 26) = a3 | v21 & 0xFFFE;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
