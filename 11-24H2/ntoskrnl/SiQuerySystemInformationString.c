/*
 * XREFs of SiQuerySystemInformationString @ 0x140A7FFF8
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1406F6790 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x140A7FF8C (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // esi
  int SystemInformation; // eax
  int v9; // ebx
  __int64 Pool2; // rax
  const void **v11; // rdi
  unsigned int v12; // eax

  v7 = a1;
  SystemInformation = ZwQuerySystemInformation(a1, 0LL);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v11 = (const void **)Pool2;
    if ( Pool2 )
    {
      v9 = ZwQuerySystemInformation(v7, Pool2);
      if ( v9 >= 0 )
      {
        v12 = *(unsigned __int16 *)v11 + 2;
        *a4 = v12;
        if ( v12 <= a3 )
          memmove(a2, v11[1], v12);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
