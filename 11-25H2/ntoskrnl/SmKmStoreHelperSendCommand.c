/*
 * XREFs of SmKmStoreHelperSendCommand @ 0x14020CD34
 * Callers:
 *     SmKmStoreHelperCleanup @ 0x1403960C8 (SmKmStoreHelperCleanup.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC (SmKmStoreHelperCheckWaitCommand.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

__int64 __fastcall SmKmStoreHelperSendCommand(__int64 a1, __int16 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // edi

  v7 = SmKmStoreHelperCheckWaitCommand(a1, a4);
  if ( v7 != -1073741650 )
  {
    v7 = 0;
    *(_WORD *)(a1 + 58) = a2;
    if ( a3 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 32);
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(a3 + 48);
    }
    KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  }
  return v7;
}
