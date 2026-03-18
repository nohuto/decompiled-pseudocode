/*
 * XREFs of TransferUrb_GetBufferLengthPtr @ 0x1400243F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TransferUrb_GetBufferLengthPtr(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 2) == 56 )
    return a1 + 36;
  switch ( *(_WORD *)(a1 + 2) )
  {
    case '9':
    case ':':
      result = a1 + 52;
      break;
    default:
      return a1 + 36;
  }
  return result;
}
