/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180031240 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800F97E0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     GetGlobalizationUserModelType @ 0x180034D28 (GetGlobalizationUserModelType.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800D237C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x1800ED250 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180116FC0 (RtlpMuiRegCreateRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x18011F248 (_RtlpMuiRegLoadInstalled.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180163C60 (ZwGetMUIRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 Heap; // rax
  unsigned __int64 v4; // rsi
  int Installed; // edi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  void *RegistryInfo; // rax
  int LicInformation; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-10h]
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE v24; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  Handle = 0LL;
  if ( !a1 || *a1 )
  {
    Installed = -1073741811;
    goto LABEL_29;
  }
  v21 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v21, 0LL) >= 0 )
  {
    if ( !v21 )
    {
LABEL_48:
      Installed = -1073741801;
      goto LABEL_29;
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v21);
    v4 = Heap;
    if ( !Heap )
    {
      v2 = Handle;
      goto LABEL_48;
    }
    if ( (int)ZwGetMUIRegistryInfo(0LL, &v21, Heap) >= 0
      && (int)RtlpMuiRegDeserializeRegistryInfo(v4, v21, &Handle) >= 0 )
    {
      v2 = Handle;
      Installed = RtlpMuiRegAddNeutralToInstalled(Handle);
      if ( Installed >= 0 )
      {
        if ( !v2[5] )
          goto LABEL_37;
        Handle = 0LL;
        v18 = 0LL;
        v24 = 0LL;
        v6 = GetGlobalizationUserModelType() - 1;
        if ( v6 )
        {
          v8 = v6 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              LODWORD(v22) = 0;
              v9 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v7, &Handle, &v22);
              goto LABEL_32;
            }
LABEL_37:
            v22 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 8LL);
            if ( (int)RtlpLoadLanguageConfigList(8u, &v22, (__int64)v2) >= 0 )
            {
              v16 = v22;
              if ( v22 )
              {
                *(_DWORD *)v2 |= 8u;
                v2[6] = v16;
              }
              RtlpMuiRegFreeRegistryInfo(v2, 32LL);
              if ( (int)RtlpSetProcUserMachineLangList((__int64)v2, 1LL) >= 0 )
              {
                RtlpMuiRegFreeRegistryInfo(v2, 16LL);
                RtlpSetProcUserMachineLangList((__int64)v2, 0LL);
              }
            }
            goto LABEL_29;
          }
          v9 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, &Handle);
        }
        else
        {
          v9 = RtlOpenCurrentUser(0x2000000u, (__int64)&Handle);
        }
LABEL_32:
        if ( v9 >= 0 )
        {
          DWORD1(v18) = 0;
          *((_QWORD *)&v18 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
          v15 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          v19[0] = 48LL;
          v19[3] = 64LL;
          if ( v15 >= 0xFFFE )
            LOWORD(v15) = -4;
          LOWORD(v18) = v15;
          WORD1(v18) = v15 + 2;
          v19[1] = Handle;
          v19[2] = &v18;
          v20 = 0LL;
          if ( (int)NtOpenKey(&v24, 131097LL, v19) >= 0 )
          {
            v22 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 4LL);
            if ( (int)RtlpLoadLanguageConfigList(4u, &v22, (__int64)v2) >= 0 )
            {
              v17 = v22;
              if ( v22 )
              {
                *(_DWORD *)v2 |= 4u;
                v2[5] = v17;
              }
            }
            NtClose(v24);
          }
          NtClose(Handle);
        }
        goto LABEL_37;
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
  Handle = RegistryInfo;
  v2 = RegistryInfo;
  if ( !RegistryInfo )
    goto LABEL_48;
  v22 = 0LL;
  LicInformation = RtlpMuiRegLoadLicInformation(RegistryInfo);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  Installed = RtlpMuiRegLoadInstalled(v2);
  if ( Installed < 0 )
    goto LABEL_19;
  RtlpMuiRegFreeRegistryInfo(v2, 4LL);
  Installed = RtlpLoadLanguageConfigList(4u, &v22, (__int64)v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v12 = v22;
  if ( v22 )
  {
    *(_DWORD *)v2 |= 4u;
    v2[5] = v12;
    v22 = 0LL;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 8LL);
  Installed = RtlpLoadLanguageConfigList(8u, &v22, (__int64)v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v13 = v22;
  if ( v22 )
  {
    *(_DWORD *)v2 |= 8u;
    v2[6] = v13;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 32LL);
  Installed = RtlpSetProcUserMachineLangList((__int64)v2, 1LL);
  if ( Installed < 0
    || (RtlpMuiRegFreeRegistryInfo(v2, 16LL), Installed = RtlpSetProcUserMachineLangList((__int64)v2, 0LL),
                                              Installed < 0) )
  {
LABEL_19:
    RtlpMuiRegFreeRegistryInfo(v2, 4095LL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Handle);
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
