/*
 * XREFs of PiDevCfgQueryMinWhcpVersion @ 0x140728EB4
 * Callers:
 *     PiDevCfgReadDriverPolicy @ 0x1407292E8 (PiDevCfgReadDriverPolicy.c)
 * Callees:
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgParseVersionString @ 0x1407285BC (PiDevCfgParseVersionString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryMinWhcpVersion(HANDLE a1)
{
  HANDLE v1; // rdi
  int RegistryValue; // eax
  unsigned int *v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h]

  Handle = 0LL;
  P = 0LL;
  v7 = -1LL;
  v1 = a1;
  v5 = 0LL;
  if ( a1 )
  {
    Handle = a1;
  }
  else
  {
    LODWORD(v5) = 9699474;
    *((_QWORD *)&v5 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP\\DriverRestrictions";
    if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, &v5, 131097LL) < 0 )
      goto LABEL_11;
    a1 = Handle;
  }
  RegistryValue = IopGetRegistryValue(a1);
  v3 = (unsigned int *)P;
  if ( RegistryValue >= 0
    && PnpValidateRegistryString(P)
    && !PiDevCfgParseVersionString((const wchar_t *)((char *)v3 + v3[2]), 0, &v7) )
  {
    v7 = -1LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_11:
  if ( Handle && Handle != v1 )
    ZwClose(Handle);
  return v7;
}
