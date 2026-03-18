/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01BF35C
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DEA08 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C00E3AD2 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C00E3EF8 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C01B96A0 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01B9A4C (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C01BA604 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01BF8B8 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C3EA4 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        void *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  __int64 Pool2; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  _OWORD *v12; // rcx
  struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  struct CPointerInfoNode *v16; // rax
  CTouchProcessor *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // ebx
  unsigned int v27; // edx
  struct CPointerQFrame *v28; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rbx
  int v37; // r15d
  struct tagDESKTOP *v38; // rbx
  __int64 v39; // rax
  unsigned int *v40; // rbx
  __int64 v41; // rax
  __int64 v43; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v44; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v45; // [rsp+38h] [rbp-C8h]
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v47[48]; // [rsp+48h] [rbp-B8h] BYREF
  CInpLockGuard *v48[7]; // [rsp+78h] [rbp-88h] BYREF
  PVOID BackTrace[44]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+220h] [rbp+120h] BYREF
  void *v51; // [rsp+230h] [rbp+130h]
  unsigned __int64 v52; // [rsp+238h] [rbp+138h] BYREF

  v51 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v47, (struct CInpLockGuard *)(this + 4), 0LL);
  v5 = gpLeakTrackingAllocator;
  v6 = 0LL;
  v43 = 260LL;
  v50 = 1718645589;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v46 = 264LL;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, 264LL, 1718645589LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_16;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v52 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1718645589, &v52) )
      {
        v44 = &v43;
        v45 = &v50;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)&v44,
                  &v46);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v10, 280LL, 1718645589LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v5,
                 Pool2,
                 v52,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v11 = Pool2;
            goto LABEL_20;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v5,
                    (const void *)Pool2,
                    v52,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_49:
    Pool2 = 0LL;
LABEL_50:
    v6 = Pool2;
    goto LABEL_51;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x66707355u) )
    goto LABEL_49;
  v9 = (_QWORD *)ExAllocatePool2(v43 & 0xFFFFFFFFFFFFFFFDuLL, 280LL, v50);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
        *v9 = 1718645589LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v5 + 1),
      0x66707355uLL);
  }
LABEL_16:
  v11 = Pool2;
  if ( !Pool2 )
    goto LABEL_49;
LABEL_20:
  v12 = (_OWORD *)Pool2;
  v13 = a2;
  v14 = 2LL;
  do
  {
    *v12 = *(_OWORD *)v13;
    v12[1] = *((_OWORD *)v13 + 1);
    v12[2] = *((_OWORD *)v13 + 2);
    v12[3] = *((_OWORD *)v13 + 3);
    v12[4] = *((_OWORD *)v13 + 4);
    v12[5] = *((_OWORD *)v13 + 5);
    v12[6] = *((_OWORD *)v13 + 6);
    v12 += 8;
    v15 = *((_OWORD *)v13 + 7);
    v13 = (struct CPointerInputFrame *)((char *)v13 + 128);
    *(v12 - 1) = v15;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v12 = *(_QWORD *)v13;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 240) = 0LL;
  *(_QWORD *)(Pool2 + 248) = 0LL;
  *(_QWORD *)(Pool2 + 232) = 0LL;
  *(_QWORD *)(Pool2 + 256) = 0LL;
  v16 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
  *(_QWORD *)(Pool2 + 240) = v16;
  if ( v16 )
  {
    memset(&BackTrace[20], 0, 0x90uLL);
    v18 = *(_OWORD *)&BackTrace[22];
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)&BackTrace[20];
    v19 = *(_OWORD *)&BackTrace[24];
    *(_OWORD *)(Pool2 + 88) = v18;
    v20 = *(_OWORD *)&BackTrace[26];
    *(_OWORD *)(Pool2 + 104) = v19;
    v21 = *(_OWORD *)&BackTrace[28];
    *(_OWORD *)(Pool2 + 120) = v20;
    v22 = *(_OWORD *)&BackTrace[30];
    *(_OWORD *)(Pool2 + 136) = v21;
    v23 = *(_OWORD *)&BackTrace[32];
    *(_OWORD *)(Pool2 + 152) = v22;
    v24 = *(_OWORD *)&BackTrace[34];
    *(_OWORD *)(Pool2 + 168) = v23;
    v25 = *(_OWORD *)&BackTrace[36];
    *(_OWORD *)(Pool2 + 184) = v24;
    *(_OWORD *)(Pool2 + 200) = v25;
    *(LARGE_INTEGER *)(Pool2 + 72) = KeQueryPerformanceCounter(0LL);
    v26 = 0;
    v27 = *((_DWORD *)a2 + 12);
    if ( v27 )
    {
      do
      {
        CPointerInfoNode::operator=(*(_QWORD *)(Pool2 + 240) + 480LL * v26, 480LL * v26 + *((_QWORD *)a2 + 30));
        v27 = *((_DWORD *)a2 + 12);
        ++v26;
      }
      while ( v26 < v27 );
    }
    v28 = CTouchProcessor::AllocPointerQFrameList(this, v27);
    *(_QWORD *)(Pool2 + 248) = v28;
    if ( v28 )
    {
      for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
        CPointerQFrame::operator=(*(_QWORD *)(Pool2 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
      if ( !*((_QWORD *)a2 + 29)
        || (v30 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (*(_QWORD *)(Pool2 + 232) = v30) != 0LL) )
      {
        v31 = HMValidateHandleNoSecure((int)v51, 19);
        if ( !v31 )
        {
          v50 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2946);
        }
        v45 = *(unsigned int **)(v31 + 472);
        v44 = (__int64 *)(Pool2 + 256);
        HMAssignmentLock(&v44, 0);
        v36 = *(_DWORD **)(SGDGetUserSessionState(v33, v32, v34, v35) + 16368);
        CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
          (CInpLockGuardExclusiveIfNeeded *)v48,
          (struct CInpLockGuard *)(v36 + 2),
          0LL);
        v37 = (*v36)++;
        if ( v37 == -1 )
        {
          *v36 = 1;
          v38 = grpdeskRitInput;
          if ( qword_1C0296850 )
          {
            if ( (int)qword_1C0296850() >= 0 && qword_1C0296858 )
              qword_1C0296858(v38);
          }
        }
        CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v48);
        *((_DWORD *)a2 + 10) = v37;
        goto LABEL_50;
      }
    }
  }
  v39 = *(_QWORD *)(Pool2 + 240);
  if ( v39 )
  {
    if ( v39 == *((_QWORD *)a2 + 30) )
    {
      LODWORD(v52) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2965);
    }
    v40 = (unsigned int *)(Pool2 + 48);
    CTouchProcessor::FreePointerInfoList(v17, *(struct CPointerInfoNode **)(Pool2 + 240), *(_DWORD *)(Pool2 + 48));
  }
  else
  {
    v40 = (unsigned int *)(v11 + 48);
  }
  v41 = *(_QWORD *)(Pool2 + 248);
  if ( v41 )
  {
    if ( v41 == *((_QWORD *)a2 + 31) )
    {
      LODWORD(v52) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2970);
    }
    CTouchProcessor::FreePointerQFrameList(v17, *(struct CPointerQFrame **)(Pool2 + 248), *v40);
  }
  Win32FreePool((char *)Pool2);
LABEL_51:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v47);
  return (struct CPointerInputFrame *)v6;
}
