/*
 * XREFs of SiQuerySystemInformationString @ 0x140A7CD38
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1406EAF2C (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x140A7CCCC (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  NTSTATUS SystemInformation; // eax
  NTSTATUS v9; // ebx
  const void **Pool2; // rax
  const void **v11; // rdi
  unsigned int v12; // eax
  ULONG ReturnLength[10]; // [rsp+20h] [rbp-28h] BYREF

  ReturnLength[0] = 0;
  SystemInformation = ZwQuerySystemInformation(SystemInformationClass, 0LL, 0, ReturnLength);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = (const void **)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( Pool2 )
    {
      v9 = ZwQuerySystemInformation(SystemInformationClass, Pool2, ReturnLength[0], ReturnLength);
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
