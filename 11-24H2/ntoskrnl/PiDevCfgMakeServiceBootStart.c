/*
 * XREFs of PiDevCfgMakeServiceBootStart @ 0x1407281D8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140A3FBB8 (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMakeServiceBootStart(PCWSTR SourceString)
{
  NTSTATUS RegistryValue; // ebx
  char *v2; // rdi
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  char *v7; // rbx
  char Data; // [rsp+20h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  v13 = 4;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&v11.Length = 0LL;
  DestinationString = 0LL;
  v11.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  Data = 0;
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 131103LL, &KeyHandle, 0LL, Data);
  if ( RegistryValue < 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( RegistryValue < 0 )
    goto LABEL_14;
  v2 = (char *)P;
  if ( !PnpValidateRegistryDword((__int64)P) )
  {
LABEL_4:
    RegistryValue = -1073741823;
    goto LABEL_15;
  }
  v13 = *(_DWORD *)&v2[*((unsigned int *)v2 + 2)];
  ExFreePoolWithTag(v3, 0);
  P = 0LL;
  if ( (v13 & 0xFFFFFFFB) == 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( RegistryValue < 0 )
  {
LABEL_14:
    v2 = (char *)P;
  }
  else
  {
    v2 = (char *)P;
    if ( (unsigned int)(*((_DWORD *)P + 1) - 1) > 1
      || !PnpValidateStringData((__int64)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3)) )
    {
      goto LABEL_4;
    }
    LODWORD(P) = 0;
    PnpRegSzToString(v5, v4, &P);
    v6 = *((_WORD *)v2 + 6);
    v7 = &v2[*((unsigned int *)v2 + 2)];
    String2.Length = (unsigned __int16)P;
    String2.Buffer = (wchar_t *)v7;
    String2.MaximumLength = v6;
    if ( RtlPrefixUnicodeString(&PiDevCfgSystemRoot, &String2, 1u) )
    {
      RtlInitUnicodeString(&v11, (PCWSTR)v7 + 12);
      *(_DWORD *)&DestinationString.Length = 1310738;
      DestinationString.Buffer = L"ImagePath";
      RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, *((_DWORD *)v2 + 1), v11.Buffer, v11.Length + 2);
      if ( RegistryValue < 0 )
        goto LABEL_15;
    }
    else if ( !RtlPrefixUnicodeString(&PiDevCfgSystem32, &String2, 1u) )
    {
      goto LABEL_4;
    }
    *(_DWORD *)&DestinationString.Length = 786442;
    DestinationString.Buffer = L"Start";
    v13 = 0;
    RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v13, 4u);
  }
LABEL_15:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
