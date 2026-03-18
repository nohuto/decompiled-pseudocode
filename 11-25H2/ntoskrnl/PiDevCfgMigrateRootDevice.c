/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x14071E830
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C6B90 (PnpValidateRegistryDword.c)
 *     PnpRegistryValueExists @ 0x1405A3830 (PnpRegistryValueExists.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14071E924 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(int a1, __int64 a2, __int64 a3)
{
  const WCHAR *v5; // rcx
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  unsigned int *v9; // rcx
  UNICODE_STRING v11; // [rsp+30h] [rbp-10h] BYREF

  v5 = *(const WCHAR **)(a2 + 8);
  v6 = a2;
  v11 = 0LL;
  LOBYTE(v7) = 0;
  v8 = PiDevCfgOpenDeviceMigrationKey(v5);
  if ( v8 >= 0 )
  {
    if ( (int)IopGetRegistryValue(0LL) < 0 )
      return (unsigned int)-1073741823;
    if ( PnpValidateRegistryDword(0LL) )
      v7 = *(unsigned int *)((char *)v9 + v9[2]);
    ExFreePoolWithTag(v9, 0);
    if ( (v7 & 1) == 0 )
      return (unsigned int)-1073741823;
    v11.Buffer = L"DriverInfName";
    *(_DWORD *)&v11.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v11) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, v6, 0, 0, a3, 0LL);
  }
  return (unsigned int)v8;
}
