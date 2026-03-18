/*
 * XREFs of TransferUrb_IsSecure @ 0x140021030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TransferUrb_IsSecure(__int64 a1)
{
  char result; // al

  if ( *(_WORD *)(a1 + 2) == 56 )
    return 0;
  switch ( *(_WORD *)(a1 + 2) )
  {
    case '9':
    case ':':
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
