/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x1800B0060
 * Callers:
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AF9C4 (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpFusionManifestCodePages @ 0x1800AFF58 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     RtlpFindUnicodeStringInSection @ 0x180019C70 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001A3B0 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryActivationContextApplicationSettings(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PWSTR SettingsNameSpace,
        PWSTR SettingName,
        PWSTR Buffer,
        SIZE_T BufferLength,
        PSIZE_T RequiredLength)
{
  PWSTR v7; // rsi
  __int64 v9; // rcx
  char *NotificationContext; // rax
  char *v11; // rcx
  NTSTATUS UnicodeStringInSection; // ebx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  size_t v15; // rax
  unsigned int *v16; // rdi
  char *v17; // rax
  signed __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v22; // [rsp+40h] [rbp-61h] BYREF
  int v23; // [rsp+44h] [rbp-5Dh] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-41h] BYREF
  int v27; // [rsp+64h] [rbp-3Dh] BYREF
  unsigned int *v28; // [rsp+68h] [rbp-39h]
  unsigned int v29; // [rsp+100h] [rbp+5Fh] BYREF

  v29 = 0;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v24 = 0LL;
  v23 = -1;
  v22 = 0;
  if ( SettingsNameSpace )
    v7 = SettingsNameSpace;
  if ( !Buffer && BufferLength )
    return -1073741811;
  if ( !ActivationContext )
  {
    v9 = 760LL;
LABEL_6:
    NotificationContext = *(char **)(&NtCurrentPeb()->InheritedAddressSpace + v9);
    goto LABEL_7;
  }
  if ( ActivationContext == (PACTIVATION_CONTEXT)-3LL )
  {
    v11 = "Actx ";
    goto LABEL_9;
  }
  if ( ActivationContext == (PACTIVATION_CONTEXT)-4LL )
  {
    v9 = 776LL;
    goto LABEL_6;
  }
  NotificationContext = (char *)ActivationContext->NotificationContext;
LABEL_7:
  v11 = "Actx ";
  if ( NotificationContext )
    v11 = NotificationContext;
LABEL_9:
  UnicodeStringInSection = RtlpLocateActivationContextSection(v11, 0LL, 0xAu, &v24, &v29);
  if ( UnicodeStringInSection >= 0 )
  {
    v13 = v29;
    v14 = (__int64)v24;
    if ( v29 < 0x2C || *v24 != 1682469715 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
        v24,
        v29);
      return -1072365565;
    }
    v25[0] = 0LL;
    v25[1] = SettingName;
    if ( SettingName )
    {
      v15 = 2 * wcslen(SettingName);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      LOWORD(v25[0]) = v15;
      WORD1(v25[0]) = v15 + 2;
    }
    memset_thunk_772440563353939046(&v27, 0, 0x6CuLL);
    v26 = 112;
    UnicodeStringInSection = RtlpFindUnicodeStringInSection(v14, v13, (unsigned __int16 *)v25, &v26, &v23, &v22);
    if ( UnicodeStringInSection >= 0 )
    {
      if ( v27 == 1 )
      {
        v16 = v28;
        v17 = (char *)v28 + v28[3];
        v18 = (char *)v7 - v17;
        do
        {
          v19 = *(unsigned __int16 *)&v17[v18];
          v20 = *(unsigned __int16 *)v17 - v19;
          if ( v20 )
            break;
          v17 += 2;
        }
        while ( v19 );
        if ( v20 )
          return -1072365560;
        if ( BufferLength < (unsigned __int64)v28[6] >> 1 )
          UnicodeStringInSection = -1073741789;
        else
          memmove(Buffer, (char *)v28 + v28[7], v28[6] + 2LL);
        if ( RequiredLength )
          *RequiredLength = ((unsigned __int64)v16[6] >> 1) + 1;
        goto LABEL_27;
      }
      return -1072365565;
    }
  }
LABEL_27:
  if ( UnicodeStringInSection == -1072365567 )
    return -1072365560;
  return UnicodeStringInSection;
}
