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

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  WCHAR *v3; // r13
  __int16 v4; // di
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  int v7; // r15d
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 Buffer; // rdx
  __int64 v15; // rdx
  wchar_t *Heap; // rax
  wchar_t *v17; // r14
  unsigned __int64 v18; // r14
  const WCHAR *v19; // r15
  unsigned int v20; // esi
  unsigned __int16 v21; // si
  __int64 v22; // rax
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v24; // rax
  unsigned int *v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v29; // esi
  PVOID v30; // rax
  __int16 v31; // r15
  const WCHAR *v32; // r12
  WCHAR *v33; // r14
  _WORD *v34; // rsi
  unsigned int i; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int16 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rax
  WCHAR *v42; // rcx
  HANDLE v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // ecx
  NTSTATUS v47; // eax
  __int64 v48; // rax
  WCHAR *v49; // rcx
  unsigned int v50; // [rsp+30h] [rbp-D0h]
  wchar_t *SourceString; // [rsp+38h] [rbp-C8h]
  unsigned int v52; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Value; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v54[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+84h] [rbp-7Ch]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v64; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+B0h] [rbp-50h]
  HANDLE v66; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v67; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v69; // [rsp+D0h] [rbp-30h]
  HANDLE v70; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v72; // [rsp+E8h] [rbp-18h]
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
  Value = 0;
  v54[0] = 0;
  v65 = 0LL;
  v75 = 0LL;
  v76 = 0;
  v72 = 0LL;
  v56 = 0;
  v64 = 0LL;
  v69 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  SourceString = 0LL;
  KeyHandle = 0LL;
  String = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Data = 0LL;
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
    v13 = RtlpCreateProcessRegistryInfo(&v64);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v64);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    if ( !v3 )
    {
      v39 = 4;
      LODWORD(Data[0]) = 262146;
      v33 = (WCHAR *)&unk_18019453C;
      v4 = v12;
      Data[1] = &unk_18019453C;
      v31 = 2;
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
    InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
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
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v72);
      v7 = v61;
      v5 = v60;
      goto LABEL_104;
    }
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    SourceString = Heap;
    v17 = Heap;
    if ( !Heap )
    {
      InstallUILanguage = -1073741801;
      goto LABEL_93;
    }
    String.Buffer = Heap;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      InstallUILanguage = -1073741811;
