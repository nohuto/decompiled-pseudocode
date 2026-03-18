/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140184258
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x140193208 (ApiSetEditionSendCursorSuppressionUpdate.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019C8E0 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x140201A6C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rbx
  char v11; // bp
  char v12; // si
  __int64 v13; // r14
  bool v14; // r15
  __int16 v15; // bx
  int v16; // edi
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  void *v20; // r8
  _BYTE v21[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v22; // [rsp+C1h] [rbp-37h]
  __int16 v23; // [rsp+C5h] [rbp-33h]
  char v24; // [rsp+C7h] [rbp-31h]

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
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      213,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  v13 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v13 + 180) & 2) == 0 )
  {
    if ( (*(_DWORD *)v13 & 0x1000) == 0 )
    {
      v22 = 0;
      v23 = 0;
      v24 = 0;
      memset(v21, 0, sizeof(v21));
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v13, a4, v9, 586) )
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        {
          v11 = 1;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = *(_WORD *)(v13 + 160);
          v16 = *(_DWORD *)(v13 + 172);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v18) = v14;
          LOBYTE(v19) = v11;
          WPP_RECORDER_AND_TRACE_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 69400),
            2,
            a5,
            214,
            a7,
            v16,
            v15);
        }
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v13) )
      ApiSetEditionSendCursorSuppressionUpdate(0LL);
    CTouchProcessor::UnreferenceMsgData((__int64)this, a4, 1);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)a2 || v12 )
  {
    v20 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v20) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v20,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      215,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
}
