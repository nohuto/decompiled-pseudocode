/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x180140750
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x1800314F8 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180034720 (OpenGlobalizationUserSettingsKey.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpOpenKey @ 0x1800EA970 (LdrpOpenKey.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800EAF10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800F97E0 (RtlpInitializeLangRegistryInfo.c)
 *     LdrpCreateKey @ 0x18013EF00 (LdrpCreateKey.c)
 *     RtlStringCchCatW @ 0x18013F06C (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x18013F3FC (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x18013FFD4 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1801405E0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1801493E0 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwSetValueKey @ 0x180162880 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180163C60 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(unsigned int a1, WCHAR *a2, _DWORD *a3)
{
  WCHAR *v3; // r13
  __int16 v4; // di
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  int v7; // r15d
  int InstallUILanguage; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int16 v12; // si
  int ProcessRegistryInfo; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  wchar_t *Heap; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r14
  const WCHAR *v19; // r15
  unsigned int v20; // esi
  unsigned __int16 v21; // si
  __int64 v22; // rax
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v24; // rax
  unsigned int *v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v29; // esi
  __int64 v30; // rax
  __int16 Length; // r15
  const WCHAR *v32; // r12
  wchar_t *Buffer; // r14
  _WORD *v34; // rsi
  unsigned int i; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int16 MaximumLength; // r12
  __int64 v40; // rcx
  __int64 v41; // rax
  wchar_t *v42; // rcx
  HANDLE v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  __int64 v48; // rax
  WCHAR *v49; // rcx
  unsigned int v50; // [rsp+30h] [rbp-D0h]
  const wchar_t *SourceString; // [rsp+38h] [rbp-C8h]
  unsigned int v52; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v54[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING v57; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v58; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v59[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+84h] [rbp-7Ch]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+B0h] [rbp-50h]
  HANDLE v66; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v67; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR *v68; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v69; // [rsp+D0h] [rbp-30h]
  HANDLE v70; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v72; // [rsp+E8h] [rbp-18h]
  _DWORD *v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+110h] [rbp+10h]

  v73 = a3;
  v70 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  Handle = 0LL;
  v3 = a2;
  v60 = 0;
  LOBYTE(v4) = a1;
  v50 = 0;
  v5 = 0;
  v61 = 0;
  v6 = 0;
  v52 = 0;
  v7 = 0;
  LOWORD(v55) = 0;
  v53 = 0;
  v54[0] = 0;
  v65 = 0LL;
  v75 = 0LL;
  v76 = 0;
  v72 = 0LL;
  v56 = 0;
  v64 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v59[0] = 0;
  SourceString = 0LL;
  v71 = 0LL;
  v57 = 0LL;
  DestinationString = 0LL;
  v58 = 0LL;
  v74 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v9 = 18440;
  if ( a1 )
    v9 = a1;
  if ( (LOBYTE(v4) = v9, (v9 & 0xFFFF0363) != 0)
    || (v9 & 0x400) != 0 && (!a2 || (v9 & 0xFFFFFBF3) != 0)
    || (v9 & 0x8000) != 0 && (!a2 || (v9 & 0xFFFF6773) != 0)
    || (v9 & 0xC) == 0xC
    || (v9 & 0x1800) == 0x1800
    || (v9 & 0x10) != 0 && (v9 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_104:
    if ( (v4 & 0x80u) != 0 && v64 )
      RtlpMuiFreeLangRegistryInfo(v64);
    *v73 = v5 + v7 + v6;
    return (unsigned int)InstallUILanguage;
  }
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 | 0x4000;
  if ( (v10 & 0xE410) != 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (v11 & 0x1C00) != 0 )
    v12 = v11;
  if ( (v12 & 0x80u) == 0 )
    ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v64, v10);
  else
    ProcessRegistryInfo = RtlpInitializeLangRegistryInfo(&v64);
  InstallUILanguage = ProcessRegistryInfo;
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( !v3 )
    {
      MaximumLength = 4;
      *(_DWORD *)&v58.Length = 262146;
      Buffer = (wchar_t *)&unk_18019245C;
      v4 = v12;
      v58.Buffer = (wchar_t *)&unk_18019245C;
      Length = 2;
      goto LABEL_139;
    }
    v15 = 4LL;
    if ( (v12 & 4) == 0 )
      v15 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v3, v15) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    v4 = v12;
    if ( (v12 & 0x400) == 0 )
      goto LABEL_43;
    InstallUILanguage = NtQueryInstallUILanguage(v59);
    if ( InstallUILanguage < 0 )
    {
LABEL_93:
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( v66 )
      {
        NtClose(v66);
        v66 = 0LL;
      }
      if ( v67 )
      {
        NtClose(v67);
        v67 = 0LL;
      }
      if ( v70 )
      {
        NtClose(v70);
        v70 = 0LL;
      }
      if ( v72 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v72);
      v7 = v61;
      v5 = v60;
      goto LABEL_104;
    }
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    SourceString = Heap;
    v17 = (unsigned __int64)Heap;
    if ( !Heap )
    {
      InstallUILanguage = -1073741801;
      goto LABEL_93;
    }
    v57.Buffer = Heap;
    *(_DWORD *)&v57.Length = 11141120;
    if ( !(unsigned __int8)RtlLCIDToCultureName(v59[0], (__int64)&v57) )
    {
      InstallUILanguage = -1073741811;
LABEL_90:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
LABEL_91:
      if ( v69 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v69);
      goto LABEL_93;
    }
    v18 = (unsigned __int64)v57.Length >> 1;
    if ( (v12 & 4) != 0 )
    {
      InstallUILanguage = RtlpConvertLCIDsToCultureNames(v3, (unsigned __int64 *)&v68);
      if ( InstallUILanguage < 0 )
        goto LABEL_86;
      v3 = v68;
      v4 = v12 & 0xFFF3 | 8;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v3, &v55, 0LL);
    if ( InstallUILanguage < 0 )
    {
LABEL_86:
      v17 = (unsigned __int64)SourceString;
    }
    else
    {
      memmove((void *)&SourceString[v18 + 1], v3, 2LL * ((unsigned int)(unsigned __int16)v55 + 1));
      v17 = (unsigned __int64)SourceString;
      InstallUILanguage = RtlpAutoCompleteLanguageFallback(v64, SourceString);
      if ( InstallUILanguage >= 0 )
      {
        v3 = (WCHAR *)SourceString;
LABEL_43:
        InstallUILanguage = RtlpGetMultiStringLength(v3, &v58, &v52);
        if ( InstallUILanguage < 0 )
          goto LABEL_86;
        v58.Buffer = v3;
        v58.Length *= 2;
        v58.MaximumLength = v58.Length + 2;
        if ( v52 - 1 > 2 )
        {
          InstallUILanguage = -1073741811;
          goto LABEL_86;
        }
        v19 = v3;
        v69 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
        if ( !v69 )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_86;
        }
        while ( 1 )
        {
          v20 = v52;
          if ( v6 >= v52 )
          {
            if ( (v4 & 0x14) != 4 )
            {
              Buffer = v58.Buffer;
              MaximumLength = v58.MaximumLength;
              Length = v58.Length;
              goto LABEL_140;
            }
            v29 = v56 + 1;
            v56 = v29;
            if ( v29 <= 0xFFFF )
            {
              v30 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v29);
              v72 = v30;
              if ( !v30 )
              {
                InstallUILanguage = -1073741670;
                goto LABEL_115;
              }
              v58.Buffer = (wchar_t *)v30;
              Length = 2 * v29;
              v32 = v3;
              v58.Length = 2 * v29;
              v3 = (WCHAR *)v30;
              v65 = (unsigned __int16)(2 * v29);
              Buffer = (wchar_t *)v30;
              v58.MaximumLength = 2 * v29;
              v34 = (_WORD *)v30;
              for ( i = 0; ; i = v55 + 1 )
              {
                v55 = i;
                if ( i >= v52 )
                  break;
                RtlInitUnicodeString(&DestinationString, v32);
                if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v53) < 0 )
                  goto LABEL_82;
                DestinationString.Buffer = v69;
                *(_DWORD *)&DestinationString.Length = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v53, (__int64)&DestinationString) )
                  goto LABEL_82;
                if ( (int)RtlStringCchCatW((__int64)v34, v56, (__int64)DestinationString.Buffer) < 0 )
                {
                  InstallUILanguage = -1073741670;
                  goto LABEL_83;
                }
                v14 = -1LL;
                v36 = -1LL;
                do
                  ++v36;
                while ( v34[v36] );
                v56 += -1 - v36;
                if ( v34 )
                {
                  v37 = -1LL;
                  do
                    ++v37;
                  while ( v34[v37] );
                  v34 += v37 + 1;
                }
                else
                {
                  v34 = 0LL;
                }
                if ( v32 )
                {
                  v38 = -1LL;
                  do
                    ++v38;
                  while ( v32[v38] );
                  v32 += v38 + 1;
                }
                else
                {
                  v32 = 0LL;
                }
              }
              MaximumLength = v65;
              *v34 = 0;
LABEL_139:
              v20 = v52;
LABEL_140:
              if ( (v4 & 0x400) != 0 )
              {
                RtlInitUnicodeString(&v57, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
                InstallUILanguage = LdrpCreateKey((__int64)&v57, 0LL, 0, 0x20006u, &v71);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&v57, L"InstallLanguageFallback");
                  v40 = -1LL;
                  do
                    ++v40;
                  while ( Buffer[v40] );
                  v58.MaximumLength = -2 - 2 * v40 + MaximumLength;
                  if ( Buffer )
                  {
                    v41 = -1LL;
                    do
                      ++v41;
                    while ( Buffer[v41] );
                    v42 = &Buffer[v41 + 1];
                  }
                  else
                  {
                    v42 = 0LL;
                  }
                  v58.Buffer = v42;
                  InstallUILanguage = RtlpGetMultiStringLength(v42, &v58, &v52);
                  if ( InstallUILanguage >= 0 )
                  {
                    Length = v58.Length;
                    Buffer = v58.Buffer;
                    InstallUILanguage = ZwSetValueKey(v71, &v57, 0LL, 7LL, v58.Buffer, 2 * (unsigned int)v58.Length);
                    if ( InstallUILanguage >= 0 )
                    {
                      v20 = v52;
                      MaximumLength = v58.MaximumLength;
                      v61 = v52;
                      goto LABEL_152;
                    }
                  }
                }
LABEL_110:
                v6 = 0;
                goto LABEL_86;
              }
LABEL_152:
              if ( (v4 & 0x10) != 0 )
              {
                InstallUILanguage = RtlpSetInstallLanguage(v4, v3);
                if ( InstallUILanguage >= 0 )
                {
                  v61 = v20;
                  goto LABEL_155;
                }
LABEL_162:
                v6 = 0;
                goto LABEL_86;
              }
LABEL_155:
              if ( (v4 & 0x4000) != 0 )
              {
                InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, v14, (__int64)&v70);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                RtlInitUnicodeString(&v57, L"Control Panel\\Desktop");
                InstallUILanguage = LdrpOpenKey((__int64)&v57, (__int64)v70, 0xF003Fu, &v66);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                if ( (v4 & 0x800) != 0 )
                {
                  RtlInitUnicodeString(&v57, L"PreferredUILanguagesPending");
                  v43 = v66;
                }
                else
                {
                  if ( v20 < 2 )
                  {
                    InstallUILanguage = -1073741811;
                    goto LABEL_162;
                  }
                  RtlInitUnicodeString(&v57, L"LanguageConfigurationPending");
                  Buffer = 0LL;
                  InstallUILanguage = LdrpCreateKey((__int64)&v57, (__int64)v66, 0, 0xF003Fu, &Handle);
                  if ( InstallUILanguage < 0 )
                  {
LABEL_115:
                    v6 = 0;
                    goto LABEL_86;
                  }
                  RtlInitUnicodeString(&v57, v3);
                  if ( v3 )
                  {
                    v44 = -1LL;
                    do
                      ++v44;
                    while ( v3[v44] );
                    Buffer = &v3[v44 + 1];
                  }
                  MaximumLength -= v57.MaximumLength;
                  v43 = Handle;
                  v58.MaximumLength = MaximumLength;
                  v58.Buffer = Buffer;
                  v58.Length = Length - v57.MaximumLength;
                }
                InstallUILanguage = ZwSetValueKey(v43, &v57, 0LL, 7LL, Buffer, MaximumLength);
                if ( InstallUILanguage < 0 )
                {
LABEL_83:
                  v6 = 0;
                  goto LABEL_86;
                }
                v60 = v20;
              }
              if ( Handle )
              {
                NtClose(Handle);
                Handle = 0LL;
              }
              if ( (v4 & 0x8800) == 0x8800 )
              {
                DestinationString = v58;
                v45 = RtlpSetMachineUILanguagesImmediate((__int64)&DestinationString);
                v46 = v20;
                InstallUILanguage = v45;
                v50 = v20;
              }
              else
              {
                v46 = 0;
              }
              if ( (v4 & 0x2000) == 0 && (v4 & 0x9000) != 0x9000 )
              {
                v6 = v46;
                if ( InstallUILanguage < 0 )
                  goto LABEL_86;
                goto LABEL_193;
              }
              RtlInitUnicodeString(&v57, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
              InstallUILanguage = LdrpCreateKey((__int64)&v57, 0LL, 0, 0xF003Fu, &v67);
              if ( InstallUILanguage < 0 )
                goto LABEL_85;
              if ( (v4 & 0x800) != 0 )
              {
                RtlInitUnicodeString(&v57, L"PreferredUILanguages");
                v47 = ZwSetValueKey(v67, &v57, 0LL, 7LL, Buffer, MaximumLength);
LABEL_191:
                InstallUILanguage = v47;
                if ( v47 >= 0 )
                {
                  v6 = v20;
LABEL_193:
                  if ( (v4 & 0xE410) != 0 )
                  {
                    ZwGetMUIRegistryInfo(8LL, 0LL, 0LL);
                    if ( (v4 & 0x8410) != 0 )
                      RtlUpdateProcessRegistryInfo();
                  }
                  goto LABEL_86;
                }
                goto LABEL_85;
              }
              if ( v20 >= 2 )
              {
                RtlInitUnicodeString(&v57, L"LanguageConfiguration");
                InstallUILanguage = LdrpCreateKey((__int64)&v57, (__int64)v67, 0, 0xF003Fu, &Handle);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&v57, v3);
                  if ( v3 )
                  {
                    v48 = -1LL;
                    do
                      ++v48;
                    while ( v3[v48] );
                    v49 = &v3[v48 + 1];
                  }
                  else
                  {
                    v49 = 0LL;
                  }
                  v47 = ZwSetValueKey(
                          Handle,
                          &v57,
                          0LL,
                          7LL,
                          v49,
                          (unsigned __int16)(MaximumLength - v57.MaximumLength));
                  goto LABEL_191;
                }
