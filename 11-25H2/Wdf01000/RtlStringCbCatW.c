/*
 * XREFs of RtlStringCbCatW @ 0x1400AAF3C
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x140076444 (USBDInternal_BuildServicePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCatW(wchar_t *pszDest, unsigned __int64 cbDest, const wchar_t *a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  wchar_t *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // r9
  wchar_t *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // r9
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v3 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return 3221225485LL;
  v4 = cbDest >> 1;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = v3 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &pszDest[v7];
    v9 = v3 - v7;
    if ( v3 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"\\Parameters" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
