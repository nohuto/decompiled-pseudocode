/*
 * XREFs of SiGetFirmwareSystemPartition @ 0x140A222B0
 * Callers:
 *     SiGetSystemPartition @ 0x140A22340 (SiGetSystemPartition.c)
 * Callees:
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x1408174E0 (SiGetBiosSystemPartition.c)
 *     SiIsWinPEBoot @ 0x140A22390 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140A226F4 (SiTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetFirmwareSystemPartition(int a1, wchar_t **a2)
{
  __int64 v4; // rdx
  char IsWinPEBoot; // bp
  int v6; // r8d
  unsigned int BootDeviceName; // ebx
  int BiosSystemPartition; // eax
  int v10; // r8d
  int v11; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v11 = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot
    || (LOBYTE(v6) = 1,
        BootDeviceName = SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v6, 0, 0, (__int64)a2),
        (BootDeviceName & 0x80000000) != 0) )
  {
    if ( a1 == 1 )
    {
      BiosSystemPartition = SiGetBiosSystemPartition(a2);
    }
    else
    {
      if ( a1 != 2 )
        return (unsigned int)-1073741637;
      BiosSystemPartition = SiGetEfiSystemDevice(1u, v4, a2);
    }
    if ( BiosSystemPartition >= 0 )
    {
      BootDeviceName = SiTranslateSymbolicLink(*a2);
      if ( (BootDeviceName & 0x80000000) == 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = v12;
        return BootDeviceName;
      }
    }
    else
    {
      BootDeviceName = BiosSystemPartition;
      if ( BiosSystemPartition != -1073740719 )
        return BootDeviceName;
      if ( !IsWinPEBoot )
        return BootDeviceName;
      if ( a1 != 2 )
        return BootDeviceName;
      LOBYTE(v10) = 1;
      if ( (int)SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v10, (unsigned int)&v11, 1, (__int64)a2) < 0 )
        return BootDeviceName;
    }
    return 0;
  }
  return BootDeviceName;
}
