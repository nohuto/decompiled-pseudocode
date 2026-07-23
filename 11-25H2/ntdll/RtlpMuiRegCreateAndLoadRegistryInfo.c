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
  PVOID Heap; // rax
  void *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Installed; // edi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  void *RegistryInfo; // rax
  int LicInformation; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    Installed = -1073741811;
    goto LABEL_29;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) >= 0 )
  {
    if ( !DataSize )
    {
LABEL_48:
      Installed = -1073741801;
      goto LABEL_29;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v4 = Heap;
    if ( !Heap )
    {
      v2 = BaseAddress;
      goto LABEL_48;
    }
    if ( ZwGetMUIRegistryInfo(0, &DataSize, Heap) >= 0
      && (int)RtlpMuiRegDeserializeRegistryInfo(v4, DataSize, &BaseAddress) >= 0 )
    {
      v2 = BaseAddress;
      Installed = RtlpMuiRegAddNeutralToInstalled(BaseAddress);
      if ( Installed >= 0 )
      {
        if ( !v2[5] )
          goto LABEL_37;
        BaseAddress = 0LL;
        v20 = 0LL;
        KeyHandle = 0LL;
        v8 = GetGlobalizationUserModelType(v6, v5) - 1;
        if ( v8 )
        {
          v10 = v8 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LODWORD(v23) = 0;
              v11 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v9, &BaseAddress, &v23);
              goto LABEL_32;
            }
LABEL_37:
            v23 = 0LL;
            RtlpMuiRegFreeRegistryInfo((__int64)v2, 8u);
            if ( (int)RtlpLoadLanguageConfigList(8u) >= 0 )
            {
              v18 = v23;
              if ( v23 )
              {
                *(_DWORD *)v2 |= 8u;
                v2[6] = v18;
              }
              RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x20u);
              if ( (int)RtlpSetProcUserMachineLangList((__int64)v2, 1u) >= 0 )
              {
                RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x10u);
                RtlpSetProcUserMachineLangList((__int64)v2, 0);
              }
            }
            goto LABEL_29;
          }
          v11 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &BaseAddress);
        }
        else
        {
          v11 = RtlOpenCurrentUser(0x2000000u, &BaseAddress);
        }
LABEL_32:
        if ( v11 >= 0 )
        {
          DWORD1(v20) = 0;
          *((_QWORD *)&v20 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
          v17 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
          if ( v17 >= 0xFFFE )
            LOWORD(v17) = -4;
          LOWORD(v20) = v17;
          WORD1(v20) = v17 + 2;
          ObjectAttributes.RootDirectory = BaseAddress;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v23 = 0LL;
            RtlpMuiRegFreeRegistryInfo((__int64)v2, 4u);
            if ( (int)RtlpLoadLanguageConfigList(4u) >= 0 )
            {
              v19 = v23;
              if ( v23 )
              {
                *(_DWORD *)v2 |= 4u;
                v2[5] = v19;
              }
            }
            NtClose(KeyHandle);
          }
          NtClose(BaseAddress);
        }
        goto LABEL_37;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
  BaseAddress = RegistryInfo;
  v2 = RegistryInfo;
  if ( !RegistryInfo )
    goto LABEL_48;
  v23 = 0LL;
  LicInformation = RtlpMuiRegLoadLicInformation((__int64)RegistryInfo);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  Installed = RtlpMuiRegLoadInstalled((int)v2);
  if ( Installed < 0 )
    goto LABEL_19;
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 4u);
  Installed = RtlpLoadLanguageConfigList(4u);
  if ( Installed < 0 )
    goto LABEL_19;
  v14 = v23;
  if ( v23 )
  {
    *(_DWORD *)v2 |= 4u;
    v2[5] = v14;
    v23 = 0LL;
  }
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 8u);
  Installed = RtlpLoadLanguageConfigList(8u);
  if ( Installed < 0 )
    goto LABEL_19;
  v15 = v23;
  if ( v23 )
  {
    *(_DWORD *)v2 |= 8u;
    v2[6] = v15;
  }
  RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x20u);
  Installed = RtlpSetProcUserMachineLangList((__int64)v2, 1u);
  if ( Installed < 0
    || (RtlpMuiRegFreeRegistryInfo((__int64)v2, 0x10u),
        Installed = RtlpSetProcUserMachineLangList((__int64)v2, 0),
        Installed < 0) )
  {
LABEL_19:
    RtlpMuiRegFreeRegistryInfo((__int64)v2, 0xFFFu);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
