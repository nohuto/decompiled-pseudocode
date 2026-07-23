/*
 * XREFs of GetValueType @ 0x140797274
 * Callers:
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

__int64 __fastcall GetValueType(wchar_t *Str1, _QWORD *a2, _WORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*Str1 || !Str1[1] )
    return 1336;
  if ( wcsnicmp(Str1, L"TI", 2uLL) )
  {
    if ( !wcsnicmp(Str1, L"TU", 2uLL) )
    {
      *a3 = 2;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TD", 2uLL) )
    {
      *a3 = 5;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TS", 2uLL) )
    {
      *a3 = 3;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TX", 2uLL) )
    {
      *a3 = 16;
      goto LABEL_15;
    }
    if ( !wcsnicmp(Str1, L"TB", 2uLL) )
    {
      *a3 = 6;
      goto LABEL_15;
    }
    return 1336;
  }
  *a3 = 1;
LABEL_15:
  *a2 = Str1 + 2;
  return v3;
}
