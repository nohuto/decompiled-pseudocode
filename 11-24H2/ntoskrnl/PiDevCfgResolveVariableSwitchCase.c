/*
 * XREFs of PiDevCfgResolveVariableSwitchCase @ 0x14072A040
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDevCfgCopyVariableData @ 0x140726FB8 (PiDevCfgCopyVariableData.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableSwitchCase(__int64 a1, void *a2, __int64 a3)
{
  unsigned int RegistryValue; // ebx
  int v7; // eax
  wchar_t *v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  NTSTATUS v13; // eax
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+38h] [rbp-28h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( (RegistryValue & 0x80000000) != 0 )
    return RegistryValue;
  if ( !PnpValidateRegistryString(0LL) )
    return (unsigned int)-1073741823;
  v7 = PiDevCfgResolveVariable(a1, MEMORY[8], &v14);
  RegistryValue = v7;
  if ( v7 < 0 )
  {
LABEL_5:
    if ( v7 != -1073741772 )
      return RegistryValue;
    return (unsigned int)-1073741823;
  }
  ExFreePoolWithTag(0LL, 0);
  if ( *(_DWORD *)(v14 + 32) != 1 && *(_DWORD *)(v14 + 32) != 2 )
  {
    if ( *(_DWORD *)(v14 + 32) == 4 )
    {
      v13 = RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v14 + 40));
      v8 = pszDest;
      if ( v13 < 0 )
        v8 = 0LL;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v14 + 32) != 7 )
      goto LABEL_17;
  }
  v8 = *(wchar_t **)(v14 + 40);
LABEL_12:
  if ( v8 )
  {
    v9 = IopGetRegistryValue(a2);
    RegistryValue = v9;
    if ( v9 != -1073741772 )
    {
      if ( v9 < 0 )
        return RegistryValue;
      if ( !PnpValidateRegistryString(0LL) )
        return (unsigned int)-1073741823;
      v10 = MEMORY[8];
      if ( MEMORY[8] )
      {
LABEL_26:
        v7 = PiDevCfgResolveVariable(a1, v10, &v15);
        RegistryValue = v7;
        if ( v7 >= 0 )
          return (unsigned int)PiDevCfgCopyVariableData(a3, v15);
        goto LABEL_5;
      }
    }
  }
LABEL_17:
  v11 = IopGetRegistryValue(a2);
  RegistryValue = v11;
  if ( v11 >= 0 )
  {
    if ( !PnpValidateRegistryString(0LL) )
      return (unsigned int)-1073741823;
    v10 = MEMORY[8];
    goto LABEL_26;
  }
  if ( v11 == -1073741772 )
    return (unsigned int)-1073741823;
  return RegistryValue;
}
