/*
 * XREFs of CcUnmapVacb @ 0x1408B5FF0
 * Callers:
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 * Callees:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140462750 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1408B6190 (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  int v7; // eax
  char v8; // r8
  __int64 result; // rax
  int *v10; // r15
  _KPROCESS *Process; // r14
  int *v12; // r12
  ULONG_PTR v13; // rax
  __int64 v14; // r13
  _BOOL8 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r9

  v6 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v10 = (int *)(a2 + 520);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( HIDWORD(Process[1].CpuPartitionList.Blink) == *(_DWORD *)(a2 + 520) )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) == 0 )
      {
LABEL_15:
        CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
        goto LABEL_4;
      }
      v12 = (int *)(a2 + 520);
    }
    else
    {
      v12 = (int *)(a2 + 520);
      if ( !(unsigned int)PfCheckDeprioritizeImage() )
        goto LABEL_15;
    }
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    ObFastDereferenceObjectDeferDelete((__int64 *)(a2 + 96), v13, 1666409283LL);
    v15 = (*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0;
    v16 = *(__int64 *)(a2 + 8) >> 12;
    v17 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 + v16 < v17 )
      v17 = v15 + v16;
    if ( v17 <= 1 )
    {
      LODWORD(v17) = 1;
      v10 = v12;
    }
    if ( !(unsigned int)PfCheckDeprioritizeFile((__int64)Process, *v10, v14, v17) )
      goto LABEL_15;
    v6 = 1;
  }
LABEL_4:
  v8 = v6 | 2;
  if ( (a3 & 2) == 0 )
    v8 = v6;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 176), v8);
  if ( (a3 & 2) == 0 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
