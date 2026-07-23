/*
 * XREFs of MiIncreaseCommitLimits @ 0x14068733C
 * Callers:
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MiInitializeCommitment @ 0x140687468 (MiInitializeCommitment.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiExtendPagingFiles @ 0x1407EF718 (MiExtendPagingFiles.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiFreePartitionPhysicalPages @ 0x1407FC86C (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 *     MiComputeCommitThresholds @ 0x14046B098 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x14067B43C (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  _DWORD *v6; // r14
  KIRQL v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx

  v6 = (_DWORD *)(a1 + 16888);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16888));
  if ( a2 )
  {
    if ( a4 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 19264), a4);
      if ( a5 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), a4);
    }
    else if ( *(_QWORD *)(a1 + 16904) )
    {
      v12 = MiRestockOverCommit(a1, a2);
      v13 = a2 - v12;
      if ( a2 != v12 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 19264), v13);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), v13);
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19608), a2);
  }
  if ( a3 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 16840), a3);
    KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  }
  MiComputeCommitThresholds(a1, 1);
  if ( a6 )
  {
    MiUpdatePageFileList(a6, 3);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19264), 2uLL);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), 2uLL);
    v14 = *(unsigned int *)(a1 + 18520);
    *(_QWORD *)(a1 + 8 * v14 + 18528) = a6;
    *(_DWORD *)(a1 + 18520) = v14 + 1;
  }
  return MiReleaseSpinLockExclusive(v6, v11);
}
