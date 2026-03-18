/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E2610
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E2550 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1400601C0 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140060214 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x140118698 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x140126458 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x14012EFF4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140182918 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1401F6D84 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140222544 (ApiSetResetLastSeenFrameId.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  struct CPointerInputFrame *v10; // rax
  __int128 v11; // xmm1
  struct CPointerInfoNode *v12; // rax
  CTouchProcessor *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  unsigned int v23; // edx
  struct CPointerQFrame *v24; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  _DWORD *v29; // rbx
  __int64 v30; // rcx
  int v31; // r14d
  __int64 UserSessionState; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD v36[2]; // [rsp+28h] [rbp-E0h] BYREF
  PERESOURCE *v37[6]; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v38[13]; // [rsp+68h] [rbp-A0h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v37,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v6 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
  v7 = v6;
  if ( !v6 )
  {
LABEL_26:
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v37);
    return 0LL;
  }
  v8 = 2LL;
  v9 = (_OWORD *)v6;
  v10 = a2;
  do
  {
    *v9 = *(_OWORD *)v10;
    v9[1] = *((_OWORD *)v10 + 1);
    v9[2] = *((_OWORD *)v10 + 2);
    v9[3] = *((_OWORD *)v10 + 3);
    v9[4] = *((_OWORD *)v10 + 4);
    v9[5] = *((_OWORD *)v10 + 5);
    v9[6] = *((_OWORD *)v10 + 6);
    v9 += 8;
    v11 = *((_OWORD *)v10 + 7);
    v10 = (struct CPointerInputFrame *)((char *)v10 + 128);
    *(v9 - 1) = v11;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v9 = *(_QWORD *)v10;
  *(_QWORD *)(v7 + 16) = v7 + 8;
  *(_QWORD *)(v7 + 8) = v7 + 8;
  *(_QWORD *)(v7 + 32) = v7 + 24;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  *(_QWORD *)(v7 + 240) = 0LL;
  *(_QWORD *)(v7 + 248) = 0LL;
  *(_QWORD *)(v7 + 232) = 0LL;
  *(_QWORD *)(v7 + 256) = 0LL;
  v12 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
  *(_QWORD *)(v7 + 240) = v12;
  if ( !v12 )
    goto LABEL_17;
  memset(&v38[4], 0, 0x90uLL);
  v14 = v38[5];
  *(_OWORD *)(v7 + 72) = v38[4];
  v15 = v38[6];
  *(_OWORD *)(v7 + 88) = v14;
  v16 = v38[7];
  *(_OWORD *)(v7 + 104) = v15;
  v17 = v38[8];
  *(_OWORD *)(v7 + 120) = v16;
  v18 = v38[9];
  *(_OWORD *)(v7 + 136) = v17;
  v19 = v38[10];
  *(_OWORD *)(v7 + 152) = v18;
  v20 = v38[11];
  *(_OWORD *)(v7 + 168) = v19;
  v21 = v38[12];
  *(_OWORD *)(v7 + 184) = v20;
  *(_OWORD *)(v7 + 200) = v21;
  *(LARGE_INTEGER *)(v7 + 72) = KeQueryPerformanceCounter(0LL);
  v22 = 0;
  v23 = *((_DWORD *)a2 + 12);
  if ( v23 )
  {
    do
    {
      CPointerInfoNode::operator=(*(_QWORD *)(v7 + 240) + 480LL * v22, 480LL * v22 + *((_QWORD *)a2 + 30));
      v23 = *((_DWORD *)a2 + 12);
      ++v22;
    }
    while ( v22 < v23 );
  }
  v24 = CTouchProcessor::AllocPointerQFrameList(this, v23);
  *(_QWORD *)(v7 + 248) = v24;
  if ( !v24 )
    goto LABEL_17;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    CPointerQFrame::operator=(*(_QWORD *)(v7 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
  if ( *((_QWORD *)a2 + 29) )
  {
    v26 = CTouchProcessor::CopyRawDataList(this, a2);
    *(_QWORD *)(v7 + 232) = v26;
    if ( !v26 )
    {
LABEL_17:
      v34 = *(_QWORD *)(v7 + 240);
      if ( v34 )
      {
        if ( v34 == *((_QWORD *)a2 + 30) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3059LL);
        CTouchProcessor::FreePointerInfoList(v13, *(struct CPointerInfoNode **)(v7 + 240), *(_DWORD *)(v7 + 48));
      }
      v35 = *(_QWORD *)(v7 + 248);
      if ( v35 )
      {
        if ( v35 == *((_QWORD *)a2 + 31) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3064LL);
        CTouchProcessor::FreePointerQFrameList(v13, *(struct CPointerQFrame **)(v7 + 248), *(_DWORD *)(v7 + 48));
      }
      GreDeleteFastMutex((char *)v7);
      goto LABEL_26;
    }
  }
  v27 = HMValidateHandleNoSecure(a3, 19);
  if ( !v27 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3040LL);
  v36[1] = *(_QWORD *)(v27 + 456);
  v36[0] = v7 + 256;
  HMAssignmentLock(v36, 0LL);
  v29 = *(_DWORD **)(W32GetUserSessionState(v28) + 16728);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v38,
    (struct CEResourceLock *)(v29 + 2),
    0LL);
  v31 = (*v29)++;
  if ( v31 == -1 )
  {
    *v29 = 1;
    UserSessionState = W32GetUserSessionState(v30);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19200));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((PERESOURCE **)v38);
  *((_DWORD *)a2 + 10) = v31;
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v37);
  return (struct CPointerInputFrame *)v7;
}
