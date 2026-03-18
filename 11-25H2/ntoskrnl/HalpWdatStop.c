/*
 * XREFs of HalpWdatStop @ 0x14055D100
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x1404C60CC (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatStop(__int64 a1)
{
  __int64 result; // rax

  result = WdInstrExecuteAction(a1 + 48, *(_DWORD *)(a1 + 44), 11, 0);
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
