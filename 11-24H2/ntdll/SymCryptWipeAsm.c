/*
 * XREFs of SymCryptWipeAsm @ 0x180131590
 * Callers:
 *     A_SHAFinal @ 0x180119AF0 (A_SHAFinal.c)
 *     A_SHAInit @ 0x180119BF0 (A_SHAInit.c)
 *     A_SHAUpdate @ 0x180119CE0 (A_SHAUpdate.c)
 *     MD5Init @ 0x180119F20 (MD5Init.c)
 *     MD5Update @ 0x180119FB0 (MD5Update.c)
 *     SymCryptMd5Result @ 0x180158E30 (SymCryptMd5Result.c)
 *     SymCryptSha1Result @ 0x18015A100 (SymCryptSha1Result.c)
 *     SymCryptSha256Result @ 0x18015B604 (SymCryptSha256Result.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x18015B808 (SymCryptHashCommonPaddingMd4Style.c)
 *     MD4Init @ 0x18015BB40 (MD4Init.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x18015BCA0 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     ScRsa32Compat_Md5ExportAndWipe @ 0x18015BCF4 (ScRsa32Compat_Md5ExportAndWipe.c)
 *     SymCryptMd4Result @ 0x180161720 (SymCryptMd4Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptWipeAsm(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  unsigned __int64 i; // rdx
  unsigned int v4; // edx
  __int64 result; // rax

  if ( a2 < 0x10 )
  {
    result = 0LL;
    if ( (unsigned int)a2 < 8 )
    {
      if ( (unsigned int)a2 < 4 )
      {
        if ( (unsigned int)a2 < 2 )
        {
          if ( (_DWORD)a2 )
            *(_BYTE *)a1 = 0;
        }
        else
        {
          *(_WORD *)a1 = 0;
          *(_WORD *)(a1 + a2 - 2) = 0;
        }
      }
      else
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + a2 - 4) = 0;
      }
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + a2 - 8) = 0LL;
    }
  }
  else if ( (a1 & 0xF) != 0
         && (*(_QWORD *)a1 = 0LL,
             *(_QWORD *)(a1 + 8) = 0LL,
             result = -(int)a1 & 0xF,
             a1 += result,
             a2 -= result,
             a2 < 0x10) )
  {
    result = 0LL;
    *(_QWORD *)(a1 + a2 - 16) = 0LL;
    *(_QWORD *)(a1 + a2 - 8) = 0LL;
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    if ( (a2 & 0x10) != 0 )
      a1 += 16LL;
    v2 = a2 < 0x20;
    for ( i = a2 - 32; !v2; i -= 32LL )
    {
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      a1 += 32LL;
      v2 = i < 0x20;
    }
    v4 = i & 0xF;
    if ( v4 )
    {
      result = 0LL;
      *(_QWORD *)(a1 + v4 - 16) = 0LL;
      *(_QWORD *)(a1 + v4 - 8) = 0LL;
    }
  }
  return result;
}
