/*
 * XREFs of RtlCultureNameToLCID @ 0x140A91310
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1404C0FC4 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14081B6D8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14081B9F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14081BE68 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14081C62C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x14081CAE0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14081D030 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x14081D71C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14081DC5C (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x1404B9498 (DownLevelLanguageNameToLangID.c)
 *     __report_rangecheckfailure @ 0x1404F290C (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  size_t Length; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( String )
  {
    if ( Lcid )
    {
      Length = String->Length;
      if ( (_WORD)Length )
      {
        Buffer = String->Buffer;
        if ( Buffer )
        {
          if ( (unsigned int)(Length + 2) <= 0x55 )
          {
            v6 = String->Length;
            memmove(v10, Buffer, Length);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *Lcid = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
