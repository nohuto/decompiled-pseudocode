/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1400D3D08
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D32E0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceFrameFromId(
        CTouchProcessor *this,
        unsigned __int16 a2)
{
  unsigned __int16 v2; // r14
  char v4; // bl
  char v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rdi
  unsigned __int64 v9; // rdx
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  PERESOURCE *v13[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      303,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v6 = 0LL;
  v8 = PtiCurrent(v7);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)v8 + 1208, v2);
  if ( (ThreadPointerHookData
     || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(
                                   this,
                                   (struct _LIST_ENTRY *)((char *)v8 + 1208),
                                   v2)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0 )
  {
    v9 = *((_QWORD *)ThreadPointerHookData + 3);
    if ( v9 )
    {
      NonConstMsgData = CTouchProcessor::GetNonConstMsgData(ThreadPointerHookData, v9);
      if ( NonConstMsgData )
        v6 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 0;
  if ( (_BYTE)v9 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_WORD)v9,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      304,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
  return (const struct CPointerInputFrame *)v6;
}
