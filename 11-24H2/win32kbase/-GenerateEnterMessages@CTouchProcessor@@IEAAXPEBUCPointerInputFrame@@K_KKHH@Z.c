/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401844F0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x140193208 (ApiSetEditionSendCursorSuppressionUpdate.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019C8E0 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x140201A6C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rbx
  char v11; // si
  __int64 v12; // r14
  char v13; // r15
  bool v14; // r12
  __int16 v15; // bx
  int v16; // edi
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  char v21; // r15
  bool v22; // r12
  __int16 v23; // bx
  int v24; // edi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  void *v28; // r8
  _BYTE v29[112]; // [rsp+58h] [rbp-61h] BYREF
  char v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+C9h] [rbp+10h]
  __int16 v32; // [rsp+CDh] [rbp+14h]
  char v33; // [rsp+CFh] [rbp+16h]

  v8 = a3;
  v9 = a2;
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
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      199,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    memset(v29, 0, sizeof(v29));
    v30 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v13 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_WORD *)(v12 + 160);
        v16 = *(_DWORD *)(v12 + 172);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v18) = v14;
        LOBYTE(v19) = v13;
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          a5,
          200,
          a7,
          v16,
          v15);
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v12) )
      ApiSetEditionSendCursorSuppressionUpdate(1LL);
  }
  else
  {
    v20 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 4) == 0 && (v20 & 8) != 0 || (v20 & 0x40) != 0 )
    {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      memset(v29, 0, sizeof(v29));
      v30 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v21 = 0;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_WORD *)(v12 + 160);
          v24 = *(_DWORD *)(v12 + 172);
          v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v26) = v22;
          LOBYTE(v27) = v21;
          WPP_RECORDER_AND_TRACE_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(v25 + 69400),
            2,
            a5,
            201,
            a7,
            v24,
            v23);
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    v28 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v28) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v28,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      202,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
}
