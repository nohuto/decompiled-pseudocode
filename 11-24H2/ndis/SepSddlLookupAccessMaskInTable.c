/*
 * XREFs of SepSddlLookupAccessMaskInTable @ 0x14014D6B4
 * Callers:
 *     SepSddlGetAclForString @ 0x14014D270 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *Str1, _DWORD *a2, _QWORD *a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 8; ++i )
  {
    if ( !_wcsnicmp(Str1, (&off_14011A880)[2 * i], *((unsigned int *)&off_14011A880 + 4 * i + 2)) )
    {
      result = 1LL;
      *a2 = *((_DWORD *)&off_14011A880 + 4 * i + 3);
      *a3 = &Str1[*((unsigned int *)&off_14011A880 + 4 * i + 2)];
      return result;
    }
  }
  *a2 = 0;
  result = 0LL;
  *a3 = Str1;
  return result;
}
