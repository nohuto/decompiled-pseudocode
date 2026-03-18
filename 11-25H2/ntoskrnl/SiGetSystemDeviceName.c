/*
 * XREFs of SiGetSystemDeviceName @ 0x140A407A8
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1406EAF2C (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x140805DB0 (SyspartDirectGetFirmwareSystemPartition.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     SyspartDirectGetSystemDisk @ 0x140A40750 (SyspartDirectGetSystemDisk.c)
 *     SyspartDirectGetSystemPartition @ 0x140A40780 (SyspartDirectGetSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x140A7CCCC (SyspartGetSystemPartition.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SiGetFirmwareType @ 0x140A4086C (SiGetFirmwareType.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int FirmwareType; // eax
  int v8; // esi
  __int64 v9; // rbx
  unsigned int v10; // ebx

  *a4 = 0;
  FirmwareType = SiGetFirmwareType();
  v8 = guard_dispatch_icall_no_overrides(FirmwareType);
  if ( v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(2 * v9) );
    v10 = 2 * v9 + 2;
    if ( a2 && a3 >= v10 )
    {
      v8 = 0;
      memmove(a2, 0LL, v10);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v10;
  }
  return (unsigned int)v8;
}
