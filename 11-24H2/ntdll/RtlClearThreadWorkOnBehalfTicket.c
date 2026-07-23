/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x1800DF150
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x180086B50 (TppCallbackPerformDeferredWork.c)
 *     TpWorkOnBehalfClearTicket @ 0x1800E6390 (TpWorkOnBehalfClearTicket.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 */

NTSTATUS RtlClearThreadWorkOnBehalfTicket()
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  ThreadInformation = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
  return result;
}
