/*
 * XREFs of TpAdjustBindingCount @ 0x1800B7720
 * Callers:
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800B70B0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800B7400 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 *     RtlpTpIoDllProcessUnloads @ 0x180107D74 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 > 0 )
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
      goto LABEL_5;
    }
    if ( v3 > 0 )
    {
      v4 = 1;
LABEL_5:
      v5 = *(void **)(a1 + 56);
      WorkerFactoryInformation = v4;
      NtSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
    }
  }
}
