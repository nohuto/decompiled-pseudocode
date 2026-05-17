/*
 * XREFs of TpSetPoolMinThreads @ 0x180107080
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x18015C884 (TppETWPoolThreadMin.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    v3 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v6);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
    {
      if ( v3 >= 0 )
        TppETWPoolThreadMin(a1, v6);
    }
    return (unsigned int)v3;
  }
}
