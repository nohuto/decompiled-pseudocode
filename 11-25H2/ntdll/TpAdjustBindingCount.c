/*
 * XREFs of TpAdjustBindingCount @ 0x18003B580
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18003B260 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x18003B4F0 (TpBindFileToDirect.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x18010E580 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010F914 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
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
