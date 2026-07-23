/*
 * XREFs of MiCreateBootSlabEntries @ 0x140C47CFC
 * Callers:
 *     MiCreateKernelHalSlabRange @ 0x140C47F30 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C480EC (MiCreateSlabAllocationsFromLoaderBlock.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnRangeFromSlabAllocation @ 0x14038DC64 (MiIsPfnRangeFromSlabAllocation.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     MiSetSlabTypeIdentifiers @ 0x14048D8F4 (MiSetSlabTypeIdentifiers.c)
 *     MiAllocateSlabEntry @ 0x1404A40AC (MiAllocateSlabEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCreateBootSlabEntries(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 SlabEntry; // rax
  __int64 v11; // rbx
  int v12; // edx
  int v13; // eax
  __int64 v14; // r15
  int v15; // r10d
  __int64 *v16; // r9
  __int64 updated; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]);
  v9 = 48 * a2 - 0x220000000000LL;
  while ( v5 )
  {
    SlabEntry = MiAllocateSlabEntry(a1);
    v11 = SlabEntry;
    if ( !SlabEntry )
      return 3221225626LL;
    *(_QWORD *)(SlabEntry + 40) = v6;
    *(_QWORD *)(SlabEntry + 48) = v6 + v8 - 1;
    RtlSetAllBits((PRTL_BITMAP)(SlabEntry + 64));
    v12 = *(_DWORD *)(v11 + 92);
    if ( v4 )
    {
      v12 |= 3u;
      *(_DWORD *)(v11 + 92) = v12;
    }
    v13 = dword_140E3CF14;
    if ( _bittest(&v13, *(_DWORD *)(a1 + 128)) )
      *(_DWORD *)(v11 + 92) = v12 | 2;
    v14 = 0LL;
    if ( *(_DWORD *)(a1 + 128) <= 4u )
    {
      v15 = v8;
      if ( (_DWORD)v8 )
      {
        v16 = (__int64 *)(v9 + 16);
        v9 += 48 * v8;
        do
        {
          if ( !*(v16 - 1) )
          {
            updated = MiUpdatePageFileHighInPte(*v16, (*(_DWORD *)(v11 + 92) & 2) != 0 ? 7LL : 3LL);
            *v16 = updated;
            v18 = v14 + 1;
            _InterlockedDecrement64(&qword_140E3D680);
            if ( v19 )
              v18 = v14;
            v14 = v18;
          }
          v16 += 6;
          --v15;
        }
        while ( v15 );
      }
    }
    if ( (*(_DWORD *)(v11 + 92) & 1) != 0 )
      qword_140E3D6A0 += v8;
    if ( (*(_DWORD *)(v11 + 92) & 2) == 0 )
    {
      if ( v8 != v14 )
      {
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v8 - v14);
        _InterlockedAdd64(&qword_140E37398, v14 - v8);
      }
      qword_140E3D6A8 += v14;
      v5 = v22;
    }
    if ( (unsigned int)MiIsPfnRangeFromSlabAllocation(v6, v8) )
      KeBugCheckEx(0x1Au, 0x3030312uLL, *(_QWORD *)(v11 + 40), *(int *)(a1 + 128), 0LL);
    MiSetSlabTypeIdentifiers(*(_QWORD *)(v11 + 40), v20, *(_DWORD *)(a1 + 128), 0, (*(_DWORD *)(v11 + 92) >> 1) & 1);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, v8, 1);
    MiInsertSlabEntry((__int64)&MiSystemPartition, a1, v11, 0);
    v6 += v8;
    v5 -= v8;
    v4 = a4;
    v22 = v5;
  }
  return 0LL;
}
