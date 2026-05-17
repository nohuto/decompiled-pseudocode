/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18010C7B0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
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
