/*
 * XREFs of ExpSetPendingUILanguage @ 0x140A6EE30
 * Callers:
 *     NtSetDefaultUILanguage @ 0x140A6EE10 (NtSetDefaultUILanguage.c)
 * Callees:
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B067C (DownLevelLangIDToLanguageName.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1404CB5C4 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14069B3A0 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14069CCC0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtQueryInstallUILanguage @ 0x140A5AF10 (NtQueryInstallUILanguage.c)
 */

NTSTATUS ExpSetPendingUILanguage()
{
  unsigned __int64 v0; // rbp
  char v1; // r12
  char v2; // r13
  __int64 v3; // rdx
  int v4; // ecx
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  NTSTATUS InstallUILanguage; // ebx
  int v12; // eax
  ULONG v13; // ebx
  ULONG v14; // r15d
  void *v15; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rax
  unsigned int v18; // ecx
  void *v19; // rcx
  NTSTATUS v20; // esi
  ULONG v21; // esi
  ULONG v22; // edx
  __int64 v23; // r14
  void *v24; // rcx
  void *v25; // rcx
  LANGID InstallUILanguageId[2]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v0 + 52) = 0;
  *(_DWORD *)(v0 + 76) = 0;
  *(_OWORD *)(v0 + 32) = 0LL;
  *(_OWORD *)(v0 + 96) = 0LL;
  *(_OWORD *)(v0 + 136) = 0LL;
  *(_QWORD *)(v0 + 112) = 0LL;
  *(_QWORD *)(v0 + 16) = 0LL;
  memset_0((void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 416), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  v1 = 1;
  v2 = 0;
  result = OpenGlobalizationUserSettingsKey(
             v4,
             v3,
             (HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 112));
  if ( result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                  + 0x70);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                      + 32;
  *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  Key = ZwOpenKey((PHANDLE)(v0 + 128), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48));
  *(_DWORD *)v0 = Key;
  if ( Key < 0 )
    goto LABEL_15;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
         (PUNICODE_STRING)(v0 + 96),
         KeyValuePartialInformation,
         (PVOID)(v0 + 160),
         0x100u,
         (PULONG)(v0 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) >= 4u
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA4) == 7 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"PreferredUILanguages");
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
           (PUNICODE_STRING)(v0 + 96),
           0,
           7u,
           (PVOID)(v0 + 172),
           *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8)) >= 0 )
    {
      v2 = 1;
      v18 = *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8);
      if ( v18 + 12 < 0x100 )
      {
        *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                 + 0xAA
                 + 2 * ((unsigned __int64)v18 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"PreferredUILanguagesPending");
        ZwDeleteValueKey(
          *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
          (PUNICODE_STRING)(v0 + 96));
        RtlInitUnicodeString((PUNICODE_STRING)(v0 + 136), (PCWSTR)(v0 + 172));
        RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"Control Panel\\Desktop\\LanguageConfigurationPending");
        *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
        *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
        *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                            + 32;
        *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
        if ( ZwOpenKey((PHANDLE)(v0 + 120), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48)) >= 0
          && ZwQueryValueKey(
               *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
               (PUNICODE_STRING)(v0 + 136),
               KeyValuePartialInformation,
               (PVOID)(v0 + 608),
               0x210u,
               (PULONG)(v0 + 4)) >= 0
          && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x264) == 7 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"Control Panel\\Desktop\\LanguageConfiguration");
          *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
          *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
          *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
          *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                              + 32;
          *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
          if ( ZwCreateKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48), 0, 0LL, 0, 0LL) >= 0 )
          {
            if ( ZwSetValueKey(
                   *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                   (PUNICODE_STRING)(v0 + 136),
                   0,
                   7u,
                   (PVOID)(v0 + 620),
                   *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x268)) >= 0 )
              ZwDeleteValueKey(
                *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
                (PUNICODE_STRING)(v0 + 136));
            ZwClose(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
          }
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                  + 0x70);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                      + 32;
  *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  ZwOpenKey((PHANDLE)(v0 + 8), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48));
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 32),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                      + 32;
  *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v0 + 16), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 48)) < 0 )
  {
    if ( *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"MachinePreferredUILanguages");
      ZwDeleteValueKey(
        *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8),
        (PUNICODE_STRING)(v0 + 96));
    }
