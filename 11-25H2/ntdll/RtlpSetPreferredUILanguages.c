/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x180141E40
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180059FC8 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180088D50 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpOpenKey @ 0x1800EBDC0 (LdrpOpenKey.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800FB580 (RtlpInitializeLangRegistryInfo.c)
 *     LdrpCreateKey @ 0x1801405EC (LdrpCreateKey.c)
 *     RtlStringCchCatW @ 0x18014075C (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180140AEC (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1801416C4 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180141CD0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x18014A990 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1801651F0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  WCHAR *v4; // r13
  __int16 v5; // di
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  int v8; // r15d
  int InstallUILanguage; // ebx
  int v10; // eax
  __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // si
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t *Heap; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // r14
  const WCHAR *v21; // r15
  unsigned int v22; // esi
  unsigned __int16 v23; // si
  __int64 v24; // rax
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v26; // rax
  unsigned int *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned int v31; // esi
  __int64 v32; // rax
  __int16 Length; // r15
  const WCHAR *v34; // r12
  wchar_t *Buffer; // r14
  _WORD *v36; // rsi
  unsigned int i; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int16 MaximumLength; // r12
  __int64 v42; // rcx
  __int64 v43; // rax
  wchar_t *v44; // rcx
  HANDLE v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  WCHAR *v51; // rcx
  unsigned int v52; // [rsp+30h] [rbp-D0h]
  const wchar_t *SourceString; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v56[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v57; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING v59; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v60; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v61[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v62; // [rsp+84h] [rbp-7Ch]
  unsigned int v63; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+B0h] [rbp-50h]
  HANDLE v68; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v69; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR *v70; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v71; // [rsp+D0h] [rbp-30h]
  HANDLE v72; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-18h]
  _DWORD *v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+110h] [rbp+10h]

  v75 = (_DWORD *)a3;
  v72 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  Handle = 0LL;
  v4 = (WCHAR *)a2;
  v62 = 0;
  LOBYTE(v5) = a1;
  v52 = 0;
  v6 = 0;
  v63 = 0;
  v7 = 0;
  v54 = 0;
  v8 = 0;
  LOWORD(v57) = 0;
  v55 = 0;
  v56[0] = 0;
  v67 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v74 = 0LL;
  v58 = 0;
  v66 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  v61[0] = 0;
  SourceString = 0LL;
  v73 = 0LL;
  v59 = 0LL;
  DestinationString = 0LL;
  v60 = 0LL;
  v76 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v10 = 18440;
  if ( a1 )
    v10 = a1;
  if ( (LOBYTE(v5) = v10, (v10 & 0xFFFF0363) != 0)
    || (v10 & 0x400) != 0 && (!a2 || (v10 & 0xFFFFFBF3) != 0)
    || (v10 & 0x8000) != 0 && (!a2 || (v10 & 0xFFFF6773) != 0)
    || (v10 & 0xC) == 0xC
    || (a2 = 6144LL, (v10 & 0x1800) == 0x1800)
    || (v10 & 0x10) != 0 && (v10 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_104:
    if ( (v5 & 0x80u) != 0 && v66 )
      RtlpMuiFreeLangRegistryInfo(v66, a2, a3, a4);
    *v75 = v6 + v8 + v7;
    return (unsigned int)InstallUILanguage;
  }
  v11 = v10 | 8;
  if ( (v10 & 0xC) != 0 )
    v11 = v10;
  v12 = v11 | 0x4000;
  if ( (v11 & 0xE410) != 0 )
    v12 = v11;
  v13 = v12 | 0x800;
  if ( (v12 & 0x1C00) != 0 )
    v13 = v12;
  if ( (v13 & 0x80u) == 0 )
    v14 = RtlpCreateProcessRegistryInfo(&v66);
  else
    v14 = RtlpInitializeLangRegistryInfo(&v66);
  InstallUILanguage = v14;
  if ( v14 >= 0 )
  {
    if ( !v4 )
    {
      MaximumLength = 4;
      *(_DWORD *)&v60.Length = 262146;
      Buffer = (wchar_t *)&unk_18019453C;
      v5 = v13;
      v60.Buffer = (wchar_t *)&unk_18019453C;
      Length = 2;
      goto LABEL_139;
    }
    v15 = 4LL;
    if ( (v13 & 4) == 0 )
      v15 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v4, v15) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    v5 = v13;
    if ( (v13 & 0x400) == 0 )
      goto LABEL_43;
    InstallUILanguage = NtQueryInstallUILanguage(v61, v16, v17);
    if ( InstallUILanguage < 0 )
    {
LABEL_93:
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( v68 )
      {
        NtClose(v68);
        v68 = 0LL;
      }
      if ( v69 )
      {
        NtClose(v69);
        v69 = 0LL;
      }
      if ( v72 )
      {
        NtClose(v72);
        v72 = 0LL;
      }
      if ( v74 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v74, a4);
      v8 = v63;
      v6 = v62;
      goto LABEL_104;
    }
    Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    SourceString = Heap;
    v19 = (__int64)Heap;
    if ( !Heap )
    {
      InstallUILanguage = -1073741801;
      goto LABEL_93;
    }
    v59.Buffer = Heap;
    *(_DWORD *)&v59.Length = 11141120;
    if ( !(unsigned __int8)RtlLCIDToCultureName(v61[0], (__int64)&v59) )
    {
      InstallUILanguage = -1073741811;
LABEL_90:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19, a4);
LABEL_91:
      if ( v71 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v71, a4);
      goto LABEL_93;
    }
    v20 = (unsigned __int64)v59.Length >> 1;
    if ( (v13 & 4) != 0 )
    {
      InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (__int64 *)&v70);
      if ( InstallUILanguage < 0 )
        goto LABEL_86;
      v4 = v70;
      v5 = v13 & 0xFFF3 | 8;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v4, &v57, 0LL);
    if ( InstallUILanguage < 0 )
    {
LABEL_86:
      v19 = (__int64)SourceString;
    }
    else
    {
      memmove((void *)&SourceString[v20 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v57 + 1));
      v19 = (__int64)SourceString;
      InstallUILanguage = RtlpAutoCompleteLanguageFallback(v66, SourceString);
      if ( InstallUILanguage >= 0 )
      {
        v4 = (WCHAR *)SourceString;
LABEL_43:
        InstallUILanguage = RtlpGetMultiStringLength(v4, &v60, &v54);
        if ( InstallUILanguage < 0 )
          goto LABEL_86;
        v60.Buffer = v4;
        v60.Length *= 2;
        v60.MaximumLength = v60.Length + 2;
        if ( v54 - 1 > 2 )
        {
          InstallUILanguage = -1073741811;
          goto LABEL_86;
        }
        v21 = v4;
        v71 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
        if ( !v71 )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_86;
        }
        while ( 1 )
        {
          v22 = v54;
          if ( v7 >= v54 )
          {
            if ( (v5 & 0x14) != 4 )
            {
              Buffer = v60.Buffer;
              MaximumLength = v60.MaximumLength;
              Length = v60.Length;
              goto LABEL_140;
            }
            v31 = v58 + 1;
            v58 = v31;
            if ( v31 <= 0xFFFF )
            {
              v32 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v31);
              v74 = v32;
              if ( !v32 )
              {
                InstallUILanguage = -1073741670;
                goto LABEL_115;
              }
              v60.Buffer = (wchar_t *)v32;
              Length = 2 * v31;
              v34 = v4;
              v60.Length = 2 * v31;
              v4 = (WCHAR *)v32;
              v67 = (unsigned __int16)(2 * v31);
              Buffer = (wchar_t *)v32;
              v60.MaximumLength = 2 * v31;
              v36 = (_WORD *)v32;
              for ( i = 0; ; i = v57 + 1 )
              {
                v57 = i;
                if ( i >= v54 )
                  break;
                RtlInitUnicodeString(&DestinationString, v34);
                if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v55) < 0 )
                  goto LABEL_82;
                DestinationString.Buffer = v71;
                *(_DWORD *)&DestinationString.Length = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v55, (__int64)&DestinationString) )
                  goto LABEL_82;
                if ( (int)RtlStringCchCatW((__int64)v36, v58, (__int64)DestinationString.Buffer) < 0 )
                {
                  InstallUILanguage = -1073741670;
                  goto LABEL_83;
                }
                a2 = -1LL;
                v38 = -1LL;
                do
                  ++v38;
                while ( v36[v38] );
                v58 += -1 - v38;
                if ( v36 )
                {
                  v39 = -1LL;
                  do
                    ++v39;
                  while ( v36[v39] );
                  v36 += v39 + 1;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34 )
                {
                  v40 = -1LL;
                  do
                    ++v40;
                  while ( v34[v40] );
                  v34 += v40 + 1;
                }
                else
                {
                  v34 = 0LL;
                }
              }
              MaximumLength = v67;
              *v36 = 0;
