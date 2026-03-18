/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1401F9F40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400DE5D0 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     EtwTracePointerNoCoalesce @ 0x140104EE0 (EtwTracePointerNoCoalesce.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1401FA134 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x140207070 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        PERESOURCE *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  unsigned int v12; // ebx
  struct CPointerMsgData *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  CTouchProcessor *v17; // rcx
  CTouchProcessor *v18; // rcx
  unsigned int v19; // r14d
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  PERESOURCE *v22[8]; // [rsp+30h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v22, this + 4, a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (unsigned __int64)a2);
  v12 = 0;
  v13 = NonConstMsgData;
  if ( !NonConstMsgData )
    goto LABEL_19;
  v14 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
  v15 = v14;
  if ( !v14 )
    goto LABEL_19;
  if ( *((_DWORD *)v13 + 8) >= *(_DWORD *)(v14 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5950);
  v16 = *(_QWORD *)(v15 + 240) + 480LL * *((unsigned int *)v13 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5952);
  if ( *(_WORD *)(v16 + 172) != *((_WORD *)v13 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5953);
  if ( !a5 )
  {
    if ( a4 )
      goto LABEL_11;
    goto LABEL_17;
  }
  if ( a4 )
  {
LABEL_17:
    if ( a3 )
      goto LABEL_11;
    CTouchProcessor::UnreferenceFrame(this, v15);
LABEL_19:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
    return 0LL;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(
    (CTouchProcessor *)this,
    (const struct CPointerInputFrame *)v15,
    *((_DWORD *)v13 + 8),
    a6,
    a3,
    a4);
  if ( (*((_DWORD *)CTouchProcessor::GetPointerInfoNodeQFrame(
                      v17,
                      (const struct CPointerInputFrame *)v15,
                      (const struct CPointerInfoNode *)v16)
        + 35) & 4) == 0 )
  {
    v19 = CTouchProcessor::DelegateCoalesceQFrame(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v15,
            *(_DWORD *)(v16 + 8));
    if ( !v19 )
    {
      PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(
                                v18,
                                (const struct CPointerInputFrame *)v15,
                                (const struct CPointerInfoNode *)v16);
      EtwTracePointerNoCoalesce(
        *(unsigned __int16 *)(v16 + 160),
        *(_WORD *)(v16 + 172),
        *((_DWORD *)PointerInfoNodeQFrame + 37),
        1);
    }
    v12 = v19;
  }
  CTouchProcessor::UnreferenceFrame(this, v15);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
  return v12;
}
