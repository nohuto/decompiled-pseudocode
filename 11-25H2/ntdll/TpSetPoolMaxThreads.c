/*
 * XREFs of TpSetPoolMaxThreads @ 0x1800FA0A0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x18015DD54 (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpSetPoolMaxThreads(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v4);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWPoolThreadMax(a1, v4);
  }
}
