/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082CCEC
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1406A3368 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14082CB9C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1406A36F4 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14082CE38 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x140AB5200 (RtlLCIDToCultureName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  LCID v4; // ebp
  char v8; // r14
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  __int64 v11; // r9
  __int64 i; // rcx
  _WORD *v13; // rdx
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  __int64 v16; // r8
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v8 = 0;
  String = 0LL;
  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 4096 )
    return result;
  v11 = *(_QWORD *)(a1 + 24);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (int)i >= *(unsigned __int16 *)(v11 + 6) )
    {
      v14 = (wchar_t *)MuiRegAllocArray(i, 0x55u);
      v15 = v14;
      if ( v14 )
      {
        if ( a3 )
        {
          String.Buffer = v14;
          *(_DWORD *)&String.Length = 11141120;
          if ( RtlLCIDToCultureName(v4, &String) )
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, String.Buffer, v16, a4);
        }
        ExFreePoolWithTag(v15, 0);
        if ( v8 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = (_WORD *)(*(_QWORD *)(v11 + 16) + 28LL * (int)i);
    if ( v13[2] == (_WORD)v4 )
      break;
LABEL_10:
    ;
  }
  if ( (*v13 & 0x1020) != 0x20 )
  {
    if ( (*v13 & 0x1000) != 0 )
      v8 = 1;
    goto LABEL_10;
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
