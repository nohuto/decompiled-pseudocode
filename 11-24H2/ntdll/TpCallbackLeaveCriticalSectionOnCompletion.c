/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x1801106F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TpCallbackLeaveCriticalSectionOnCompletion(__int64 a1, __int64 a2)
{
  if ( a1 && a2 && !*(_QWORD *)(a1 + 192) )
  {
    *(_DWORD *)(a1 + 144) |= 1u;
    *(_QWORD *)(a1 + 192) = a2;
  }
  else
  {
    TppRaiseInvalidParameter();
  }
}
