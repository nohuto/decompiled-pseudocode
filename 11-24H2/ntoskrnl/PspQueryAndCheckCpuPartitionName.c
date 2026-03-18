/*
 * XREFs of PspQueryAndCheckCpuPartitionName @ 0x140776D0C
 * Callers:
 *     NtCreateCpuPartition @ 0x1407757E0 (NtCreateCpuPartition.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspQueryAndCheckCpuPartitionName(int a1)
{
  int NameStringMode; // ebx
  __int64 Pool2; // rax
  UNICODE_STRING *v4; // rdi
  unsigned int i; // edx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&v7, 0);
  if ( NameStringMode == -1073741820 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (UNICODE_STRING *)Pool2;
    if ( Pool2 )
    {
      NameStringMode = ObQueryNameStringMode(a1, Pool2, v7, (unsigned int)&v7, 0);
      if ( NameStringMode >= 0 )
      {
        if ( RtlPrefixUnicodeString(&PspCpuPartitionDirectoryPathString, v4, 1u) )
        {
          for ( i = 29; i < v4->Length >> 1; ++i )
          {
            if ( v4->Buffer[i] == 92 )
              goto LABEL_6;
          }
          NameStringMode = 0;
        }
        else
        {
LABEL_6:
          NameStringMode = -1073741811;
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStringMode;
}
