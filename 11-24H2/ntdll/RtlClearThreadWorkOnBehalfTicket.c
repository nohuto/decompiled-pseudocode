/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x1800E3B80
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18006A460 (TppCallbackPerformDeferredWork.c)
 *     TpWorkOnBehalfClearTicket @ 0x1800EAB20 (TpWorkOnBehalfClearTicket.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
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
