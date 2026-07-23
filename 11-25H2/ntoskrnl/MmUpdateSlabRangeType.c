/*
 * XREFs of MmUpdateSlabRangeType @ 0x140C483BC
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiRemoveSlabEntry @ 0x14045C66C (MiRemoveSlabEntry.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046BBB4 (MiEnumerateSlabAllocatorsEx.c)
 *     MiSetSlabTypeIdentifiers @ 0x14048D8F4 (MiSetSlabTypeIdentifiers.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MmUpdateSlabRangeType(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r15
  ULONG_PTR v10; // r9
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // eax
  KIRQL v14; // bl
  ULONG_PTR v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+88h] [rbp+20h]

  result = (unsigned int)dword_140E389C4;
  if ( (dword_140E389C4 & 8) != 0 )
  {
    BugCheckParameter4 = a3;
    while ( BugCheckParameter3 )
    {
      v7 = MiPageToNode(BugCheckParameter2);
      v16 = 0LL;
      v8 = v7;
      v15 = BugCheckParameter2;
      MiEnumerateSlabAllocatorsEx(
        (__int64)&MiSystemPartition,
        (__int64)MiUpdateSlabRangeTypeHelper,
        (__int64)&v15,
        v7,
        9u);
      v9 = v16;
      if ( !v16 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
      v10 = *(_QWORD *)(v16 + 40);
      if ( v10 != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, v10, 0LL);
      v11 = *(_QWORD *)(v16 + 56);
      v12 = LODWORD(MiPageSizes[(*(_DWORD *)(v11 + 136) >> 4) & 3]);
      v13 = *(_DWORD *)(v11 + 128);
      if ( v13 <= 4 && v13 != 2 )
        KeBugCheckEx(0x1Au, 0x3030315uLL, BugCheckParameter2, *(_QWORD *)(v16 + 56), *(int *)(v11 + 128));
      result = 57216 * v8 + 232LL * MmSlabTypeToMiSlabType[BugCheckParameter4] + qword_140E389D0 + 15696;
      v17 = result;
      if ( result != v11 )
      {
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 16));
        MiRemoveSlabEntry((__int64)&MiSystemPartition, v11, v9);
        MiReleaseSpinLockExclusive((_DWORD *)(v11 + 16), v14);
        MiSetSlabTypeIdentifiers(*(_QWORD *)(v9 + 40), v12, *(_DWORD *)(v17 + 128), 0, (*(_DWORD *)(v9 + 92) >> 1) & 1);
        *(_QWORD *)(v9 + 56) = v17;
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, v17, v9, 0);
      }
      BugCheckParameter3 -= v12;
      BugCheckParameter2 += v12;
    }
  }
  return result;
}
