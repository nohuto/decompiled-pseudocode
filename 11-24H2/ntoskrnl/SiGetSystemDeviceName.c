/*
 * XREFs of SiGetSystemDeviceName @ 0x140A3A6D8
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1406F4790 (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x1408163F0 (SyspartDirectGetFirmwareSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x140A3A680 (SyspartDirectGetSystemDisk.c)
 *     SyspartDirectGetSystemPartition @ 0x140A3A6B0 (SyspartDirectGetSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x140A7A9EC (SyspartGetSystemPartition.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SiGetFirmwareType @ 0x140A3A79C (SiGetFirmwareType.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int FirmwareType; // eax
  int v8; // esi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 0;
  P[0] = 0LL;
  FirmwareType = SiGetFirmwareType();
  v8 = guard_dispatch_icall_no_overrides(FirmwareType, P);
  if ( v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)P[0] + v9) );
    v10 = 2 * v9 + 2;
    if ( a2 && a3 >= v10 )
    {
      v8 = 0;
      memmove(a2, P[0], v10);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v10;
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v8;
}
