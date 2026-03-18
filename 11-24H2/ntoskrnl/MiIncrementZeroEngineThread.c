/*
 * XREFs of MiIncrementZeroEngineThread @ 0x1403C7B8C
 * Callers:
 *     MiWakeZeroingThreads @ 0x1403C7310 (MiWakeZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x1403C73C8 (MiAddZeroingThreads.c)
 *     MiInsertNewZeroThread @ 0x14068F930 (MiInsertNewZeroThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
