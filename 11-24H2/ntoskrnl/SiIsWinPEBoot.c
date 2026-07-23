/*
 * XREFs of SiIsWinPEBoot @ 0x140A22390
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140817628 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetSystemDisk @ 0x140A22200 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A222B0 (SiGetFirmwareSystemPartition.c)
 * Callees:
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     SiGetRegistryValue @ 0x140A2289C (SiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall SiIsWinPEBoot(int a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // di
  wchar_t *v5; // rbx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  Str = 0LL;
  v7 = 0;
  if ( (int)SiGetRegistryValue(
              a1,
              (unsigned int)L"SystemStartOptions",
              (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              a4,
              (__int64)&Str,
              (__int64)&v7) >= 0 )
  {
    v5 = wcsstr(Str, L"MININT");
    ExFreePoolWithTag(Str, 0);
    return v5 != 0LL;
  }
  return v4;
}
