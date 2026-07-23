/*
 * XREFs of KiOpDecodeModRM @ 0x1403F559C
 * Callers:
 *     KiOpDecode @ 0x1403F5100 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchBytes @ 0x1403F5688 (KiOpFetchBytes.c)
 *     KiOpFetchNextByte @ 0x1403F56D0 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpDecodeModRM(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 result; // rax
  char v8; // al
  int v9; // esi
  char *i; // rdi
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 80) == 0;
  v5 = (_BYTE *)(a1 + 65);
  v11 = 0;
  if ( v4 )
  {
    result = KiOpFetchNextByte(a1, a1 + 65);
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*v5 & 0xC0) == 0xC0 || (*v5 & 7) != 4 || (result = KiOpFetchNextByte(a1, a1 + 66), (int)result >= 0) )
  {
    v8 = *v5 >> 6;
    if ( !v8 && (*v5 & 7) == 5 || v8 == 2 )
    {
      result = KiOpFetchBytes(a1, 4LL, a1 + 68, a4);
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
    if ( v8 != 1 )
      return 0LL;
    v9 = 1;
    for ( i = &v11; ; ++i )
    {
      result = KiOpFetchNextByte(a1, i);
      if ( (int)result < 0 )
        break;
      if ( !--v9 )
      {
        *(_DWORD *)(a1 + 68) = v11;
        return 0LL;
      }
    }
  }
  return result;
}
