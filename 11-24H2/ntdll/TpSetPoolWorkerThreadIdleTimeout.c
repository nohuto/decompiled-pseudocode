/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x1800ABE90
 * Callers:
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v3);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
