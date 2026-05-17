/*
 * XREFs of TpAdjustBindingCount @ 0x1800BF960
 * Callers:
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800BF2F0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800BF640 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x1800BF8D0 (TpBindFileToDirect.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010CF24 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

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
      v5 = *(_QWORD *)(a1 + 56);
      v6 = v4;
      NtSetInformationWorkerFactory(v5, 3LL, &v6);
    }
  }
}