LABEL_139:
              v22 = v54;
LABEL_140:
              if ( (v5 & 0x400) != 0 )
              {
                RtlInitUnicodeString(&v59, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
                InstallUILanguage = LdrpCreateKey((__int64)&v59, 0LL, 0, 0x20006u, &v73);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&v59, L"InstallLanguageFallback");
                  v42 = -1LL;
                  do
                    ++v42;
                  while ( Buffer[v42] );
                  v60.MaximumLength = -2 - 2 * v42 + MaximumLength;
                  if ( Buffer )
                  {
                    v43 = -1LL;
                    do
                      ++v43;
                    while ( Buffer[v43] );
                    v44 = &Buffer[v43 + 1];
                  }
                  else
                  {
                    v44 = 0LL;
                  }
                  v60.Buffer = v44;
                  InstallUILanguage = RtlpGetMultiStringLength(v44, &v60, &v54);
                  if ( InstallUILanguage >= 0 )
                  {
                    Length = v60.Length;
                    Buffer = v60.Buffer;
                    InstallUILanguage = ZwSetValueKey(v73, &v59, 0LL, 7LL, v60.Buffer, 2 * (unsigned int)v60.Length);
                    if ( InstallUILanguage >= 0 )
                    {
                      v22 = v54;
                      MaximumLength = v60.MaximumLength;
                      v63 = v54;
                      goto LABEL_152;
                    }
                  }
                }
