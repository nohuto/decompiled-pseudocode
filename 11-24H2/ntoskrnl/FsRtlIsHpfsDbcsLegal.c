/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x14070ADD0
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x14070ADD0 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x14070ACF0 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x14070ADD0 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r11
  __int64 v7; // r10
  char v8; // cl
  bool v9; // zf
  char *Buffer; // rax
  char *v11; // rax
  __m128i v12; // xmm1
  unsigned int i; // r8d
  _STRING FirstName; // [rsp+20h] [rbp-38h] BYREF
  _STRING RemainingName; // [rsp+30h] [rbp-28h] BYREF
  ANSI_STRING Path; // [rsp+40h] [rbp-18h] BYREF

  Length = DbcsName->Length;
  LOBYTE(v7) = 0;
  if ( !DbcsName->Length )
    return 0;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v8 = *DbcsName->Buffer;
      if ( v8 == 46 )
        return 1;
      v9 = v8 == 34;
    }
    else
    {
      if ( Length != 2 )
        goto LABEL_12;
      Buffer = DbcsName->Buffer;
      if ( *Buffer == 46 )
      {
        v9 = Buffer[1] == 46;
      }
      else
      {
        if ( *Buffer != 34 )
          goto LABEL_12;
        v9 = Buffer[1] == 34;
      }
    }
    if ( v9 )
      return 1;
  }
LABEL_12:
  v11 = DbcsName->Buffer;
  if ( *v11 != 92 )
    goto LABEL_16;
  if ( !LeadingBackslashPermissible )
    return 0;
  if ( Length <= 1u )
    return 1;
  --Length;
  DbcsName->Buffer = v11 + 1;
  --DbcsName->MaximumLength;
  DbcsName->Length = Length;
LABEL_16:
  if ( PathNamePermissible )
  {
    v12 = *(__m128i *)DbcsName;
    RemainingName = *DbcsName;
    FirstName = 0LL;
    while ( (unsigned __int16)_mm_cvtsi128_si32(v12) )
    {
      if ( *(_BYTE *)_mm_srli_si128(v12, 8).m128i_i8[0] == 92 )
        return 0;
      Path = (ANSI_STRING)v12;
      FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
      Path = FirstName;
      if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
        return 0;
      v12 = (__m128i)RemainingName;
    }
    return 1;
  }
  if ( Length <= 0xFFu )
  {
    for ( i = 0; i < Length; ++i )
    {
      v7 = (unsigned __int8)DbcsName->Buffer[i];
      if ( (unsigned __int8)v7 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v7) )
      {
        if ( i == Length - 1 )
          return 0;
        ++i;
      }
      else if ( (v7 & 0x80u) == 0LL
             && ((unsigned __int8)(WildCardsPermissible != 0 ? 10 : 2) & *((_BYTE *)qword_140013670 + v7)) == 0 )
      {
        return 0;
      }
    }
    if ( (_BYTE)v7 != 32 && (_BYTE)v7 != 46 )
      return (_BYTE)v7 != 34;
  }
  return 0;
}
