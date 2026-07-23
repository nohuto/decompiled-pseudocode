/*
 * XREFs of LdrpQueryValueKey @ 0x1407840B0
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A31C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406A372C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14082BC48 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14082BF64 (RtlpLoadPolicyLanguageSpec.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082E2A8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v11; // ebp
  ULONG Length; // ebp
  _DWORD *Pool2; // rsi
  unsigned int v14; // edi
  NTSTATUS v15; // eax
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( a4 )
  {
    if ( !a5 )
      return 3221225485LL;
  }
  else if ( !a5 )
  {
    ResultLength = 0;
    Length = 12;
    goto LABEL_8;
  }
  v11 = *a5;
  ResultLength = 0;
  Length = v11 + 12;
  if ( Length )
  {
LABEL_8:
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, Length, 0x72746C6Du);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v15 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    v14 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -2147483643 )
      {
LABEL_22:
        ExFreePoolWithTag(Pool2, 0);
        return v14;
      }
    }
    else if ( a4 )
    {
      if ( !v5 )
        goto LABEL_20;
      v16 = Pool2[2];
      if ( v16 <= *v5 )
      {
        if ( v16 <= Length )
          memmove(a4, Pool2 + 3, (unsigned int)Pool2[2]);
      }
      else
      {
        v14 = -2147483643;
      }
LABEL_19:
      *v5 = Pool2[2];
LABEL_20:
      if ( a3 )
        *a3 = Pool2[1];
      goto LABEL_22;
    }
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_19;
  }
  return (unsigned int)-1073741670;
}
