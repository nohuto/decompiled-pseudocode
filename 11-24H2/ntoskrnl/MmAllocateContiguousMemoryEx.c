/*
 * XREFs of MmAllocateContiguousMemoryEx @ 0x1403966A0
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     DifMmAllocateContiguousMemoryExWrapper @ 0x14062FFA0 (DifMmAllocateContiguousMemoryExWrapper.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiConvertContiguousMemoryParameters @ 0x140395988 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousMemoryEx(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5,
        unsigned int a6,
        ULONG **BugCheckParameter2,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  ULONG *v10; // rsi
  unsigned int v12; // ebx
  ULONG *v13; // rax
  unsigned __int64 ContiguousMemory; // rax
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v16[0] = 0;
  v17 = 0LL;
  *a10 = 0LL;
  v18 = 0LL;
  if ( (a9 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  if ( !a8 || a8 == 1416523587 || a8 == 1953394499 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = MiConvertContiguousMemoryParameters(*a1, a2, a3, a4, a6, a5, &v17);
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    v13 = MiPartitionObjectToPartition(BugCheckParameter2, 0, v16);
    v10 = v13;
    if ( v13 )
    {
      ContiguousMemory = MiAllocateContiguousMemory(
                           (unsigned __int64 *)a1,
                           (_BYTE *)v17,
                           *((unsigned __int64 *)&v17 + 1),
                           v18,
                           DWORD2(v18),
                           a5,
                           (volatile signed __int64 *)v13,
                           a8,
                           a9);
      *a10 = ContiguousMemory;
      v12 = ContiguousMemory == 0 ? 0xC000009A : 0;
    }
    else
    {
      v12 = -1073740640;
    }
  }
  if ( v16[0] )
    PsDereferencePartition(*((_QWORD *)v10 + 23));
  return v12;
}
