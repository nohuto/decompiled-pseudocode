/*
 * XREFs of SiGetSystemDeviceName @ 0x140A44DA8
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1406F6790 (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x140815CB0 (SyspartDirectGetFirmwareSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x140A44D50 (SyspartDirectGetSystemDisk.c)
 *     SyspartDirectGetSystemPartition @ 0x140A44D80 (SyspartDirectGetSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x140A7FF8C (SyspartGetSystemPartition.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SiGetFirmwareType @ 0x140A44E6C (SiGetFirmwareType.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int FirmwareType; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // ebx
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 0;
  P[0] = 0LL;
  FirmwareType = SiGetFirmwareType();
  v10 = guard_dispatch_icall_no_overrides(FirmwareType, P, v8, v9);
  if ( v10 >= 0 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *((_WORD *)P[0] + v11) );
    v12 = 2 * v11 + 2;
    if ( a2 && a3 >= v12 )
    {
      v10 = 0;
      memmove(a2, P[0], v12);
    }
    else
    {
      v10 = -1073741789;
    }
    *a4 = v12;
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v10;
}
