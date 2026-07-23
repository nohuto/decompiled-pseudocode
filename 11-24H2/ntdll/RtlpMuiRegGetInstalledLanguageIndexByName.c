/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 *     RtlpGetAlternateCodePage @ 0x1800C8638 (RtlpGetAlternateCodePage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x18013D5EC (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpGetInstalledLanguageType @ 0x18013E128 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180149744 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, wchar_t *a2, char a3, _WORD *a4)
{
  char v4; // r12
  _WORD *v5; // r10
  char v6; // r9
  unsigned int InstalledLanguageIndexByLangId; // r15d
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // edi
  __int64 i; // rbp
  const wchar_t *v14; // rcx
  int j; // ecx
  _WORD *v16; // rdx
  size_t v18; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-48h] BYREF
  DWORD Lcid; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+80h] [rbp+18h]
  _WORD *v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v4 = 0;
  Lcid = 0;
  v5 = a4;
  v6 = a3;
  InstalledLanguageIndexByLangId = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( *a2 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      v12 = 0;
      for ( i = 0LL; ; i += 2LL )
      {
        if ( v12 >= *(unsigned __int16 *)(v11 + 6) )
        {
          v6 = v21;
          v5 = v22;
          goto LABEL_19;
        }
        v14 = (const wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + i));
        if ( v14 == a2 || !wcsicmp(v14, a2) )
          break;
        ++v12;
      }
      v6 = v21;
      v5 = v22;
      if ( v12 < 0 )
        goto LABEL_19;
    }
    else
    {
LABEL_19:
      LOWORD(v12) = -1;
    }
    if ( (v12 & 0x8000u) == 0 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v10 + 6); ++j )
      {
        v16 = (_WORD *)(*(_QWORD *)(v10 + 16) + 28LL * j);
        if ( v16[3] == (_WORD)v12 )
        {
          if ( (*v16 & 0x1020) == 0x20 )
          {
            if ( v5 )
            {
              *v5 = j;
              return 0LL;
            }
          }
          else if ( (*v16 & 0x1000) != 0 )
          {
            v4 = 1;
          }
        }
      }
      v6 = v21;
    }
  }
  if ( v6 )
  {
    *(_DWORD *)(&String.MaximumLength + 1) = 0;
    String.Buffer = a2;
    v18 = 2 * wcslen(a2);
    if ( v18 >= 0xFFFE )
      LOWORD(v18) = -4;
    String.Length = v18;
    String.MaximumLength = v18 + 2;
    if ( RtlCultureNameToLCID(&String, &Lcid) && Lcid != 4096 )
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, Lcid, 0, v22);
  }
  if ( v4 && InstalledLanguageIndexByLangId == -1073741772 )
    return (unsigned int)-1073741637;
  return InstalledLanguageIndexByLangId;
}
