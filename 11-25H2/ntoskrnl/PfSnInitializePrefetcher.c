/*
 * XREFs of PfSnInitializePrefetcher @ 0x140C1B9DC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x14073B728 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x14073C7B0 (PfpCreateEvent.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PfSnInitializePrefetcher()
{
  ULONG_PTR Pool2; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  stru_140E66D68.Count = 1;
  qword_140E66D50 = 0LL;
  qword_140E66D48 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  stru_140E66D68.Owner = 0LL;
  qword_140E66D60 = &qword_140E66D58;
  qword_140E66D58 = &qword_140E66D58;
  stru_140E66D68.Event.Header.WaitListHead.Blink = &stru_140E66D68.Event.Header.WaitListHead;
  stru_140E66D68.Event.Header.WaitListHead.Flink = &stru_140E66D68.Event.Header.WaitListHead;
  DestinationString = 0LL;
  stru_140E66D68.Contention = 0;
  LOWORD(stru_140E66D68.Event.Header.Lock) = 1;
  stru_140E66D68.Event.Header.Size = 6;
  stru_140E66D68.Event.Header.SignalState = 0;
  dword_140E66DA4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent((__int64)&DestinationString, 1LL, (__int64)&qword_140E66DA8);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140E66DB8);
  qword_140E66E48 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0xA0uLL, 0x66506343uLL);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_BYTE *)Pool2 = 8;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 60) = 0;
    *(_WORD *)(Pool2 + 56) = 0;
    *(_QWORD *)(Pool2 + 88) = PfSnTracingStateDpcRoutine;
    *(_DWORD *)(Pool2 + 64) = 275;
    *(_QWORD *)(Pool2 + 96) = Pool2;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 144) = PfSnTracingStateExWorkerRoutine;
    *(_QWORD *)(Pool2 + 152) = Pool2;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    KiSetTimerEx(Pool2, -6000000000LL, 0, 0, Pool2 + 64);
  }
  Parent.Root = 0LL;
  *(_OWORD *)&Parent.0 = 0LL;
  result = 0LL;
  Tree.Min = 0LL;
  qword_140E66E78 = 0LL;
  return result;
}
