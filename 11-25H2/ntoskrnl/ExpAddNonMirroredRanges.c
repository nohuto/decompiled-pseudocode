/*
 * XREFs of ExpAddNonMirroredRanges @ 0x140C2F0F0
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140C2F1BC (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     ZwManagePartition @ 0x14069D4A0 (ZwManagePartition.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddNonMirroredRanges(HANDLE TargetHandle, unsigned int a2, __int64 *a3, char a4)
{
  __int64 v6; // rbp
  _DWORD *Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // edi
  _QWORD *v12; // rcx
  __int64 v13; // rax

  v6 = a2;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 16 * (a2 + 3LL), 0x4D72734BuLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 9;
    if ( a4 )
      *Pool2 = 13;
    Pool2[1] = a2;
    v12 = Pool2 + 12;
    if ( a2 )
    {
      do
      {
        v13 = *a3;
        a3 += 2;
        *v12 = v13;
        v12 += 2;
        *(v12 - 1) = *(a3 - 1);
        --v6;
      }
      while ( v6 );
    }
    v11 = ZwManagePartition(TargetHandle, 0LL, SystemMemoryPartitionInitialAddMemory, v10, 0x40u);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
