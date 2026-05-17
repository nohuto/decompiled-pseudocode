/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x1800E0830
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x1800E5140 (TppCallbackPerformDeferredWork.c)
 *     TpWorkOnBehalfClearTicket @ 0x1800EBF70 (TpWorkOnBehalfClearTicket.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

__int64 RtlClearThreadWorkOnBehalfTicket()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, &v1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = v1;
  return result;
}