LABEL_90:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
LABEL_91:
      if ( v69 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v69);
      goto LABEL_93;
    }
    v18 = (unsigned __int64)String.Length >> 1;
    if ( (v12 & 4) != 0 )
    {
      InstallUILanguage = RtlpConvertLCIDsToCultureNames(v3, &BaseAddress);
      if ( InstallUILanguage < 0 )
        goto LABEL_86;
      v3 = (WCHAR *)BaseAddress;
      v4 = v12 & 0xFFF3 | 8;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v3, &v55, 0LL);
    if ( InstallUILanguage < 0 )
    {
LABEL_86:
      v17 = SourceString;
    }
    else
    {
      memmove(&SourceString[v18 + 1], v3, 2LL * ((unsigned int)(unsigned __int16)v55 + 1));
      v17 = SourceString;
      InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v64, SourceString);
      if ( InstallUILanguage >= 0 )
      {
        v3 = SourceString;
LABEL_43:
        InstallUILanguage = RtlpGetMultiStringLength(v3, Data, &v52);
        if ( InstallUILanguage < 0 )
          goto LABEL_86;
        Data[1] = v3;
        LOWORD(Data[0]) *= 2;
        WORD1(Data[0]) = LOWORD(Data[0]) + 2;
        if ( v52 - 1 > 2 )
        {
          InstallUILanguage = -1073741811;
          goto LABEL_86;
        }
        v19 = v3;
        v69 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
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
              v33 = (WCHAR *)Data[1];
              v39 = WORD1(Data[0]);
              v31 = (__int16)Data[0];
              goto LABEL_140;
            }
            v29 = v56 + 1;
            v56 = v29;
            if ( v29 <= 0xFFFF )
            {
              v30 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v29);
              v72 = v30;
              if ( !v30 )
              {
                InstallUILanguage = -1073741670;
                goto LABEL_115;
              }
              Data[1] = v30;
              v31 = 2 * v29;
              v32 = v3;
              LOWORD(Data[0]) = 2 * v29;
              v3 = (WCHAR *)v30;
              v65 = (unsigned __int16)(2 * v29);
              v33 = (WCHAR *)v30;
              WORD1(Data[0]) = 2 * v29;
              v34 = v30;
              for ( i = 0; ; i = v55 + 1 )
              {
                v55 = i;
                if ( i >= v52 )
                  break;
                RtlInitUnicodeString(&DestinationString, v32);
                if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
                  goto LABEL_82;
                DestinationString.Buffer = (wchar_t *)v69;
                *(_DWORD *)&DestinationString.Length = 11141120;
                if ( !RtlLCIDToCultureName(Value, &DestinationString) )
                  goto LABEL_82;
                if ( (int)RtlStringCchCatW((__int64)v34, v56, (__int64)DestinationString.Buffer) < 0 )
                {
                  InstallUILanguage = -1073741670;
                  goto LABEL_83;
                }
                Buffer = -1LL;
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
              v39 = v65;
              *v34 = 0;
LABEL_139:
              v20 = v52;
LABEL_140:
              if ( (v4 & 0x400) != 0 )
              {
                RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
                InstallUILanguage = LdrpCreateKey(&String, 0LL, 0, 0x20006u, &KeyHandle);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&String, L"InstallLanguageFallback");
                  v40 = -1LL;
                  do
                    ++v40;
                  while ( v33[v40] );
                  WORD1(Data[0]) = -2 - 2 * v40 + v39;
                  if ( v33 )
                  {
                    v41 = -1LL;
                    do
                      ++v41;
                    while ( v33[v41] );
                    v42 = &v33[v41 + 1];
                  }
                  else
                  {
                    v42 = 0LL;
                  }
                  Data[1] = v42;
                  InstallUILanguage = RtlpGetMultiStringLength(v42, Data, &v52);
                  if ( InstallUILanguage >= 0 )
                  {
                    v31 = (__int16)Data[0];
                    v33 = (WCHAR *)Data[1];
                    InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
                    if ( InstallUILanguage >= 0 )
                    {
                      v20 = v52;
                      v39 = WORD1(Data[0]);
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
                InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000LL, Buffer, &v70);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
                InstallUILanguage = LdrpOpenKey(&String, v70, 0xF003Fu, &v66);
                if ( InstallUILanguage < 0 )
                  goto LABEL_162;
                if ( (v4 & 0x800) != 0 )
                {
                  RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
                  v43 = v66;
                }
                else
                {
                  if ( v20 < 2 )
                  {
                    InstallUILanguage = -1073741811;
                    goto LABEL_162;
                  }
                  RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
                  v33 = 0LL;
                  InstallUILanguage = LdrpCreateKey(&String, v66, 0, 0xF003Fu, &Handle);
                  if ( InstallUILanguage < 0 )
                  {
LABEL_115:
                    v6 = 0;
                    goto LABEL_86;
                  }
                  RtlInitUnicodeString(&String, v3);
                  if ( v3 )
                  {
                    v44 = -1LL;
                    do
                      ++v44;
                    while ( v3[v44] );
                    v33 = &v3[v44 + 1];
                  }
                  v39 -= String.MaximumLength;
                  v43 = Handle;
                  WORD1(Data[0]) = v39;
                  Data[1] = v33;
                  LOWORD(Data[0]) = v31 - String.MaximumLength;
                }
                InstallUILanguage = ZwSetValueKey(v43, &String, 0, 7u, v33, v39);
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
                DestinationString = *(_UNICODE_STRING *)Data;
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
              RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
              InstallUILanguage = LdrpCreateKey(&String, 0LL, 0, 0xF003Fu, &v67);
              if ( InstallUILanguage < 0 )
                goto LABEL_85;
              if ( (v4 & 0x800) != 0 )
              {
                RtlInitUnicodeString(&String, L"PreferredUILanguages");
                v47 = ZwSetValueKey(v67, &String, 0, 7u, v33, v39);
LABEL_191:
                InstallUILanguage = v47;
                if ( v47 >= 0 )
                {
                  v6 = v20;
LABEL_193:
                  if ( (v4 & 0xE410) != 0 )
                  {
                    ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
                    if ( (v4 & 0x8410) != 0 )
                      RtlUpdateProcessRegistryInfo();
                  }
                  goto LABEL_86;
                }
                goto LABEL_85;
              }
              if ( v20 >= 2 )
              {
                RtlInitUnicodeString(&String, L"LanguageConfiguration");
                InstallUILanguage = LdrpCreateKey(&String, v67, 0, 0xF003Fu, &Handle);
                if ( InstallUILanguage >= 0 )
                {
                  RtlInitUnicodeString(&String, v3);
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
                  v47 = ZwSetValueKey(Handle, &String, 0, 7u, v49, (unsigned __int16)(v39 - String.MaximumLength));
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
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_109;
            v21 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
            {
LABEL_82:
              InstallUILanguage = -1073741811;
              goto LABEL_83;
            }
            Buffer = (__int64)DestinationString.Buffer;
            v22 = -1LL;
            do
              ++v22;
            while ( DestinationString.Buffer[v22] );
            v56 += v22 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_109;
            v21 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
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
                                                        (_DWORD)v64,
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
                                                        (_DWORD)v64,
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
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v64, (wchar_t *)Buffer, 1, v54) < 0 )
              goto LABEL_84;
            v24 = (__int128 *)(*(_QWORD *)(v26[3] + 16LL) + 28LL * v54[0]);
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
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    if ( !v17 )
      goto LABEL_91;
    goto LABEL_90;
  }
  return (unsigned int)InstallUILanguage;
}
