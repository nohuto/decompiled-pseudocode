/*
 * XREFs of KiSwapStacksAndRetireDpcList @ 0x1406A7750
 * Callers:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwapStacksAndRetireDpcList(__int64 a1, __int64 a2)
{
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)(a2 + 64) = &savedregs;
  return KxSwapStacksAndRetireDpcList();
}
