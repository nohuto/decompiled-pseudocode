/*
 * XREFs of rimOnPnpRemoveCompleteInUserCrit @ 0x1400C6FC8
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall rimOnPnpRemoveCompleteInUserCrit(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  bool v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx

  v2 = (__int64)a1 + 760;
  v5 = 1;
  RIMLockExclusive((__int64)a1 + 760);
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
    rimEndAllActiveContactsWorker(a1, *(_QWORD *)(a2 + 456), 0LL);
  v6 = *(_DWORD *)(a2 + 168);
  if ( (v6 & 0x2000) == 0 && (v6 & 0x20) == 0 && *(_DWORD *)(a2 + 48) != 3 )
  {
    v7 = *(_DWORD *)(a2 + 172);
    if ( (v7 & 8) != 0 || *(_QWORD *)(a2 + 176) || (v7 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 184) |= 1u;
      v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          40,
          (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
          a2);
      }
      v5 = 0;
    }
  }
  RIMUnlockExclusive(v2);
  return v5;
}
