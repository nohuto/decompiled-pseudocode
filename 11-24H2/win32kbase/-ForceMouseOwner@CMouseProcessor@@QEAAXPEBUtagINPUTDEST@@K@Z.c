/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x14021CD28
 * Callers:
 *     ForceCapture @ 0x1402126F0 (ForceCapture.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x140127350 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14021E884 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  bool v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _BYTE v11[128]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      6,
      19,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids,
      a3);
  }
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v11, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3784), (const struct CInputDest *)v11);
    CInputDest::~CInputDest((CInputDest *)v11);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    CMouseProcessor::MouseOwner::Clear((CMouseProcessor *)((char *)this + 3784));
  }
}
