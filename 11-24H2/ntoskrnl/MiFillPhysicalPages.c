/*
 * XREFs of MiFillPhysicalPages @ 0x14021EFA0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiGetCachedPoolPages @ 0x14049F260 (MiGetCachedPoolPages.c)
 *     MiInitializeDummyPages @ 0x140C4F7E0 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     AccelBuildDescriptorMemoryFill @ 0x14040A6BC (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x14040AB90 (AccelpSubmitWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeZeroPages @ 0x1406B3390 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140BDE9E0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR *v4; // r15
  void *MmInternal; // rsi
  unsigned __int64 Phase0Mapping; // rbx
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = a3;
  v4 = 0LL;
  LOBYTE(v14) = 17;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, &v14, 0x80000000LL, a4);
  }
  else
  {
    Phase0Mapping = MxGetPhase0Mapping();
    v4 = (ULONG_PTR *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte(v4, a2, 2684354564LL);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, ValidPte);
    *v4 = v13;
  }
  if ( a4 )
  {
    memset64((void *)Phase0Mapping, a4, 0x200uLL);
  }
  else
  {
    if ( !a1 )
    {
LABEL_5:
      KeZeroPages(Phase0Mapping, 4096LL);
      goto LABEL_6;
    }
    if ( (int)AccelBuildDescriptorMemoryFill(a1, Phase0Mapping, 4096, 0, 3LL) < 0 || (int)AccelpSubmitWork(a1, 3LL) < 0 )
    {
      ++dword_140EF4CAC;
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( MmInternal )
  {
    v10 = (unsigned __int8)v14;
    result = CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( (_BYTE)v10 != 17 )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v10);
      __writecr8(v10);
    }
  }
  else
  {
    *v4 = CLFS_LSN_NULL_EXT;
    return MiFlushSingleTbEntry(Phase0Mapping, 2LL, 1LL);
  }
  return result;
}
