/*
 * XREFs of RtlUnicodeStringCatString @ 0x18015C7D8
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015C894 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1800D74C0 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(_WORD *a1)
{
  int v2; // r8d
  const wchar_t *v3; // r10
  __int16 v4; // bx
  __int64 v5; // r11
  __int16 v6; // dx
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = RtlUnicodeStringValidateDestWorker((__int64)a1, &v12, &v10, &v11);
  if ( v2 >= 0 )
  {
    v3 = L"\\";
    v4 = v11;
    v5 = 0x7FFFLL;
    v2 = 0;
    v6 = 0;
    v7 = v10 - v11;
    if ( v10 == v11 )
    {
LABEL_9:
      if ( *v3 )
        v2 = -2147483643;
    }
    else
    {
      v8 = v12 + 2 * v11 - (_QWORD)L"\\";
      while ( v5 )
      {
        if ( *v3 )
        {
          *(const wchar_t *)((char *)v3 + v8) = *v3;
          --v5;
          ++v3;
          ++v6;
          if ( --v7 )
            continue;
        }
        if ( v7 || !v5 )
          break;
        goto LABEL_9;
      }
    }
    *a1 = 2 * (v4 + v6);
  }
  return (unsigned int)v2;
}
