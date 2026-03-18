/*
 * XREFs of ?NumPadScanCodeToHex@@YAHII@Z @ 0x140097908
 * Callers:
 *     xxxInternalToUnicode @ 0x140097BA0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumPadScanCodeToHex(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // eax

  if ( (unsigned int)(a1 - 71) <= 0xB )
  {
    v4 = aVkNumpad[(unsigned int)(a1 - 71)];
    if ( v4 == 255 )
      return 0xFFFFFFFFLL;
    return (unsigned int)(v4 - 96);
  }
  else
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(a1) + 14704) & 2) == 0 )
      return 0xFFFFFFFFLL;
    if ( (unsigned int)(a2 - 65) > 5 )
    {
      result = 0xFFFFFFFFLL;
      if ( (unsigned int)(a2 - 48) <= 9 )
        return (unsigned int)(a2 - 48);
    }
    else
    {
      return (unsigned int)(a2 - 55);
    }
  }
  return result;
}
