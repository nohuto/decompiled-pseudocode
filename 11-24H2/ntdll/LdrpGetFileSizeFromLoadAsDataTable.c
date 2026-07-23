/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180079B70
 * Callers:
 *     LdrpGetImageSize @ 0x180079340 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180079C04 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  _QWORD *v4; // rax

  if ( !a1 )
    return 0LL;
  v2 = 0LL;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      v4 = (char *)LoadAsDataTable + 48 * --v3;
      if ( *v4 == a1 )
      {
        v2 = v4[2];
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
