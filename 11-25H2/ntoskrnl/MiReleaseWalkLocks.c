/*
 * XREFs of MiReleaseWalkLocks @ 0x1402BBAD0
 * Callers:
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E8120 (MiYieldPageTableWalk.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiDeleteEmptyPageTableTail @ 0x140479EC0 (MiDeleteEmptyPageTableTail.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x140663060 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140679BA0 (MiCombineWorkingSetTail.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v7; // al
  __int64 v8; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    goto LABEL_2;
  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
  {
    if ( v1 == 0xFFFFF6FB7DBEDF68uLL )
    {
LABEL_7:
      *(_QWORD *)(a1 + 56) = 0LL;
      goto LABEL_2;
    }
  }
  else if ( v1 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        v8 = 1LL;
      }
      else
      {
        v8 = 3LL;
        if ( v7 == 5 )
          v8 = 0LL;
      }
    }
    else
    {
      v8 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v8]);
    *(_QWORD *)(a1 + 56) = 0LL;
    goto LABEL_2;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
    || v1 < 0xFFFFF6FB7DBED000uLL
    || v1 > 0xFFFFF6FB7DBEDFFFuLL
    || (v5 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v1 < 0xFFFFF6FB7DBED000uLL || v1 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      goto LABEL_7;
    }
    _InterlockedAnd(
      &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5],
      ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel(v5 + 4 * ((v1 >> 3) & 0x1FF));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
LABEL_2:
  v4 = *(_BYTE *)(a1 + 9);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockWorkingSetShared(v3, v4);
  else
    MiUnlockWorkingSetExclusive(v3, v4);
  *(_DWORD *)(a1 + 4) |= 1u;
}
