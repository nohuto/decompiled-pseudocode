/*
 * XREFs of MiWaitForFreePage @ 0x1402CF708
 * Callers:
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiGetSystemPage @ 0x140311984 (MiGetSystemPage.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiDemoteSlabEntries @ 0x1402CF530 (MiDemoteSlabEntries.c)
 *     MiCanFlushMakeProgress @ 0x1402D0318 (MiCanFlushMakeProgress.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     VslReclaimPartitionPages @ 0x14058DD64 (VslReclaimPartitionPages.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // r8d
  KIRQL v17; // al
  unsigned __int64 v19; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+B0h] [rbp+8h]
  int v23; // [rsp+B8h] [rbp+10h]
  unsigned int v24; // [rsp+C0h] [rbp+18h]
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v21 = 0LL;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v4 = v3 != 0 ? 34 : 160;
  v24 = v4;
  v5 = (_DWORD *)(a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 16232);
  Object = v5;
  v6 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v21 = a1 + 18312;
  v7 = (v6 != 0) + 1;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
  v9 = v4;
  v19 = v4;
  while ( !(unsigned int)MiSufficientAvailablePages(a1, v9) )
  {
    v23 = v5[6];
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 18304) )
        return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16192), v8);
      v22 = *(_DWORD *)(a1 + 18336);
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
    MiObtainFreePages(a1, v12, v13);
    if ( *(_QWORD *)(a1 + 432) )
      VslReclaimPartitionPages(*(_QWORD *)(a1 + 184));
    v14 = 0;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a1 + 19392) || (v15 = 1000, !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1056LL)) )
        v15 = 100;
      Timeout.QuadPart = -10000LL * v15;
      if ( KeWaitForMultipleObjects(v7, &Object, WaitAny, WrFreePage, 0, 0, &Timeout, 0LL) != 258
        || v23 != v5[6]
        || v6 && v22 != *(_DWORD *)(a1 + 18336) )
      {
        break;
      }
      v14 += v15;
      MiDemoteSlabEntries(a1, 0, v16);
      if ( v23 != v5[6] )
        break;
      if ( v14 >= (unsigned int)(MiNoPagesTimeout / -10000) )
      {
        MiNoPagesLastChance(a1, v24);
        break;
      }
    }
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
    v9 = v19;
    v8 = v17;
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16192), v8);
}
