/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1400C4290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1400C48D4 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1400C4944 (ApiSetEditionDoPointerDPITransforms.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C4B28 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1400C4CE8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400C4F30 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140201AC0 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        __int64 a1,
        void *a2,
        const struct tagINPUTDEST *a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7)
{
  const struct tagINPUTDEST *v7; // r14
  void *v8; // rsi
  unsigned int v10; // ebx
  char v11; // di
  CTouchProcessor *v12; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // r13
  __int64 v17; // r15
  CTouchProcessor *v18; // rcx
  struct CPointerInfoNode *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // esi
  CTouchProcessor *v23; // rcx
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // edx
  int v41; // r8d
  struct tagTHREADINFO *v43; // rax
  CTouchProcessor *v44; // rcx
  __int16 v45; // [rsp+30h] [rbp-D0h]
  const struct tagINPUTDEST *v48; // [rsp+68h] [rbp-98h]
  _BYTE v49[48]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v50[5]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v51[3]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = a3;
  v8 = a2;
  v48 = a3;
  v10 = 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      104,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v49, (struct CEResourceLock *)(a1 + 32), v8);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, (unsigned __int64)v8);
  v16 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v17 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    if ( v17 )
    {
      CInputDest::CInputDest((CInputDest *)v50, v7);
      v19 = CTouchProcessor::LookupNode(v18, (const struct CPointerInputFrame *)v17, *((_DWORD *)v16 + 8));
      v21 = *((unsigned int *)PtiCurrent(v20) + 340);
      if ( (v21 & 0x2000) != 0
        || (v43 = PtiCurrent(v21),
            v22 = 0,
            v21 = *((_QWORD *)v43 + 170) >> 37,
            (*((_QWORD *)v43 + 170) & 0x2000000000LL) != 0) )
      {
        v22 = 1;
      }
      CTouchProcessor::SetPointerInfoNodeTargetInt(
        (CTouchProcessor *)v21,
        v19,
        (const struct CInputDest *)v50,
        a4,
        0LL,
        1,
        0,
        v22,
        0);
      if ( CPointerInfoNode::GetHistoryCount(v19) > 1 )
        CTouchProcessor::UpdateHistoryWithTarget(
          (CTouchProcessor *)a1,
          (const struct CPointerInputFrame *)v17,
          v19,
          (const struct CInputDest *)v50,
          a4,
          0LL,
          1,
          v22,
          0);
      if ( !v22 )
        CTouchProcessor::SetQFrameNonCoalescable(v23, (const struct CPointerInputFrame *)v17, v19);
      if ( HIDWORD(v51[0]) )
        HMAssignmentUnlock((__int64 *)v51);
      v24 = (_QWORD *)(*(_QWORD *)(v17 + 240) + 480LL * *((unsigned int *)v16 + 8));
      v25 = *(_QWORD *)((char *)v24 + 148);
      v26 = v24[25];
      v27 = (int)v25 + (__int64)(int)v26;
      if ( (unsigned __int64)(v27 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v28 = SHIDWORD(v26) + (__int64)SHIDWORD(v25);
        *a6 = v27;
        if ( (unsigned __int64)(v28 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          a6[1] = v28;
LABEL_22:
          v29 = *(_QWORD *)((char *)v24 + 148);
          v30 = v24[27];
          v31 = (int)v29 + (__int64)(int)v30;
          if ( (unsigned __int64)(v31 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v32 = SHIDWORD(v29) + (__int64)SHIDWORD(v30);
            *(_DWORD *)a7 = v31;
            if ( (unsigned __int64)(v32 + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v33 = 0;
            }
            else
            {
              v33 = -2147024362;
              LODWORD(v32) = -1;
            }
            *(_DWORD *)(a7 + 4) = v32;
            if ( v33 >= 0 )
              goto LABEL_33;
          }
          else
          {
            *(_DWORD *)a7 = -1;
          }
          *(_QWORD *)a7 = v24[27];
LABEL_33:
          CTouchProcessor::UnreferenceFrame(a1, v17);
          ApiSetPointerPromotionOnPointerInputRetrieval(
            *((unsigned __int16 *)v16 + 8),
            *((unsigned int *)v16 + 7),
            *(_QWORD *)a7,
            a5);
          v34 = *((_OWORD *)v48 + 1);
          v50[0] = *(_OWORD *)v48;
          v35 = *((_OWORD *)v48 + 2);
          v50[1] = v34;
          v36 = *((_OWORD *)v48 + 3);
          v50[2] = v35;
          v37 = *((_OWORD *)v48 + 4);
          v50[3] = v36;
          v38 = *((_OWORD *)v48 + 5);
          v50[4] = v37;
          v39 = *((_OWORD *)v48 + 6);
          v51[0] = v38;
          v51[1] = v39;
          ApiSetEditionDoPointerDPITransforms(v50, a6, a7);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v40) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v40) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v41) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            LOBYTE(v41) = 0;
          }
          if ( (_BYTE)v40 || (_BYTE)v41 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v40,
              v41,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              107,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
          v10 = 1;
          goto LABEL_41;
        }
        a6[1] = -1;
      }
      else
      {
        *a6 = -1;
      }
      *(_QWORD *)a6 = v24[25];
      goto LABEL_22;
    }
    v44 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v45 = 106;
      goto LABEL_59;
    }
  }
  else
  {
    v44 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v45 = 105;
LABEL_59:
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v44 + 3),
        v14,
        v15,
        *((_QWORD *)v44 + 8),
        5,
        4,
        v45,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
LABEL_41:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v49);
  return v10;
}
