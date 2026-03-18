/*
 * XREFs of GreDecQuotaCount @ 0x140062B60
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14006233C (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 */

void __fastcall GreDecQuotaCount(__int64 a1)
{
  HSEMAPHORE v2; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v2);
  --*(_DWORD *)(a1 + 60);
  SEMOBJ<20>::vUnlock(&v2);
}
