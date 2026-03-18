/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D4370
 * Callers:
 *     NtUserGetPointerInfoList @ 0x14016D3B0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1400D4750 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  struct _LIST_ENTRY *v6; // rbx
  int v7; // r14d
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  __int64 v11; // rsi
  char v12; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  char v19; // bl
  char v20; // di
  __int64 v21; // rax
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  v6 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  v7 = a3;
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v6, v7)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0
    && (v11 = *((_QWORD *)ThreadPointerHookData + 3)) != 0 )
  {
    v12 = 1;
    if ( a4 != 1 && a4 != *((_DWORD *)ThreadPointerHookData + 5) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          4,
          329,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      v18 = 1629;
      goto LABEL_22;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerData(this, *((_QWORD *)ThreadPointerHookData + 3), a4, a5, a6) )
      return 1LL;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69400),
        2,
        4,
        330,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v11);
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        *(_QWORD *)(v21 + 69400),
        2u,
        4u,
        0x148u,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v7);
    }
  }
  v18 = 87;
LABEL_22:
  UserSetLastError(v18);
  return 0LL;
}
