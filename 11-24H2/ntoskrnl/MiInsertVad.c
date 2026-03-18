/*
 * XREFs of MiInsertVad @ 0x14025FB40
 * Callers:
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1408F8BD8 (MiInsertProcessVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertChildVads @ 0x1409C407C (MiInsertChildVads.c)
 * Callees:
 *     MiPostInsertVad @ 0x14025EBE0 (MiPostInsertVad.c)
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rcx
  int v8; // edx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // r14
  __int64 *v12; // rdx
  __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax

  *(_DWORD *)(a1 + 36) = 1;
  v5 = 0LL;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (v8 & 0x180000) == 0x80000 )
  {
    v15 = *(_QWORD *)(a2 + 1040);
    if ( (v8 & 0x200000) != 0 )
      ++*(_QWORD *)(v15 + 1168);
    else
      ++*(_QWORD *)(v15 + 1176);
  }
  if ( v7 <= *(_QWORD *)(a2 + 872) >> 12 && (a3 & 2) == 0 )
  {
    v14 = ((v7 - v9) << 12) + *(_QWORD *)(a2 + 552) + 4096LL;
    *(_QWORD *)(a2 + 552) = v14;
    if ( *(_QWORD *)(a2 + 544) < v14 )
      *(_QWORD *)(a2 + 544) = v14;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0xC200000) != 0x8200000 )
    v5 = MiLocateLockedVadEvent(a1, 256LL) + 8;
  if ( (unsigned int)MiIsVadLargePrivate(a1) )
    ++*(_DWORD *)(a2 + 1500);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 1016LL);
  ++*(_QWORD *)(a2 + 1384);
  if ( (a3 & 1) != 0 )
    v11 = 17;
  else
    v11 = MiLockVadTree(2LL);
  *(_QWORD *)(a2 + 1376) = a1;
  LOBYTE(v10) = 0;
  v12 = *(__int64 **)(a2 + 1368);
  if ( v12 )
  {
    while ( 1 )
    {
      v10 = *((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32);
      if ( v9 > v10 || v9 >= (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32)) )
      {
        v13 = (__int64 *)v12[1];
        if ( !v13 )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
      else
      {
        v13 = (__int64 *)*v12;
        if ( !*v12 )
        {
          LOBYTE(v10) = 0;
          break;
        }
      }
      v12 = v13;
    }
  }
  RtlAvlInsertNodeEx(a2 + 1368, v12, v10, a1);
  if ( v11 != 17 )
    MiReleaseSpinLockExclusive(
      (char *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 4,
      v11);
  if ( (a3 & 1) == 0 )
    MiPostInsertVad(a1, a2, v5);
}
