/*
 * XREFs of BiGetSystemPartition @ 0x1406F46F0
 * Callers:
 *     BcdGetSystemStorePath @ 0x140A57798 (BcdGetSystemStorePath.c)
 * Callees:
 *     SyspartGetFirmwarePartition @ 0x1406F4790 (SyspartGetFirmwarePartition.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  void *Pool2; // rax
  void *v5; // rdi

  FirmwarePartition = SyspartGetFirmwarePartition(0LL);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x102uLL, 0LL, 0x4B444342u);
    v5 = Pool2;
    if ( Pool2 )
    {
      v3 = SyspartGetFirmwarePartition(Pool2);
      if ( v3 >= 0 )
        *a1 = v5;
      else
        ExFreePoolWithTag(v5, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( FirmwarePartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
