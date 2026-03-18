/*
 * XREFs of SepSddlGetSidForString @ 0x1400D9EA0
 * Callers:
 *     SepSddlGetAclForString @ 0x1400D9B30 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *String, void **SID, wchar_t **End)
{
  void *v3; // rbx
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
    if ( !_wcsnicmp(String, SidLookup[i].Key, SidLookup[i].KeyLen) )
      break;
  }
  v8 = SidLookup[i].OsVer == WINXP_OR_LATER;
  *End = &String[SidLookup[i].KeyLen];
  if ( !v8 || IoIsWdmVersionAvailable(1u, 0x20u) )
  {
    _mm_lfence();
    v3 = *(void **)((char *)&SeExports->SeCreateTokenPrivilege + SidLookup[i].ExportSidFieldOffset);
  }
  result = 0LL;
LABEL_10:
  *SID = v3;
  return result;
}
