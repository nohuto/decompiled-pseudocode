/*
 * XREFs of TppRaiseHandleStatus @ 0x1800870A8
 * Callers:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TppWaitTimerExpiration @ 0x180086C50 (TppWaitTimerExpiration.c)
 *     TppSetupNextWait @ 0x180086FB0 (TppSetupNextWait.c)
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseHandleStatus(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  void (__fastcall *v6)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, unsigned int); // r8
  __int64 v7; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+28h] [rbp-59h] BYREF

  v4 = a1;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( a3 )
  {
    v6 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, unsigned int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v6 == RtlpTpWaitCallback && (v7 = *(_QWORD *)(a3 + 88), *(_QWORD *)(v7 + 32)) )
      ExceptionRecord.ExceptionInformation[4] = *(_QWORD *)(v7 + 32);
    else
      ExceptionRecord.ExceptionInformation[4] = (unsigned __int64)v6;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[0] = v4;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
