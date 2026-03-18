/*
 * XREFs of SepSddlGetSidForString @ 0x14023376C
 * Callers:
 *     SepSddlGetAclForString @ 0x140233400 (SepSddlGetAclForString.c)
 * Callees:
 *     _wcsnicmp_0 @ 0x140064F72 (_wcsnicmp_0.c)
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *Str1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int i; // edi
  bool v8; // zf
  __int64 result; // rax

  v3 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xE )
    {
      result = 3221225587LL;
      goto LABEL_10;
    }
    if ( !wcsnicmp_0(Str1, (const wchar_t *)&unk_14015F180 + 12 * i + 6, *((unsigned int *)&unk_14015F180 + 6 * i + 5)) )
      break;
  }
  v8 = *((_DWORD *)&unk_14015F180 + 6 * i + 2) == 1;
  *a3 = &Str1[*((unsigned int *)&unk_14015F180 + 6 * i + 5)];
  if ( !v8 || IoIsWdmVersionAvailable(1u, 0x20u) )
  {
    _mm_lfence();
    v3 = *(__int64 *)((char *)&SeExports->SeCreateTokenPrivilege + *((_QWORD *)&unk_14015F180 + 3 * i));
  }
  result = 0LL;
LABEL_10:
  *a2 = v3;
  return result;
}
