/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401F6670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1400C4208 (ApiSetEditionFindThreadPointerData.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D2744 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1400D31E8 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1400F2588 (IsPointerInputMessageWithState.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140110444 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x140191300 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerData(
        PERESOURCE *a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        void *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  unsigned __int16 v8; // r12
  __int64 v9; // r13
  unsigned int v11; // ebx
  char v12; // si
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 ThreadPointerData; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  int v23; // r9d
  int v24; // r9d
  int v25; // edx
  __int16 v26; // r8
  int v28; // edx
  __int16 v29; // r8
  int v30; // r9d
  PERESOURCE *v32[6]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v33[128]; // [rsp+80h] [rbp-C8h] BYREF

  v8 = a3;
  v9 = a2;
  v11 = 0;
  v12 = 1;
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      108,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v32, a1 + 4, a5);
  CInputDest::CInputDest((CInputDest *)v33, a7);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4747);
  if ( v8 != (unsigned __int16)CTouchProcessor::GetMsgPointerId(v13, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4748);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6, v14, v16, v17) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4750);
  if ( (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v15, (unsigned __int64)a5) + 9) & 2) != 0 )
    CTouchProcessor::SetDelegateAction((CTouchProcessor *)a1, (unsigned __int64)a5, 2u);
  if ( a6 - 578 <= 0xF )
  {
    v18 = 32785;
    if ( _bittest(&v18, a6 - 578) )
      CTouchProcessor::SetDelegateAction((CTouchProcessor *)a1, (unsigned __int64)a5, 1u);
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v9, v8);
  v21 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v22 = *(_QWORD *)(ThreadPointerData + 24);
    if ( (void *)v22 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4805);
      v23 = *(_DWORD *)(v21 + 48);
      if ( (v23 & 1) == 0 && a8 )
        *(_DWORD *)(v21 + 48) = v23 | 1;
      *(_DWORD *)(v21 + 32) = a6;
      *(_QWORD *)(v21 + 40) = CInputDest::GetWindowHandle((CInputDest *)v33);
      *(_DWORD *)(v21 + 48) = v24 & 0xFFFFFFF5;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v26) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v25 || (_BYTE)v26 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v26,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          109,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      CInputDest::~CInputDest((CInputDest *)v33);
      CInpLockGuardExclusive::~CInpLockGuardExclusive(v32);
      return 1LL;
    }
    CTouchProcessor::UnreferenceMsgData((__int64)a1, v22, 4);
    *(_QWORD *)(v21 + 24) = 0LL;
  }
  else
  {
    v21 = ApiSetEditionAllocAndLinkThreadPointerData(v9, v20);
    if ( !v21 )
      goto LABEL_44;
  }
  *(_DWORD *)(v21 + 48) &= ~8u;
  *(_WORD *)(v21 + 16) = v8;
  *(_DWORD *)(v21 + 20) = a4;
  *(_QWORD *)(v21 + 24) = a5;
  *(_DWORD *)(v21 + 32) = a6;
  *(_QWORD *)(v21 + 40) = CInputDest::GetWindowHandle((CInputDest *)v33);
  *(_DWORD *)(v21 + 48) = (a8 ^ (a8 ^ v30) & 0xFFFFFFFE) & 0xFFFFFFFD;
  CTouchProcessor::ReferenceMsgData((__int64)a1, (unsigned __int64)a5, 4);
LABEL_44:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v28) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v28) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v28 || v12 )
  {
    LOBYTE(v29) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v29,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      110,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  LOBYTE(v11) = v21 != 0;
  CInputDest::~CInputDest((CInputDest *)v33);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v32);
  return v11;
}
