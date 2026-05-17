/*
 * XREFs of RtlpSetInstallLanguage @ 0x180140140
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180034720 (OpenGlobalizationUserSettingsKey.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpOpenKey @ 0x1800EA970 (LdrpOpenKey.c)
 *     RtlStringCchCopyW @ 0x1800EC364 (RtlStringCchCopyW.c)
 *     RtlUnicodeStringToLcid @ 0x180116D44 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x18013FBF4 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x18013FD58 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x18013FF38 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtDeleteKey @ 0x180163800 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180163860 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x180163A80 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  char v2; // r15
  char v3; // r12
  WCHAR *v4; // rdi
  int InstalledLanguageType; // ebx
  __int64 v6; // rdx
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // rdx
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h] BYREF
  __int16 *v16; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v17; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v18; // [rsp+90h] [rbp-78h] BYREF
  __int16 *v19; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[88]; // [rsp+B8h] [rbp-50h] BYREF
  _WORD v22[88]; // [rsp+168h] [rbp+60h] BYREF
  _WORD v23[176]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v24[264]; // [rsp+378h] [rbp+270h] BYREF

  Handle = 0LL;
  v17 = 0LL;
  v2 = 0;
  LODWORD(v12[0]) = 0;
  v3 = 0;
  LODWORD(v13) = 0;
  LODWORD(v15) = 0;
  v4 = (WCHAR *)a2;
  v14 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&v12[1] = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    InstalledLanguageType = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)v12);
    if ( InstalledLanguageType < 0 )
      return (unsigned int)InstalledLanguageType;
    v18.Buffer = SourceString;
    v18.MaximumLength = 172;
    if ( !(unsigned __int8)RtlLCIDToCultureName(v12[0], (__int64)&v18) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&v18, a2);
    if ( !RtlCultureNameToLCID(&v18.Length, (int *)v12) )
      return (unsigned int)-1073741811;
  }
  InstalledLanguageType = RtlpCreateProcessRegistryInfo(&v14, v6);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( !v14 )
    return (unsigned int)-1073741823;
  InstalledLanguageType = RtlpGetInstalledLanguageType(v14, v4, (int *)&v15, &v16);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( (_DWORD)v15 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v15 == 2 )
  {
    v8 = v16;
    v2 = 1;
LABEL_22:
    InstalledLanguageType = RtlpGetCompleteLanguageFallback(v14, v8, 0LL, v24, 0x102u);
    if ( InstalledLanguageType < 0 )
      return (unsigned int)InstalledLanguageType;
    goto LABEL_23;
  }
  if ( (_DWORD)v15 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset_thunk_772440563353939046(v22, 0, 0xACuLL);
  RtlStringCchCopyW(v22, 85LL, (__int64)v4);
  v4 = SourceString;
  memset_thunk_772440563353939046(SourceString, 0, 0xACuLL);
  InstalledLanguageType = RtlpGetDefaultLanguageBaseOrParent(
                            v14,
                            (__int64)v16,
                            &v19,
                            (__int64)SourceString,
                            0x55u,
                            0LL,
                            0LL);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  v7 = v19;
  if ( !v19 )
    return (unsigned int)-1073741637;
  InstalledLanguageType = RtlpGetCompleteLanguageFallback(v14, v16, (__int64)v22, v23, 0xACu);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v2 = 1;
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&v18, v4);
  if ( !RtlCultureNameToLCID(&v18.Length, (int *)v12) )
    return (unsigned int)-1073741811;
  InstalledLanguageType = NtFlushInstallUILanguage(LOWORD(v12[0]), 0LL);
  if ( InstalledLanguageType >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v24, &v13);
    }
    else
    {
      RtlInitUnicodeString(
        (PUNICODE_STRING)&v12[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      if ( (int)LdrpOpenKey((__int64)&v12[1], 0LL, 0xF003Fu, &Handle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&v12[1], L"InstallLanguageFallback");
        ZwDeleteValueKey(Handle, &v12[1]);
        NtClose(Handle);
      }
    }
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(32776LL, v22, &v13);
      RtlpSetPreferredUILanguages(36872LL, v23, &v13);
    }
    else
    {
      RtlInitUnicodeString(
        (PUNICODE_STRING)&v12[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      if ( (int)LdrpOpenKey((__int64)&v12[1], 0LL, 0xF003Fu, &Handle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&v12[1], L"PreferredUILanguages");
        ZwDeleteValueKey(Handle, &v12[1]);
        NtClose(Handle);
        RtlInitUnicodeString(
          (PUNICODE_STRING)&v12[1],
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        if ( (int)LdrpOpenKey((__int64)&v12[1], 0LL, 0xF003Fu, &Handle) >= 0 )
        {
          NtDeleteKey(Handle);
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, v9, (__int64)&Handle) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&v12[1], L"Control Panel\\Desktop\\MuiCached");
          if ( (int)LdrpOpenKey((__int64)&v12[1], (__int64)Handle, 0xF003Fu, &v17) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&v12[1], L"MachinePreferredUILanguages");
            ZwDeleteValueKey(v17, &v12[1]);
            RtlInitUnicodeString((PUNICODE_STRING)&v12[1], L"MachineLanguageConfiguration");
            ZwDeleteValueKey(v17, &v12[1]);
            NtClose(v17);
          }
          NtClose(Handle);
        }
      }
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)InstalledLanguageType;
}
