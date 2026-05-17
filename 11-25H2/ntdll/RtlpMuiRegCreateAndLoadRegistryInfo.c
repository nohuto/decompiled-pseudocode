/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180059D10 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800FB580 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     GetGlobalizationUserModelType @ 0x18008C6B8 (GetGlobalizationUserModelType.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800A6E70 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x1800ED8D0 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x18011A200 (RtlpMuiRegCreateRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1801651F0 (ZwGetMUIRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 Heap; // rax
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Installed; // edi
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  void *RegistryInfo; // rax
  int LicInformation; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int128 v31; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v32[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v33; // [rsp+50h] [rbp-10h]
  unsigned int v34; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE v37; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  Handle = 0LL;
  if ( !a1 || *a1 )
  {
    Installed = -1073741811;
    goto LABEL_29;
  }
  v34 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v34, 0LL) >= 0 )
  {
    if ( !v34 )
    {
LABEL_48:
      Installed = -1073741801;
      goto LABEL_29;
    }
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v34);
    v4 = Heap;
    if ( !Heap )
    {
      v2 = Handle;
      goto LABEL_48;
    }
    if ( (int)ZwGetMUIRegistryInfo(0LL, &v34, Heap) >= 0
      && (int)RtlpMuiRegDeserializeRegistryInfo(v4, v34, &Handle) >= 0 )
    {
      v2 = Handle;
      Installed = RtlpMuiRegAddNeutralToInstalled(Handle);
      if ( Installed >= 0 )
      {
        if ( !v2[5] )
          goto LABEL_37;
        Handle = 0LL;
        v31 = 0LL;
        v37 = 0LL;
        v10 = GetGlobalizationUserModelType(v7, v6) - 1;
        if ( v10 )
        {
          v12 = v10 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              LODWORD(v35) = 0;
              v13 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v11, (__int64)&Handle, &v35);
              goto LABEL_32;
            }
LABEL_37:
            v35 = 0LL;
            RtlpMuiRegFreeRegistryInfo((__int64)v2, 8u, v9, v5);
            if ( (int)RtlpLoadLanguageConfigList(8LL, &v35, v2) >= 0 )
            {
              v27 = v35;
              if ( v35 )
              {
                *(_DWORD *)v2 |= 8u;
                v2[6] = v27;
              }
              RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x20u, v25, v26);
              if ( (int)RtlpSetProcUserMachineLangList((__int64)v2, 1u) >= 0 )
              {
                RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x10u, v28, v29);
                RtlpSetProcUserMachineLangList((__int64)v2, 0);
              }
            }
            goto LABEL_29;
          }
          v13 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &Handle);
        }
        else
        {
          v13 = RtlOpenCurrentUser(0x2000000u, (__int64)&Handle);
        }
LABEL_32:
        if ( v13 >= 0 )
        {
          DWORD1(v31) = 0;
          *((_QWORD *)&v31 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
          v22 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          v32[0] = 48LL;
          v32[3] = 64LL;
          if ( v22 >= 0xFFFE )
            LOWORD(v22) = -4;
          LOWORD(v31) = v22;
          WORD1(v31) = v22 + 2;
          v32[1] = Handle;
          v32[2] = &v31;
          v33 = 0LL;
          if ( (int)NtOpenKey(&v37, 131097LL, v32) >= 0 )
          {
            v35 = 0LL;
            RtlpMuiRegFreeRegistryInfo((__int64)v2, 4u, v23, v24);
            if ( (int)RtlpLoadLanguageConfigList(4LL, &v35, v2) >= 0 )
            {
              v30 = v35;
              if ( v35 )
              {
                *(_DWORD *)v2 |= 4u;
                v2[5] = v30;
              }
            }
            NtClose(v37);
          }
          NtClose(Handle);
        }
        goto LABEL_37;
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v5);
  }
  RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
  Handle = RegistryInfo;
  v2 = RegistryInfo;
  if ( !RegistryInfo )
    goto LABEL_48;
  v35 = 0LL;
  LicInformation = RtlpMuiRegLoadLicInformation((__int64)RegistryInfo);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  Installed = RtlpMuiRegLoadInstalled(v2);
  if ( Installed < 0 )
    goto LABEL_19;
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 4u, v16, v17);
  Installed = RtlpLoadLanguageConfigList(4LL, &v35, v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v19 = v35;
  if ( v35 )
  {
    *(_DWORD *)v2 |= 4u;
    v2[5] = v19;
    v35 = 0LL;
  }
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 8u, v16, v17);
  Installed = RtlpLoadLanguageConfigList(8LL, &v35, v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v20 = v35;
  if ( v35 )
  {
    *(_DWORD *)v2 |= 8u;
    v2[6] = v20;
  }
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x20u, v16, v17);
  Installed = RtlpSetProcUserMachineLangList((__int64)v2, 1u);
  if ( Installed < 0
    || (RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x10u, v16, v17),
        Installed = RtlpSetProcUserMachineLangList((__int64)v2, 0),
        Installed < 0) )
  {
LABEL_19:
    RtlpMuiRegFreeRegistryInfo((__int64)v2, 0xFFFu, v16, v17);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Handle, v18);
    v2 = 0LL;
  }
  else
  {
    Installed = 0;
    *((_DWORD *)v2 + 3) = MEMORY[0x7FFE03A4];
  }
LABEL_29:
  *a1 = v2;
  return (unsigned int)Installed;
}
