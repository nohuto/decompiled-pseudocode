/*
 * XREFs of SiGetSystemDisk @ 0x140A22200
 * Callers:
 *     <none>
 * Callees:
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemDisk @ 0x1408173B0 (SiGetBiosSystemDisk.c)
 *     SiIsWinPEBoot @ 0x140A22390 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140A226F4 (SiTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, wchar_t **a2)
{
  char IsWinPEBoot; // bp
  __int64 v5; // rdx
  int BootDeviceName; // ebx
  int v7; // r8d
  int BiosSystemDisk; // eax
  int v10; // r8d
  int v11; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v11 = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  BootDeviceName = SiGetBootDeviceName(0, (unsigned int)L"WindowsSysPartDevice", 0, 0, 0, (__int64)a2);
  if ( BootDeviceName < 0 )
  {
    if ( IsWinPEBoot
      || (LOBYTE(v7) = 1,
          BootDeviceName = SiGetBootDeviceName(0, (unsigned int)L"FirmwareBootDevice", v7, 0, 0, (__int64)a2),
          BootDeviceName < 0) )
    {
      if ( a1 == 1 )
      {
        BiosSystemDisk = SiGetBiosSystemDisk(a2);
      }
      else
      {
        if ( a1 != 2 )
          return (unsigned int)-1073741637;
        BiosSystemDisk = SiGetEfiSystemDevice(0, v5, a2);
      }
      if ( BiosSystemDisk >= 0 )
      {
        BootDeviceName = SiTranslateSymbolicLink(*a2);
        if ( BootDeviceName >= 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = v12;
          return (unsigned int)BootDeviceName;
        }
      }
      else
      {
        BootDeviceName = BiosSystemDisk;
        if ( BiosSystemDisk != -1073740719 )
          return (unsigned int)BootDeviceName;
        if ( !IsWinPEBoot )
          return (unsigned int)BootDeviceName;
        if ( a1 != 2 )
          return (unsigned int)BootDeviceName;
        LOBYTE(v10) = 1;
        if ( (int)SiGetBootDeviceName(0, (unsigned int)L"FirmwareBootDevice", v10, (unsigned int)&v11, 1, (__int64)a2) < 0 )
          return (unsigned int)BootDeviceName;
      }
      return 0;
    }
  }
  return (unsigned int)BootDeviceName;
}
