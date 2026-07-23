/*
 * XREFs of MiFillPhysicalPages @ 0x14024BCF0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiGetCachedPoolPages @ 0x14049A090 (MiGetCachedPoolPages.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     AccelBuildDescriptorMemoryFill @ 0x140402B9C (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140BE09E0 (MxGetPhase0Mapping.c)
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
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, &v14, 0x80000000LL);
  }
  else
  {
    Phase0Mapping = MxGetPhase0Mapping();
    v4 = (ULONG_PTR *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v4, a2, -1610612732);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, ValidPte, 128LL);
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
      ++dword_140EF4ECC;
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
