/*
 * XREFs of ExpWorkQueueManagerInitialize @ 0x1407C066C
 * Callers:
 *     ExpPartitionInitialize @ 0x1407C02D4 (ExpPartitionInitialize.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExpWorkQueueManagerInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  memset_0((void *)(a1 + 16), 0, 0x108uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 16), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 40), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
  KeInitializeTimer2(a1 + 128);
  KeQueryNodeActiveAffinity(**(_WORD **)(a1 + 8), &Affinity, 0LL);
  result = __popcnt(Affinity.Mask);
  *(_WORD *)(a1 + 276) = 0;
  if ( (_DWORD)result )
  {
    result = KeSelectIdealProcessor((__int64)&Affinity, (_WORD *)(a1 + 276), 0LL, 0);
    *(_WORD *)(a1 + 276) = result;
  }
  return result;
}
