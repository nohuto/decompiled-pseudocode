/*
 * XREFs of ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x140016A30
 * Callers:
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x140016600 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwGdiHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != 4 )
  {
    if ( a1 == 5 )
    {
      return 5LL;
    }
    else if ( a1 == 1 )
    {
      return 1LL;
    }
    else
    {
      switch ( a1 )
      {
        case 0u:
          result = 0LL;
          break;
        case 2u:
          result = 2LL;
          break;
        case 3u:
          result = 3LL;
          break;
        case 6u:
          result = 6LL;
          break;
        case 7u:
          result = 7LL;
          break;
        case 8u:
          result = 8LL;
          break;
        case 9u:
          result = 9LL;
          break;
        case 0xAu:
          result = 10LL;
          break;
        case 0xBu:
          result = 11LL;
          break;
        case 0xCu:
          result = 12LL;
          break;
        case 0xDu:
          result = 13LL;
          break;
        case 0xEu:
          result = 14LL;
          break;
        case 0xFu:
          result = 15LL;
          break;
        case 0x10u:
          result = 16LL;
          break;
        case 0x11u:
          result = 17LL;
          break;
        case 0x12u:
          result = 18LL;
          break;
        case 0x13u:
          result = 19LL;
          break;
        case 0x14u:
          result = 20LL;
          break;
        case 0x15u:
          result = 21LL;
          break;
        case 0x16u:
          result = 22LL;
          break;
        case 0x17u:
          result = 23LL;
          break;
        case 0x18u:
          result = 24LL;
          break;
        case 0x19u:
          result = 25LL;
          break;
        case 0x1Au:
          result = 26LL;
          break;
        case 0x1Bu:
          result = 27LL;
          break;
        case 0x1Cu:
          result = 28LL;
          break;
        case 0x1Du:
          result = 29LL;
          break;
        case 0x1Eu:
          result = 30LL;
          break;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
    }
  }
  return result;
}
