/*
 * XREFs of UsbhGetInternalIoctlTag @ 0x1400254E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhGetInternalIoctlTag(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == 2229280 )
    return 1232023603LL;
  if ( a1 > 0x220424 )
  {
    if ( a1 > 0x22044F )
    {
      switch ( a1 )
      {
        case 0x220FB3u:
          return 1232023609LL;
        case 0x491404u:
          return 1232023857LL;
        case 0x491408u:
          return 1232023858LL;
        case 0x49140Fu:
          return 1232023859LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 0x22044Fu:
          return 1232023856LL;
        case 0x22042Cu:
          return 1232023652LL;
        case 0x220433u:
          return 1232023607LL;
        case 0x220437u:
          return 1232023608LL;
        case 0x22043Bu:
          return 1232023606LL;
      }
    }
    return a1;
  }
  if ( a1 == 2229284 )
    return 1232023602LL;
  switch ( a1 )
  {
    case 0x220003u:
      result = 1232023604LL;
      break;
    case 0x220007u:
      return 1232023609LL;
    case 0x22000Fu:
      result = 1232023601LL;
      break;
    case 0x220013u:
      result = 1232023605LL;
      break;
    case 0x220017u:
      result = 1232023649LL;
      break;
    case 0x22001Bu:
      result = 1232023600LL;
      break;
    case 0x22001Fu:
      result = 1232023650LL;
      break;
    case 0x220020u:
      result = 1232023651LL;
      break;
    case 0x220027u:
      result = 1232023653LL;
      break;
    case 0x22002Bu:
      result = 1232023654LL;
      break;
    default:
      return a1;
  }
  return result;
}
