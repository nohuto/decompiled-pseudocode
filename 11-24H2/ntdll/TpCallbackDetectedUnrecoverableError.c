/*
 * XREFs of TpCallbackDetectedUnrecoverableError @ 0x18015C610
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackDetectedUnrecoverableError(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_BYTE *)(a1 + 76) |= 4u;
    result = 0LL;
    *(_DWORD *)(a1 + 104) = 220;
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  return result;
}
