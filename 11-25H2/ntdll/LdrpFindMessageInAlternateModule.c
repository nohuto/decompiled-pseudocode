/*
 * XREFs of LdrpFindMessageInAlternateModule @ 0x18001FD40
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpFindMessageInAlternateModule(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  char *v9; // rax
  int v10; // ecx
  char *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a5 )
  {
    v8 = *a2;
    v9 = (char *)(a2 + 1);
    if ( 12 * v8 + 4 <= a3 )
    {
LABEL_6:
      while ( 1 )
      {
        v10 = v8;
        LODWORD(v8) = v8 - 1;
        if ( !v10 )
          break;
        if ( a4 >= *(_DWORD *)v9 && a4 <= *((_DWORD *)v9 + 1) )
          return 0LL;
        v9 += 12;
      }
      return 3221225737LL;
    }
    else
    {
      return 3221225595LL;
    }
  }
  else
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, &v11, 0LL);
    if ( (int)result >= 0 )
    {
      LODWORD(v8) = *(_DWORD *)v11;
      v9 = v11 + 4;
      goto LABEL_6;
    }
  }
  return result;
}
