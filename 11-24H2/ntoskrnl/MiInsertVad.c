/*
 * XREFs of MiInsertVad @ 0x140290150
 * Callers:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiPostInsertVad @ 0x14028F1F0 (MiPostInsertVad.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 */

void __fastcall MiInsertVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r15
  char v7; // bp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 36) = 1;
  v6 = 0LL;
  v7 = a3;
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v9 = *(unsigned int *)(a1 + 48);
  v10 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 0x180000) == 0x80000 )
  {
    v17 = *(_QWORD *)(a2 + 1040);
    if ( (v9 & 0x200000) != 0 )
      ++*(_QWORD *)(v17 + 1168);
    else
      ++*(_QWORD *)(v17 + 1176);
  }
  if ( v8 <= *(_QWORD *)(a2 + 872) >> 12 && (a3 & 2) == 0 )
  {
    v9 = ((v8 - v10) << 12) + *(_QWORD *)(a2 + 552) + 4096LL;
    *(_QWORD *)(a2 + 552) = v9;
    if ( *(_QWORD *)(a2 + 544) < v9 )
      *(_QWORD *)(a2 + 544) = v9;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0xC200000) != 0x8200000 )
    v6 = MiLocateLockedVadEvent(a1, 256) + 8;
  if ( (unsigned int)MiIsVadLargePrivate(a1, v9, a3, a4) )
    ++*(_DWORD *)(a2 + 1500);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 1016LL);
  ++*(_QWORD *)(a2 + 1384);
  if ( (v7 & 1) != 0 )
    v14 = 17;
  else
    v14 = MiLockVadTree(2, v11, v12, v13);
  *(_QWORD *)(a2 + 1376) = a1;
  LOBYTE(v12) = 0;
  v15 = *(__int64 **)(a2 + 1368);
  if ( v15 )
  {
    while ( 1 )
    {
      v12 = *((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32);
      if ( v10 > v12 || v10 >= (*((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32)) )
      {
        v16 = (__int64 *)v15[1];
        if ( !v16 )
        {
          LOBYTE(v12) = 1;
          break;
        }
      }
      else
      {
        v16 = (__int64 *)*v15;
        if ( !*v15 )
        {
          LOBYTE(v12) = 0;
          break;
        }
      }
      v15 = v16;
    }
  }
  RtlAvlInsertNodeEx(a2 + 1368, v15, v12, a1);
  if ( v14 != 17 )
    MiReleaseSpinLockExclusive(
      (char *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 4,
      v14);
  if ( (v7 & 1) == 0 )
    MiPostInsertVad(a1, a2, v6);
}
