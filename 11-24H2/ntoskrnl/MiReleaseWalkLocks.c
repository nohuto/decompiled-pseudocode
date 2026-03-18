/*
 * XREFs of MiReleaseWalkLocks @ 0x1402E37F0
 * Callers:
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E3540 (MiYieldPageTableWalk.c)
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 *     MiDeleteEmptyPageTableTail @ 0x140476F00 (MiDeleteEmptyPageTableTail.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066EBA0 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140685430 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  unsigned __int8 v4; // dl
  struct _KPRCB *CurrentPrcb; // rdx
  char v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

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
    v6 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v7 = 1LL;
      }
      else
      {
        v7 = 3LL;
        if ( v6 == 5 )
          v7 = 0LL;
      }
    }
    else
    {
      v7 = 2LL;
    }
    KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v7]);
    *(_QWORD *)(a1 + 56) = 0LL;
    goto LABEL_2;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
    || v1 < 0xFFFFF6FB7DBED000uLL
    || v1 > 0xFFFFF6FB7DBEDFFFuLL
    || (v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v1 < 0xFFFFF6FB7DBED000uLL || v1 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      goto LABEL_7;
    }
    _InterlockedAnd(
      &dword_140E2F0AC[(unsigned __int64)(2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5],
      ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v8 + 4 * ((v1 >> 3) & 0x1FF)));
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