LABEL_12:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"MachineLanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
    *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
    *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 32;
    *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 24), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48)) >= 0 )
    {
      v13 = 0;
      do
      {
        memset_0((void *)(v0 + 160), 0, 0x100uLL);
        v20 = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                v13,
                KeyValueBasicInformation,
                (PVOID)(v0 + 160),
                0xFEu,
                (PULONG)(v0 + 4));
        if ( v20 >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), (PCWSTR)(v0 + 172));
          if ( ZwDeleteValueKey(
                 *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                 (PUNICODE_STRING)(v0 + 96)) < 0 )
          {
            DbgPrint(
              "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
              (const wchar_t *)(v0 + 172));
            ++v13;
          }
        }
      }
      while ( v20 >= 0 );
    }
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 32),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
    *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
    *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
    *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 32;
    *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 16), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 48)) >= 0 )
    {
      v14 = 0;
      do
      {
        v21 = v14;
        memset_0((void *)(v0 + 608), 0, 0x210uLL);
        v22 = v14++;
        Key = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                v22,
                KeyValueFullInformation,
                (PVOID)(v0 + 608),
                0x20Eu,
                (PULONG)(v0 + 4));
        *(_DWORD *)v0 = Key;
        if ( Key >= 0 )
        {
          v23 = *(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x270);
          if ( (unsigned __int64)(v23 + 24) <= 0x210
            && (unsigned int)*(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x26C)
             + (unsigned int)*(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x268) <= 0x210
            && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x264) == 7
            && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x270) < 0xAAu )
          {
            memset_0((void *)(v0 + 416), 0, 0xAAuLL);
            memmove((void *)(v0 + 416), (const void *)(v0 + 628), (unsigned int)v23);
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), (PCWSTR)(v0 + 416));
            v24 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            if ( !v24 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"MachineLanguageConfiguration");
              *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
              *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
              *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
              *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 32;
              *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
              Key = ZwCreateKey((PHANDLE)(v0 + 24), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48), 0, 0LL, 1u, 0LL);
              *(_DWORD *)v0 = Key;
              if ( Key < 0 )
                goto LABEL_15;
              v1 = 0;
              v24 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
            Key = ZwSetValueKey(
                    v24,
                    (PUNICODE_STRING)(v0 + 96),
                    0,
                    7u,
                    (PVOID)(*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x268)
                          + ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                          + 608),
                    *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x26C));
            *(_DWORD *)v0 = Key;
            if ( Key < 0 )
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v0 + 416));
              Key = 0;
              *(_DWORD *)v0 = 0;
            }
          }
          else
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v21);
          }
        }
      }
      while ( Key >= 0 );
      ZwClose(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    }
    else
    {
      Key = 0;
      *(_DWORD *)v0 = 0;
    }
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"PreferredUILanguages");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
         (PUNICODE_STRING)(v0 + 96),
         KeyValuePartialInformation,
         (PVOID)(v0 + 160),
         0x100u,
         (PULONG)(v0 + 4)) < 0
    || *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) < 4u
    || *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA4) != 7 )
  {
    *(_WORD *)v0 = 0;
    *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 0;
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL));
    if ( InstallUILanguage >= 0 )
    {
      v12 = DownLevelLangIDToLanguageName(*(_WORD *)v0, (unsigned __int16 *)(v0 + 172), 128, 0);
      *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = v12;
      if ( !v12 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_55;
      }
      *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 2 * v12;
    }
    if ( InstallUILanguage >= 0 )
      goto LABEL_8;
LABEL_55:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    v19 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v19 )
      ZwDeleteValueKey(v19, (PUNICODE_STRING)(v0 + 96));
    goto LABEL_11;
  }
LABEL_8:
  if ( *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
    goto LABEL_9;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 32), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                  + 0x70);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1600;
  *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                      + 32;
  *(_OWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  Key = ZwCreateKey((PHANDLE)(v0 + 8), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 48), 0, 0LL, 1u, 0LL);
  *(_DWORD *)v0 = Key;
  if ( Key >= 0 )
  {
LABEL_9:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 96), L"MachinePreferredUILanguages");
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8),
           (PUNICODE_STRING)(v0 + 96),
           0,
           7u,
           (PVOID)(v0 + 172),
           *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8)) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
LABEL_11:
    ZwClose(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    goto LABEL_12;
  }
LABEL_15:
  v7 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
  if ( v7 )
    ZwClose(v7);
  v8 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
  if ( v8 )
  {
    if ( ZwEnumerateValueKey(v8, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78));
    ZwClose(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x78));
  }
  if ( *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
  {
    v15 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    if ( !v15 || v1 && ZwEnumerateValueKey(v15, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
    {
      v25 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      if ( v25 )
        ZwDeleteKey(v25);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v0 + 4)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8));
  }
  v9 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v9 )
    ZwClose(v9);
  v10 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
  if ( v10 )
    ZwClose(v10);
  if ( v2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1530] = 0;
  }
  return Key;
}
