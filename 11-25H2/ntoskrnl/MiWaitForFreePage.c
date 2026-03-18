/*
 * XREFs of MiWaitForFreePage @ 0x1403BFC64
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiConvertFaultStatus @ 0x1403BF610 (MiConvertFaultStatus.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiGetSystemPage @ 0x140454030 (MiGetSystemPage.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiDemoteSlabEntries @ 0x1403BE9C4 (MiDemoteSlabEntries.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiCanFlushMakeProgress @ 0x1403C11C8 (MiCanFlushMakeProgress.c)
 *     VslReclaimPartitionPages @ 0x14058A644 (VslReclaimPartitionPages.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(__int64 a1, char a2)
{
  int v3; // r8d
  unsigned int v4; // edi
  _DWORD *v5; // r13
  int v6; // r12d
  ULONG v7; // r14d
  KIRQL v8; // si
  unsigned __int64 v9; // rdx
  PVOID *p_Object; // rdi
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // r8d
  KIRQL v15; // al
  unsigned __int64 v17; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+B0h] [rbp+8h]
  int v21; // [rsp+B8h] [rbp+10h]
  unsigned int v22; // [rsp+C0h] [rbp+18h]
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v19 = 0LL;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v4 = v3 != 0 ? 34 : 160;
  v22 = v4;
  v5 = (_DWORD *)(a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 16232);
  Object = v5;
  v6 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v19 = a1 + 18312;
  v7 = (v6 != 0) + 1;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
  v9 = v4;
  v17 = v4;
  while ( !(unsigned int)MiSufficientAvailablePages(a1, v9) )
  {
    v21 = v5[6];
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 18304) )
        return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16192), v8);
      v20 = *(_DWORD *)(a1 + 18336);
    }
    p_Object = &Object;
    v11 = v7;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v11;
    }
    while ( v11 );
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16192), v8);
    MiObtainFreePages(a1);
    if ( *(_QWORD *)(a1 + 432) )
      VslReclaimPartitionPages(*(_QWORD *)(a1 + 184));
    v12 = 0;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a1 + 19392) || (v13 = 1000, !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1056LL)) )
        v13 = 100;
      Timeout.QuadPart = -10000LL * v13;
      if ( KeWaitForMultipleObjects(v7, &Object, WaitAny, WrFreePage, 0, 0, &Timeout, 0LL) != 258
        || v21 != v5[6]
        || v6 && v20 != *(_DWORD *)(a1 + 18336) )
      {
        break;
      }
      v12 += v13;
      MiDemoteSlabEntries(a1, 0, v14);
      if ( v21 != v5[6] )
        break;
      if ( v12 >= (unsigned int)(MiNoPagesTimeout / -10000) )
      {
        MiNoPagesLastChance(a1, v22);
        break;
      }
    }
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
    v9 = v17;
    v8 = v15;
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16192), v8);
}
