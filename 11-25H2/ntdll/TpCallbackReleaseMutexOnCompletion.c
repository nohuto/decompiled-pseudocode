/*
 * XREFs of TpCallbackReleaseMutexOnCompletion @ 0x18015DBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TpCallbackReleaseMutexOnCompletion(__int64 a1, __int64 a2)
{
  if ( !a1 || (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_DWORD *)(a1 + 152) )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    *(_DWORD *)(a1 + 144) |= 2u;
    *(_DWORD *)(a1 + 152) = a2;
  }
}
