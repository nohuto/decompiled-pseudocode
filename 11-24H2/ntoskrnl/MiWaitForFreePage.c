/*
 * XREFs of MiWaitForFreePage @ 0x140260F64
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiGetSystemPage @ 0x1403F462C (MiGetSystemPage.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiDemoteSlabEntries @ 0x1402619FC (MiDemoteSlabEntries.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     VslReclaimPartitionPages @ 0x14058B0BC (VslReclaimPartitionPages.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(__int64 a1, char a2)
{
  int v3; // r8d
  unsigned int v4; // edi
  _DWORD *v5; // r13
  int v6; // r12d
  ULONG v7; // r14d
  KIRQL v8; // si
  __int64 v9; // rdx
  PVOID *p_Object; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned int v14; // edi
  KIRQL v15; // al
  __int64 v16; // rdx
  __int64 v18; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+B0h] [rbp+8h]
  int v22; // [rsp+B8h] [rbp+10h]
  unsigned int v23; // [rsp+C0h] [rbp+18h]
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v20 = 0LL;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v4 = v3 != 0 ? 34 : 160;
  v23 = v4;
  v5 = (_DWORD *)(a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 16232);
  Object = v5;
  v6 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v20 = a1 + 18312;
  v7 = (v6 != 0) + 1;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
  v9 = v4;
  v18 = v4;
  while ( !(unsigned int)MiSufficientAvailablePages(a1, v9) )
  {
    v22 = v5[6];
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 18304) )
        break;
      v21 = *(_DWORD *)(a1 + 18336);
    }
    p_Object = &Object;
    v11 = v7;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v11;
    }
    while ( v11 );
    LOBYTE(v12) = v8;
    MiReleaseSpinLockExclusive(a1 + 16192, v12);
    MiObtainFreePages(a1);
    if ( *(_QWORD *)(a1 + 432) )
      VslReclaimPartitionPages(*(_QWORD *)(a1 + 184));
    v13 = 0;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a1 + 19392) || (v14 = 1000, !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1056LL)) )
        v14 = 100;
      Timeout.QuadPart = -10000LL * v14;
      if ( KeWaitForMultipleObjects(v7, &Object, WaitAny, WrFreePage, 0, 0, &Timeout, 0LL) != 258
        || v22 != v5[6]
        || v6 && v21 != *(_DWORD *)(a1 + 18336) )
      {
        break;
      }
      v13 += v14;
      MiDemoteSlabEntries(a1, 0LL);
      if ( v22 != v5[6] )
        break;
      if ( v13 >= (unsigned int)(MiNoPagesTimeout / -10000) )
      {
        MiNoPagesLastChance(a1, v23);
        break;
      }
    }
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
    v9 = v18;
    v8 = v15;
  }
  LOBYTE(v16) = v8;
  return MiReleaseSpinLockExclusive(a1 + 16192, v16);
}