LABEL_110:
                v7 = 0;
                goto LABEL_86;
              }
LABEL_152:
              if ( (v5 & 0x10) != 0 )
              {
                InstallUILanguage = RtlpSetInstallLanguage(v5, v4);
                if ( InstallUILanguage >= 0 )
                {
                  v63 = v22;
                  goto LABEL_155;
                }
LABEL_162:
                v7 = 0;
                goto LABEL_86;
              }
LABEL_155:
              if ( (v5 & 0x4000) != 0 )
              {
                InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000LL, a2, &v72);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                RtlInitUnicodeString(&v59, L"Control Panel\\Desktop");
                InstallUILanguage = LdrpOpenKey((__int64)&v59, (__int64)v72, 0xF003Fu, &v68);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                if ( (v5 & 0x800) != 0 )
                {
                  RtlInitUnicodeString(&v59, L"PreferredUILanguagesPending");
                  v45 = v68;
                }
                else
                {
                  if ( v22 < 2 )
                  {
                    InstallUILanguage = -1073741811;
                    goto LABEL_162;
                  }
                  RtlInitUnicodeString(&v59, L"LanguageConfigurationPending");
                  Buffer = 0LL;
                  InstallUILanguage = LdrpCreateKey((__int64)&v59, (__int64)v68, 0, 0xF003Fu, &Handle);
                  if ( InstallUILanguage < 0 )
                  {
LABEL_115:
                    v7 = 0;
                    goto LABEL_86;
                  }
                  RtlInitUnicodeString(&v59, v4);
                  if ( v4 )
                  {
                    v46 = -1LL;
                    do
                      ++v46;
                    while ( v4[v46] );
                    Buffer = &v4[v46 + 1];
                  }
                  MaximumLength -= v59.MaximumLength;
                  v45 = Handle;
                  v60.MaximumLength = MaximumLength;
                  v60.Buffer = Buffer;
                  v60.Length = Length - v59.MaximumLength;
                }
                InstallUILanguage = ZwSetValueKey(v45, &v59, 0LL, 7LL, Buffer, MaximumLength);
                if ( InstallUILanguage < 0 )
                {
LABEL_83:
                  v7 = 0;
                  goto LABEL_86;
                }
                v62 = v22;
              }
              if ( Handle )
              {
                NtClose(Handle);
                Handle = 0LL;
              }
              if ( (v5 & 0x8800) == 0x8800 )
              {
                DestinationString = v60;
                v47 = RtlpSetMachineUILanguagesImmediate((__int64)&DestinationString);
                v48 = v22;
                InstallUILanguage = v47;
                v52 = v22;
              }
              else
              {
                v48 = 0;
              }
              if ( (v5 & 0x2000) == 0 )
              {
                a2 = 36864LL;
                if ( (v5 & 0x9000) != 0x9000 )
                {
                  v7 = v48;
                  if ( InstallUILanguage < 0 )
                    goto LABEL_86;
                  goto LABEL_193;
                }
              }
              RtlInitUnicodeString(&v59, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
              InstallUILanguage = LdrpCreateKey((__int64)&v59, 0LL, 0, 0xF003Fu, &v69);
              if ( InstallUILanguage < 0 )
                goto LABEL_85;
              if ( (v5 & 0x800) != 0 )
              {
                RtlInitUnicodeString(&v59, L"PreferredUILanguages");
                v49 = ZwSetValueKey(v69, &v59, 0LL, 7LL, Buffer, MaximumLength);
LABEL_191:
                InstallUILanguage = v49;
                if ( v49 >= 0 )
                {
                  v7 = v22;
LABEL_193:
                  if ( (v5 & 0xE410) != 0 )
                  {
                    ZwGetMUIRegistryInfo(8LL, 0LL, 0LL);
                    if ( (v5 & 0x8410) != 0 )
                      RtlUpdateProcessRegistryInfo();
                  }
                  goto LABEL_86;
                }
                goto LABEL_85;
              }
              if ( v22 >= 2 )
              {
                RtlInitUnicodeString(&v59, L"LanguageConfiguration");
                InstallUILanguage = LdrpCreateKey((__int64)&v59, (__int64)v69, 0, 0xF003Fu, &Handle);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&v59, v4);
                  if ( v4 )
                  {
                    v50 = -1LL;
                    do
                      ++v50;
                    while ( v4[v50] );
                    v51 = &v4[v50 + 1];
                  }
                  else
                  {
                    v51 = 0LL;
                  }
                  v49 = ZwSetValueKey(
                          Handle,
                          &v59,
                          0LL,
                          7LL,
                          v51,
                          (unsigned __int16)(MaximumLength - v59.MaximumLength));
                  goto LABEL_191;
                }
