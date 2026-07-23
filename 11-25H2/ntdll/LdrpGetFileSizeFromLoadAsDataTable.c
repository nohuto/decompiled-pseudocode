/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0
 * Callers:
 *     LdrpGetImageSize @ 0x18001F3C0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
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
