/*
 * XREFs of KiOpFetchBytes @ 0x1403F5688
 * Callers:
 *     KiOpDecode @ 0x1403F5100 (KiOpDecode.c)
 *     KiOpDecodeModRM @ 0x1403F559C (KiOpDecodeModRM.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x1403F56D0 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = KiOpFetchNextByte(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}
