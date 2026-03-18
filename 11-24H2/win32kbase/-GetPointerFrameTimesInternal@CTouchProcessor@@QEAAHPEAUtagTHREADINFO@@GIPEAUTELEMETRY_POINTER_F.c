/*
 * XREFs of ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D4090
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x14016D2C0 (NtUserGetPointerFrameTimes.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D5020 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct TELEMETRY_POINTER_FRAME_TIMES *a5)
{
  struct _LIST_ENTRY *v5; // rdi
  int v6; // esi
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v10; // rdx
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  char v18; // di
  __int64 v19; // rax

  v5 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  v6 = a3;
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v5, v6)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0
    && (v10 = *((_QWORD *)ThreadPointerHookData + 3)) != 0 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataTimes(this, v10, a4, a5) )
      return 1LL;
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        4,
        327,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  else
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        *(_QWORD *)(v19 + 69400),
        2u,
        4u,
        0x146u,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v6);
    }
  }
  UserSetLastError(87);
  return 0LL;
}
