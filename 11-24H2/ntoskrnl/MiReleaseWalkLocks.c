/*
 * XREFs of MiReleaseWalkLocks @ 0x14020BAF0
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x14020B840 (MiYieldPageTableWalk.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MiDeleteEmptyPageTableTail @ 0x1404734A0 (MiDeleteEmptyPageTableTail.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066FD70 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140686560 (MiCombineWorkingSetTail.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx

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
    KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v8]);
    *(_QWORD *)(a1 + 56) = 0LL;
    goto LABEL_2;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
    || v1 < 0xFFFFF6FB7DBED000uLL
    || v1 > 0xFFFFF6FB7DBEDFFFuLL
    || (v9 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v1 < 0xFFFFF6FB7DBED000uLL || v1 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      goto LABEL_7;
    }
    _InterlockedAnd(
      &dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3)) >> 5],
      ~(2 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2 * ((__int64)(v1 + 0x90482413000LL) >> 3)) & 0x1F)));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel(v9 + 4 * ((v1 >> 3) & 0x1FF));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
LABEL_2:
  v4 = *(unsigned __int8 *)(a1 + 9);
  if ( (*(_DWORD *)a1 & 4) != 0 )
    result = MiUnlockWorkingSetShared(v3, v4);
  else
    result = MiUnlockWorkingSetExclusive(v3, v4);
  *(_DWORD *)(a1 + 4) |= 1u;
  return result;
}
