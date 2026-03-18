/*
 * XREFs of PopPepStartComponentActivatingActivity @ 0x140316EC0
 * Callers:
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepStartActivity @ 0x140319BA0 (PopPepStartActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepStartComponentActivatingActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = 0;
  if ( a2 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 8);
    return 1;
  }
  return result;
}
