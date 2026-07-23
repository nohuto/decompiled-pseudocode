/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20
 * Callers:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x1800E61E0 (LdrpOpenKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, __int64 a2, unsigned __int64 *a3)
{
  NTSTATUS v6; // ebx
  HANDLE v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  HANDLE v12; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+38h] BYREF

  v12 = 0LL;
  Handle = 0LL;
  LODWORD(v14) = 0;
  DestinationString = 0LL;
  v6 = OpenGlobalizationUserSettingsKey(0x2000000LL, a2, &v12);
  if ( v6 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v7 = v12;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    v6 = LdrpOpenKey(&DestinationString, v12, 131097LL, &Handle);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v6 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v14);
      if ( v6 >= 0 )
        goto LABEL_10;
    }
    if ( v6 == -2147483643 )
      goto LABEL_10;
    NtClose(Handle);
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v7 = 0LL;
  }
  v6 = LdrpOpenKey(&DestinationString, v7, 131097LL, &Handle);
  if ( v6 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v6 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v14);
LABEL_10:
  if ( v6 != -1073741772 && (_DWORD)v14 )
  {
    if ( v6 == -2147483643 )
    {
      v8 = (unsigned int)(v14 + 1);
      v9 = (unsigned int)v8 >> 1;
      if ( !a2 )
      {
        v6 = 0;
LABEL_15:
        *a3 = v9;
        goto LABEL_21;
      }
      if ( *a3 < v8 >> 1 )
      {
        v6 = -1073741789;
        goto LABEL_15;
      }
      v6 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v14);
      if ( v6 >= 0 )
        goto LABEL_15;
    }
    else
    {
      v6 = -1073741772;
    }
  }
LABEL_21:
  if ( v12 )
  {
    NtClose(v12);
    v12 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
