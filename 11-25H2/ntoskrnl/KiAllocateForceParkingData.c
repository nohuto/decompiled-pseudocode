/*
 * XREFs of KiAllocateForceParkingData @ 0x1405C3FF8
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B26F4 (KiCompleteBootProcessorContextInitialization.c)
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateForceParkingData(__int64 a1)
{
  __int64 Pool3; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  Pool3 = ExAllocatePool3(0x40uLL, 1);
  v3 = Pool3;
  if ( !Pool3 )
    return 3221225626LL;
  *(_DWORD *)Pool3 = 275;
  *(_QWORD *)(Pool3 + 24) = &KiForceParkDutyCycleDpcCallback;
  *(_QWORD *)(Pool3 + 32) = a1;
  *(_QWORD *)(Pool3 + 56) = 0LL;
  *(_QWORD *)(Pool3 + 16) = 0LL;
  if ( !*(_QWORD *)(Pool3 + 56) )
    *(_WORD *)(Pool3 + 2) = *(_DWORD *)(a1 + 36) + 2048;
  *(_QWORD *)(Pool3 + 336) = 0LL;
  *(_WORD *)(Pool3 + 66) = 0;
  KiInitializeTimer2(Pool3 + 64, (__int64)KiStartForceParkSingleDutyCycleTimerCallback, a1, 0);
  *(_WORD *)(v3 + 202) = 0;
  KiInitializeTimer2(v3 + 200, (__int64)KiStopForceParkSingleDutyCycleTimerCallback, a1, 0);
  result = 0LL;
  *(_QWORD *)(a1 + 34544) = v3;
  return result;
}
