/*
 * XREFs of PiDevCfgVerifyService @ 0x1409C8528
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgVerifyService(PCWSTR SourceString, bool *a2, _DWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // r15d
  int RegistryValue; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rcx
  unsigned int *v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  LOBYTE(v3) = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  v6 = 4;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &v13);
    if ( RegistryValue >= 0 )
    {
      if ( PnpValidateRegistryDword(v13) )
        v3 = *(unsigned int *)((char *)v8 + v8[2]);
      else
        RegistryValue = -1073741823;
      ExFreePoolWithTag(v8, 0);
      if ( RegistryValue >= 0 )
      {
        if ( (v3 & 0xB) == 0 )
          goto LABEL_12;
        RegistryValue = IopGetRegistryValue(Handle, L"Start", 0, &v13);
        if ( RegistryValue < 0 )
          goto LABEL_26;
        if ( PnpValidateRegistryDword(v13) )
          v6 = *(unsigned int *)((char *)v9 + v9[2]);
        else
          RegistryValue = -1073741823;
        ExFreePoolWithTag(v9, 0);
        if ( RegistryValue < 0 )
          goto LABEL_26;
        if ( v6 <= 4 )
        {
          if ( a2 )
            *a2 = v6 == 0;
          if ( a3 && IopGetRegistryValue(Handle, L"PnpFlags", 0, &v13) >= 0 )
          {
            if ( PnpValidateRegistryDword(v13) )
              *a3 = *(unsigned int *)((char *)v10 + v10[2]);
            ExFreePoolWithTag(v10, 0);
          }
        }
        else
        {
LABEL_12:
          RegistryValue = -1073741823;
        }
      }
    }
  }
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValue;
}
