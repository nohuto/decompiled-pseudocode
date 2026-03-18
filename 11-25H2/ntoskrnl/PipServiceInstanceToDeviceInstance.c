/*
 * XREFs of PipServiceInstanceToDeviceInstance @ 0x140716BD0
 * Callers:
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PnpConcatenateUnicodeStrings @ 0x14096AEA0 (PnpConcatenateUnicodeStrings.c)
 *     PipOpenServiceEnumKeys @ 0x1409B2784 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     PnpRegSzToString @ 0x140A44250 (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipServiceInstanceToDeviceInstance(__int64 a1, __int64 a2, unsigned int a3, UNICODE_STRING *a4)
{
  __int64 result; // rax
  int RegistryValue; // ebx
  _WORD *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rcx
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  wchar_t pszDest[20]; // [rsp+50h] [rbp-30h] BYREF

  P = 0LL;
  Handle = 0LL;
  SourceString = 0LL;
  if ( a1 )
  {
    *(_DWORD *)&SourceString.Length = 655368;
    SourceString.Buffer = L"Enum";
    result = IopOpenRegistryKeyEx(&Handle, a1, &SourceString, 131097LL);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 131097LL, 0LL, &Handle, 0);
  }
  if ( (int)result >= 0 )
  {
    RtlStringCbPrintfW(pszDest, 0x28uLL, L"%u", a3);
    RegistryValue = IopGetRegistryValue(Handle);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      v8 = P;
      if ( *((_DWORD *)P + 1) == 1 )
      {
        v9 = *((unsigned int *)P + 3);
        v10 = (char *)P + *((unsigned int *)P + 2);
        LODWORD(P) = 0;
        PnpRegSzToString(v10, v9, &P);
        SourceString.Length = (unsigned __int16)P;
        SourceString.MaximumLength = v8[6];
        SourceString.Buffer = (_WORD *)((char *)v8 + *((unsigned int *)v8 + 2));
        if ( !(_WORD)P )
          RegistryValue = -1073741766;
        if ( RegistryValue >= 0 )
        {
          if ( a4 )
            RegistryValue = PnpConcatenateUnicodeStrings(a4, &SourceString);
        }
      }
      else
      {
        RegistryValue = -1073741215;
      }
      ExFreePoolWithTag(v8, 0);
    }
    return (unsigned int)RegistryValue;
  }
  return result;
}
