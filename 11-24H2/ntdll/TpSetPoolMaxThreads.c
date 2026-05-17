/*
 * XREFs of TpSetPoolMaxThreads @ 0x1800ABE00
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800EDE60 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x18015C7F4 (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
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
