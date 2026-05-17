/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180063F90
 * Callers:
 *     LdrpGetImageSize @ 0x180063760 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180064024 (LdrpInitMuiCrits.c)
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
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      v4 = (_QWORD *)(LoadAsDataTable + 48LL * --v3);
      if ( *v4 == a1 )
      {
        v2 = v4[2];
        break;
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v2;
}
