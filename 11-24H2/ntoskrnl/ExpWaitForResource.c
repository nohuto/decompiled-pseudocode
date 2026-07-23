/*
 * XREFs of ExpWaitForResource @ 0x14022CDD0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyRewaitBoost @ 0x14022E860 (ExpApplyRewaitBoost.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AA110 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWaitForResource(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  NTSTATUS result; // eax
  unsigned int v10; // eax
  signed __int8 v11; // al
  signed __int8 v12; // tt
  __int64 Pool2; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+A8h] [rbp+20h]

  __incgsdword(0x9068u);
  v6 = 0;
  v7 = 0;
  v8 = a1 + 17;
  v15 = a1 + 17;
  ++a1[17];
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v6;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v6);
    Timeout.QuadPart = ExpTimeout;
    ++v7;
    v10 = a1[21];
    v16 = v10;
    if ( v10 == -1 )
    {
      v10 = ExResourceTimeoutCount;
      v16 = ExResourceTimeoutCount;
    }
    if ( v10 )
    {
      if ( v7 > v10 )
      {
        _m_prefetchw(a1 + 20);
        v11 = *((_BYTE *)a1 + 80);
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange8((volatile signed __int8 *)a1 + 80, v11 | 1, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 1) == 0 )
        {
          v7 = 0;
          DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
          Pool2 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x6F546552u);
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
            *(_QWORD *)(Pool2 + 24) = Pool2;
            *(_QWORD *)Pool2 = 0LL;
            *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
            *(_QWORD *)(Pool2 + 40) = a1;
            *(_DWORD *)(Pool2 + 48) = *v8;
            *(_DWORD *)(Pool2 + 52) = v16;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
          }
          __debugbreak();
        }
      }
    }
    ExpApplyRewaitBoost(a1);
  }
  return result;
}
