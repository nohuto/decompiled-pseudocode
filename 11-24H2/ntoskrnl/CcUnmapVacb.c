/*
 * XREFs of CcUnmapVacb @ 0x1408E5FE0
 * Callers:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14024109C (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140461D64 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1408E6188 (PfCheckDeprioritizeImage.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  int v7; // eax
  char v8; // r8
  int *v9; // r15
  _KPROCESS *Process; // r14
  int *v11; // r12
  ULONG_PTR v12; // rax
  __int64 v13; // r13
  _BOOL8 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9

  v6 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v9 = (int *)(a2 + 520);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( HIDWORD(Process[1].CpuPartitionList.Blink) == *(_DWORD *)(a2 + 520) )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      {
        v11 = (int *)(a2 + 520);
LABEL_13:
        v12 = CcReferenceSharedCacheMapFileObject(a2);
        v13 = *(_QWORD *)(v12 + 24);
        ObFastDereferenceObjectDeferDelete((__int64 *)(a2 + 96), v12);
        v14 = (*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0;
        v15 = *(__int64 *)(a2 + 8) >> 12;
        v16 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
        if ( v14 + v15 < v16 )
          v16 = v14 + v15;
        if ( v16 <= 1 )
        {
          LODWORD(v16) = 1;
          v9 = v11;
        }
        if ( (unsigned int)PfCheckDeprioritizeFile((__int64)Process, *v9, v13, v16) )
        {
          v6 = 1;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v11 = (int *)(a2 + 520);
      if ( (unsigned int)PfCheckDeprioritizeImage() )
        goto LABEL_13;
    }
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
  }
LABEL_4:
  v8 = v6 | 2;
  if ( (a3 & 2) == 0 )
    v8 = v6;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 176), v8);
  if ( (a3 & 2) == 0 )
    *(_QWORD *)a1 = 0LL;
}
