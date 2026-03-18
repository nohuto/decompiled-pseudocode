/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1401FEBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        PERESOURCE *this,
        void *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  CTouchProcessor *v8; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbx
  PERESOURCE *v16[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v16, this + 4, a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v8, (unsigned __int64)a2);
  v10 = NonConstMsgData;
  if ( NonConstMsgData
    && (v11 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7)), (v12 = v11) != 0) )
  {
    if ( *((_DWORD *)v10 + 8) >= *(_DWORD *)(v11 + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13709);
    v13 = *(_QWORD *)(v12 + 240) + 480LL * *((unsigned int *)v10 + 8);
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13711);
    if ( *(_DWORD *)(v13 + 172) != *((unsigned __int16 *)v10 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13714);
    *a3 = *((_WORD *)v10 + 8);
    *a4 = *(_DWORD *)(v12 + 48);
    v14 = *(_QWORD *)(v13 + 192);
    CTouchProcessor::UnreferenceFrame(this, v12);
  }
  else
  {
    v14 = 0LL;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v16);
  return v14;
}
