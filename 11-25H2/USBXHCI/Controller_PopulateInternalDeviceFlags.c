/*
 * XREFs of Controller_PopulateInternalDeviceFlags @ 0x140077BD4
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall Controller_PopulateInternalDeviceFlags(__int64 a1)
{
  __int16 result; // ax

  *(_QWORD *)(a1 + 752) = 0LL;
  result = *(_WORD *)(a1 + 648);
  switch ( result )
  {
    case 7027:
      result = *(_WORD *)(a1 + 652);
      if ( result == 4105 )
      {
        *(_QWORD *)(a1 + 752) = 2LL;
      }
      else if ( result == 4352 && *(_BYTE *)(a1 + 656) == 16 )
      {
        *(_QWORD *)(a1 + 752) = 1LL;
      }
      break;
    case 7023:
      result = 28707;
      if ( *(_WORD *)(a1 + 652) == 28707 )
        *(_QWORD *)(a1 + 752) = 12LL;
      break;
    case 6945:
      result = *(_WORD *)(a1 + 652) - 4160;
      if ( (unsigned __int16)result <= 2u )
        *(_QWORD *)(a1 + 752) = 16LL;
      break;
  }
  return result;
}
