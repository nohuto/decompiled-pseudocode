/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x1800D6550
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800D60D0 (TppSimplepExecuteCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TpCallbackUnloadDllOnCompletion(__int64 a1, __int64 a2)
{
  if ( !a1 || (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a1 + 200) )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    *(_DWORD *)(a1 + 144) |= 0x80u;
    *(_QWORD *)(a1 + 200) = a2;
  }
}
