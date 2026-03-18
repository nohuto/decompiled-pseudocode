/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1400C40A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1400C4208 (ApiSetEditionFindThreadPointerData.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x140201A6C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 v6; // r8
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v12; // rdi
  __int64 ThreadPointerData; // rax
  __int64 v15; // rsi
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  IsTouchpad = 0;
  v6 = *((_QWORD *)a2 + 170);
  if ( (v6 & 0x2000) != 0 || (v6 & 0x2000000000LL) != 0 )
    return 0LL;
  if ( !a3 )
  {
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v16,
      (CTouchProcessor *)((char *)this + 32),
      0LL);
    ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1208, a4);
    if ( ThreadPointerData )
      IsTouchpad = *(_DWORD *)(ThreadPointerData + 20) == 5;
    goto LABEL_13;
  }
  if ( a3 == (void *)-1LL )
    return 1;
  if ( !*((_QWORD *)a2 + 81)
    && ((*(_BYTE *)(*((_QWORD *)a2 + 58) + 816LL) & 4) != 0
     || (*((_QWORD *)a2 + 170) & 0x2000000LL) != 0
     || (v6 & 0x4000000) != 0)
    && a4 )
  {
    return IsTouchpad;
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v16,
    (CTouchProcessor *)((char *)this + 32),
    a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (unsigned __int64)a3);
  v12 = NonConstMsgData;
  if ( !NonConstMsgData || (v15 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7))) == 0 )
  {
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v16);
    return 0LL;
  }
  IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*(_QWORD *)(v15 + 240)
                                                               + 480LL * *((unsigned int *)v12 + 8)));
  CTouchProcessor::UnreferenceFrame(this, v15);
LABEL_13:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v16);
  return IsTouchpad;
}
