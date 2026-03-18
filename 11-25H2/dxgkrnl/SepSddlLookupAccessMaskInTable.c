/*
 * XREFs of SepSddlLookupAccessMaskInTable @ 0x14022CFD8
 * Callers:
 *     SepSddlGetAclForString @ 0x14022CBA0 (SepSddlGetAclForString.c)
 * Callees:
 *     _wcsnicmp_0 @ 0x140065352 (_wcsnicmp_0.c)
 */

__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *Str1, _DWORD *a2, _QWORD *a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 8; ++i )
  {
    if ( !wcsnicmp_0(Str1, (&off_14015B6A0)[2 * i], *((unsigned int *)&off_14015B6A0 + 4 * i + 2)) )
    {
      result = 1LL;
      *a2 = *((_DWORD *)&off_14015B6A0 + 4 * i + 3);
      *a3 = &Str1[*((unsigned int *)&off_14015B6A0 + 4 * i + 2)];
      return result;
    }
  }
  *a2 = 0;
  result = 0LL;
  *a3 = Str1;
  return result;
}
