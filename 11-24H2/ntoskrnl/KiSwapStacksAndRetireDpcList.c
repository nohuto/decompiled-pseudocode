/*
 * XREFs of KiSwapStacksAndRetireDpcList @ 0x1406B39C0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwapStacksAndRetireDpcList(__int64 a1, __int64 a2)
{
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)(a2 + 64) = &savedregs;
  return KxSwapStacksAndRetireDpcList();
}
