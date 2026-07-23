/*
 * XREFs of ExQuerySystemLockInformation @ 0x140B6B8CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExpOwnerEntryToThread @ 0x1402E5B70 (ExpOwnerEntryToThread.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall ExQuerySystemLockInformation(int a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  PVOID v9; // rcx
  _DWORD *v10; // rsi
  unsigned int v11; // edi
  KIRQL v12; // al
  __int64 v13; // r8
  int v14; // r10d
  KIRQL v15; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax

  v4 = 8;
  if ( a3 < 8 )
  {
    v11 = -1073741820;
  }
  else
  {
    v9 = ExPageLockHandle;
    v10 = a2 + 2;
    v11 = 0;
    *a2 = 0;
    MmLockPagableSectionByHandle(v9);
    v12 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    v13 = ExpSystemResourcesList;
    v14 = 1;
    v15 = v12;
    while ( (__int64 *)v13 != &ExpSystemResourcesList )
    {
      *a2 += v14;
      v4 += 48;
      if ( v4 < 0x30 )
      {
        v11 = -1073741675;
        break;
      }
      if ( a3 >= v4 )
      {
        v10[2] = v14;
        v17 = 0LL;
        if ( !a1 )
          v17 = v13;
        *(_QWORD *)v10 = v17;
        v18 = ExpOwnerEntryToThread((_DWORD *)(v13 + 48));
        if ( v18 )
          v19 = *(_QWORD *)(v18 + 1296);
        else
          v19 = 0LL;
        *((_QWORD *)v10 + 2) = v19;
        v10[6] = *(_DWORD *)(v13 + 64);
        v10[7] = *(_DWORD *)(v13 + 68);
        v10[10] = *(_DWORD *)(v13 + 72);
        v10[11] = *(_DWORD *)(v13 + 76);
        v10 += 12;
      }
      else
      {
        v11 = -1073741820;
      }
      v13 = *(_QWORD *)v13;
    }
    ExReleaseSpinLockShared(&ExpResourceSpinLock, v15);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  if ( a4 )
    *a4 = v4;
  return v11;
}
