/*
 * XREFs of MmAllocateContiguousMemoryEx @ 0x140411210
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     DifMmAllocateContiguousMemoryExWrapper @ 0x1406319E0 (DifMmAllocateContiguousMemoryExWrapper.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiConvertContiguousMemoryParameters @ 0x140411748 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiPartitionObjectToPartition @ 0x14041217C (MiPartitionObjectToPartition.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousMemoryEx(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        ULONG_PTR BugCheckParameter2,
        int a8,
        int a9,
        __int64 *a10)
{
  int v10; // r12d
  int v11; // ebx
  __int64 v12; // rax
  __int64 ContiguousMemory; // rax
  __int128 v15; // [rsp+58h] [rbp-40h] BYREF
  __int128 v16; // [rsp+68h] [rbp-30h]

  v10 = (int)a1;
  v15 = 0LL;
  *a10 = 0LL;
  v16 = 0LL;
  if ( (a9 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( !a8 || a8 == 1416523587 || a8 == 1953394499 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = MiConvertContiguousMemoryParameters(*a1, a2, a3, a4, a6, a5, (__int64)&v15);
    if ( v11 >= 0 )
    {
      v12 = MiPartitionObjectToPartition(BugCheckParameter2);
      if ( v12 )
      {
        ContiguousMemory = MiAllocateContiguousMemory(v10, v15, DWORD2(v15), v16, DWORD2(v16), a5, v12, a8, a9);
        *a10 = ContiguousMemory;
        return ContiguousMemory == 0 ? 0xC000009A : 0;
      }
      else
      {
        return (unsigned int)-1073740640;
      }
    }
  }
  return (unsigned int)v11;
}