LABEL_85:
                v6 = v50;
                goto LABEL_86;
              }
            }
LABEL_84:
            InstallUILanguage = -1073741811;
            goto LABEL_85;
          }
          RtlInitUnicodeString(&DestinationString, v19);
          if ( (v4 & 4) != 0 )
          {
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v53) < 0 )
              goto LABEL_109;
            v21 = v53;
            if ( ((v53 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !(unsigned __int8)RtlLCIDToCultureName(v53, (__int64)&DestinationString) )
            {
LABEL_82:
              InstallUILanguage = -1073741811;
              goto LABEL_83;
            }
            v14 = (__int64)DestinationString.Buffer;
            v22 = -1LL;
            do
              ++v22;
            while ( DestinationString.Buffer[v22] );
            v56 += v22 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v53) )
              goto LABEL_109;
            v21 = v53;
            if ( ((v53 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            v14 = (__int64)DestinationString.Buffer;
          }
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              if ( (v4 & 0x800) != 0 || (v4 & 0x10) != 0 || (*(_BYTE *)v65 & 1) != 0 )
                goto LABEL_84;
              if ( (*(_BYTE *)v65 & 2) != 0 )
              {
                v25 = &v55;
              }
              else
              {
                if ( (*(_BYTE *)v65 & 4) == 0 || v52 > 2 )
                  goto LABEL_84;
                v25 = (unsigned int *)v54;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v64,
                                                        v65,
                                                        v21,
                                                        (unsigned int)&v74,
                                                        (__int64)v25);
            }
            else
            {
              if ( v6 != 2 )
                goto LABEL_76;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v64,
                                                        v65,
                                                        v21,
                                                        (unsigned int)&v74,
                                                        (__int64)&v55);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_109:
              InstallUILanguage = -1073741811;
              goto LABEL_110;
            }
            v24 = &v74;
          }
          else
          {
            v26 = v64;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v64, (const wchar_t *)v14, 1, v54) < 0 )
              goto LABEL_84;
            v24 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v26 + 24) + 16LL) + 28LL * v54[0]);
          }
          v65 = (unsigned __int64)v24;
LABEL_76:
          if ( v19 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( v19[v27] );
            v19 += v27 + 1;
          }
          else
          {
            v19 = 0LL;
          }
          ++v6;
        }
      }
    }
    if ( v68 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v68);
    if ( !v17 )
      goto LABEL_91;
    goto LABEL_90;
  }
  return (unsigned int)InstallUILanguage;
}