LABEL_85:
                v7 = v52;
                goto LABEL_86;
              }
            }
LABEL_84:
            InstallUILanguage = -1073741811;
            goto LABEL_85;
          }
          RtlInitUnicodeString(&DestinationString, v21);
          if ( (v5 & 4) != 0 )
          {
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v55) < 0 )
              goto LABEL_109;
            v23 = v55;
            if ( ((v55 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = v71;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !(unsigned __int8)RtlLCIDToCultureName(v55, (__int64)&DestinationString) )
            {
LABEL_82:
              InstallUILanguage = -1073741811;
              goto LABEL_83;
            }
            a2 = (__int64)DestinationString.Buffer;
            v24 = -1LL;
            do
              ++v24;
            while ( DestinationString.Buffer[v24] );
            v58 += v24 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v55) )
              goto LABEL_109;
            v23 = v55;
            if ( ((v55 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            a2 = (__int64)DestinationString.Buffer;
          }
          if ( v7 )
          {
            if ( v7 == 1 )
            {
              if ( (v5 & 0x800) != 0 || (v5 & 0x10) != 0 || (*(_BYTE *)v67 & 1) != 0 )
                goto LABEL_84;
              if ( (*(_BYTE *)v67 & 2) != 0 )
              {
                v27 = &v57;
              }
              else
              {
                if ( (*(_BYTE *)v67 & 4) == 0 || v54 > 2 )
                  goto LABEL_84;
                v27 = (unsigned int *)v56;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v66,
                                                        v67,
                                                        v23,
                                                        (unsigned int)&v76,
                                                        (__int64)v27);
            }
            else
            {
              if ( v7 != 2 )
                goto LABEL_76;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v66,
                                                        v67,
                                                        v23,
                                                        (unsigned int)&v76,
                                                        (__int64)&v57);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_109:
              InstallUILanguage = -1073741811;
              goto LABEL_110;
            }
            v26 = &v76;
          }
          else
          {
            v28 = v66;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v66, (const wchar_t *)a2, 1, v56) < 0 )
              goto LABEL_84;
            v26 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 16LL) + 28LL * v56[0]);
          }
          v67 = (unsigned __int64)v26;
LABEL_76:
          if ( v21 )
          {
            v29 = -1LL;
            do
              ++v29;
            while ( v21[v29] );
            v21 += v29 + 1;
          }
          else
          {
            v21 = 0LL;
          }
          ++v7;
        }
      }
    }
    if ( v70 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v70, a4);
    if ( !v19 )
      goto LABEL_91;
    goto LABEL_90;
  }
  return (unsigned int)InstallUILanguage;
}
