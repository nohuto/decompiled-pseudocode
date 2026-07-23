/*
 * XREFs of PfSnInitializePrefetcher @ 0x140C2EBFC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140745A38 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x140746AB0 (PfpCreateEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PfSnInitializePrefetcher()
{
  __int64 Pool2; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  stru_140E67178.Count = 1;
  qword_140E67160 = 0LL;
  qword_140E67158 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  stru_140E67178.Owner = 0LL;
  qword_140E67170 = &qword_140E67168;
  qword_140E67168 = &qword_140E67168;
  stru_140E67178.Event.Header.WaitListHead.Blink = &stru_140E67178.Event.Header.WaitListHead;
  stru_140E67178.Event.Header.WaitListHead.Flink = &stru_140E67178.Event.Header.WaitListHead;
  DestinationString = 0LL;
  stru_140E67178.Contention = 0;
  LOWORD(stru_140E67178.Event.Header.Lock) = 1;
  stru_140E67178.Event.Header.Size = 6;
  stru_140E67178.Event.Header.SignalState = 0;
  dword_140E671B4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent((__int64)&DestinationString, 1LL, (__int64)&qword_140E671B8);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140E671C8);
  qword_140E67258 = 0LL;
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
  qword_140E67288 = 0LL;
  return result;
}
