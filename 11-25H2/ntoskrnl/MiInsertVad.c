/*
 * XREFs of MiInsertVad @ 0x1402A80AC
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x140905110 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x140A40F24 (MiInsertChildVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiPostInsertVad @ 0x1402BCBB0 (MiPostInsertVad.c)
 */

__int64 __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  char v4; // si
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  char v12; // bp
  __int64 *v13; // r10
  __int64 *v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax

  *(_DWORD *)(a1 + 36) = 1;
  v4 = 0;
  v7 = 0LL;
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (v9 & 0x180000) == 0x80000 )
  {
    v18 = *(_QWORD *)(a2 + 1040);
    if ( (v9 & 0x200000) != 0 )
      ++*(_QWORD *)(v18 + 1168);
    else
      ++*(_QWORD *)(v18 + 1176);
  }
  if ( v8 <= *(_QWORD *)(a2 + 872) >> 12 && (a3 & 2) == 0 )
  {
    v17 = ((v8 - v10) << 12) + *(_QWORD *)(a2 + 552) + 4096LL;
    *(_QWORD *)(a2 + 552) = v17;
    if ( *(_QWORD *)(a2 + 544) < v17 )
      *(_QWORD *)(a2 + 544) = v17;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0xC200000) != 0x8200000 )
    v7 = MiLocateLockedVadEvent(a1, 256) + 8;
  if ( (unsigned int)MiIsVadLargePrivate(a1) )
    ++*(_DWORD *)(a2 + 1500);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 1016LL);
  ++*(_QWORD *)(a2 + 1384);
  if ( (a3 & 1) != 0 )
    v12 = 17;
  else
    v12 = MiLockVadTree(2LL);
  *(_QWORD *)(a2 + 1376) = a1;
  v13 = *(__int64 **)(a2 + 1368);
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v10 > (*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
        || v10 >= (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32)) )
      {
        v14 = (__int64 *)v13[1];
        if ( !v14 )
        {
          v4 = 1;
          break;
        }
      }
      else
      {
        v14 = (__int64 *)*v13;
        if ( !*v13 )
          break;
      }
      v13 = v14;
    }
  }
  LOBYTE(v11) = v4;
  result = RtlAvlInsertNodeEx(a2 + 1368, v13, v11, a1);
  if ( v12 != 17 )
  {
    LOBYTE(v16) = v12;
    result = MiUnlockVadTree(2LL, v16);
  }
  if ( (a3 & 1) == 0 )
    return MiPostInsertVad(a1, a2, v7);
  return result;
}
