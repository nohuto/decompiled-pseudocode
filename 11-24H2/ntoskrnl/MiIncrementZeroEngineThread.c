/*
 * XREFs of MiIncrementZeroEngineThread @ 0x1404137CC
 * Callers:
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall MiIncrementZeroEngineThread(__int64 a1)
{
  LONG result; // eax
  __int64 v2; // rdx

  result = *(_DWORD *)(a1 + 384);
  if ( (result & 2) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 336);
    *(_DWORD *)(a1 + 384) &= ~2u;
    ++*(_DWORD *)(v2 + 12);
    return KeSetEvent((PRKEVENT)(a1 + 392), 0, 0);
  }
  return result;
}
