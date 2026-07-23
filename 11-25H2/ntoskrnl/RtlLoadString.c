/*
 * XREFs of RtlLoadString @ 0x14076FC90
 * Callers:
 *     <none>
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x1404B9498 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  __int64 v8; // r12
  char v10; // si
  unsigned __int16 v12; // ax
  NTSTATUS v13; // edx
  unsigned __int16 v14; // cx
  int v15; // ebx
  USHORT v16; // r8
  unsigned __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  int v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  PCWSTR *v21; // [rsp+60h] [rbp-58h]
  _QWORD v22[4]; // [rsp+68h] [rbp-50h] BYREF

  v8 = (unsigned __int16)StringId;
  v21 = ReturnString;
  v20 = 0LL;
  v19 = 0LL;
  v10 = Flags & 1;
  if ( DllHandle && ReturnString && (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( v10 && (ReturnLanguageName || ReturnLanguageLen) )
      return -1073741637;
    if ( (unsigned int)StringLanguage > 0xFFFF )
    {
      if ( *StringLanguage )
      {
        v12 = DownLevelLanguageNameToLangID(StringLanguage, 2);
        LODWORD(StringLanguage) = v12;
        v18 = v12;
        if ( !v12 )
          return -1073741811;
      }
      else
      {
        LODWORD(StringLanguage) = 0;
        v18 = 0;
      }
    }
    v22[0] = 6LL;
    v22[1] = ((unsigned int)v8 >> 4) + 1;
    v22[2] = (unsigned int)StringLanguage;
    v22[3] = v8;
    v17 = 0LL;
    if ( v10 )
    {
      v13 = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v22, 4, 1, (__int64)&v20);
      if ( v13 < 0 )
        return v13;
      v13 = LdrpAccessResourceData(DllHandle);
    }
    else
    {
      v13 = LdrResSearchResource(
              (_DWORD)DllHandle,
              (unsigned int)v22,
              4,
              1,
              (__int64)&v19,
              (__int64)&v17,
              (__int64)ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      if ( v13 >= 0 && v17 > 0xFFFF )
        v13 = -1073741701;
    }
    if ( v13 >= 0 && v19 )
    {
      v14 = 0;
      v15 = v8 & 0xF;
      v17 >>= 1;
      do
      {
        v16 = *(_WORD *)(v19 + 2LL * v14);
        v14 += v16 + 1;
        if ( !v10 && v14 > v17 )
          return -1073741701;
        --v15;
      }
      while ( v15 >= 0 );
      if ( v14 && v16 )
        v14 -= v16;
      *v21 = (PCWSTR)(v19 + 2LL * v14);
      if ( ReturnStringLen )
        *ReturnStringLen = v16;
    }
    return v13;
  }
  return -1073741811;
}
