/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x1800696B0
 * Callers:
 *     TppSimplepExecuteCallback @ 0x180069230 (TppSimplepExecuteCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackUnloadDllOnCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a1 + 200) )
    return TppRaiseInvalidParameter(a1);
  *(_DWORD *)(a1 + 144) |= 0x80u;
  *(_QWORD *)(a1 + 200) = a2;
  return result;
}
