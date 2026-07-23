/*
 * XREFs of CcUnmapVacb @ 0x1409DC780
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140457374 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeImage @ 0x1409DC928 (PfCheckDeprioritizeImage.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  int v7; // eax
  char v8; // r8
  __int64 result; // rax
  unsigned int *v10; // r15
  _KPROCESS *Process; // r14
  unsigned int *v12; // r12
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
    v10 = (unsigned int *)(a2 + 520);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( HIDWORD(Process[1].CpuPartitionList.Blink) == *(_DWORD *)(a2 + 520) )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      {
        v12 = (unsigned int *)(a2 + 520);
LABEL_13:
        v13 = CcReferenceSharedCacheMapFileObject(a2);
        v14 = *(_QWORD *)(v13 + 24);
        ObFastDereferenceObjectDeferDelete((__int64 *)(a2 + 96), v13);
        v15 = (*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0;
        v16 = *(__int64 *)(a2 + 8) >> 12;
        v17 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
        if ( v15 + v16 < v17 )
          v17 = v15 + v16;
        if ( v17 <= 1 )
        {
          v17 = 1LL;
          v10 = v12;
        }
        if ( (unsigned int)PfCheckDeprioritizeFile(Process, *v10, v14, v17) )
        {
          v6 = 1;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v12 = (unsigned int *)(a2 + 520);
      if ( (unsigned int)PfCheckDeprioritizeImage() )
        goto LABEL_13;
    }
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
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
