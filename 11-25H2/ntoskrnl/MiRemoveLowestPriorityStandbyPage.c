/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140342DE0
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x140342C30 (MiPurgePartitionStandby.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiReleasePageListLock @ 0x1402C6160 (MiReleasePageListLock.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiIsPteInStore @ 0x14037C500 (MiIsPteInStore.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 *     MiLockStandbyOldestPage @ 0x1403ED798 (MiLockStandbyOldestPage.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v6; // r15
  ULONG_PTR v7; // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // r15
  unsigned __int32 v12; // eax
  __int64 Page; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r9d
  int v17; // r11d
  char v19; // al
  ULONG_PTR v20; // rcx
  int v21; // [rsp+30h] [rbp-99h]
  int v22; // [rsp+38h] [rbp-91h] BYREF
  int v23; // [rsp+3Ch] [rbp-8Dh]
  __int64 v24; // [rsp+40h] [rbp-89h] BYREF
  __int64 v25; // [rsp+48h] [rbp-81h]
  unsigned int v26; // [rsp+50h] [rbp-79h]
  __int64 v27; // [rsp+58h] [rbp-71h]
  __int128 v28; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int8 v29; // [rsp+70h] [rbp-59h] BYREF
  char v30[111]; // [rsp+71h] [rbp-58h] BYREF

  v3 = 0;
  v26 = a2;
  v22 = 0;
  memset_0(v30, 0, 0x67uLL);
  v6 = -1LL;
  v24 = 0LL;
  v7 = 0LL;
  v25 = -1LL;
  v29 = 0;
  v8 = 0LL;
  v27 = -1LL;
  CurrentIrql = 17;
  while ( v3 < v26 )
  {
    v7 = a1 + 88LL * v3 + 3264;
    if ( *(_QWORD *)(v7 + 16) == 0x3FFFFFFFFFLL )
      goto LABEL_4;
    memset_0(&v29, 0, 0x68uLL);
    if ( CurrentIrql == 17 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    v10 = v24;
    if ( !v24 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0
        || (v11 = *(_QWORD *)(a1 + 17640), v11 == a1 + 17640)
        || (v10 = *(_QWORD *)(v11 - 8)) == 0 )
      {
        v24 = 1LL;
        goto LABEL_21;
      }
      v24 = v10;
    }
    if ( v10 > 1
      && v25 == -1
      && (a3 & 0x200) == 0
      && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v10, 0LL) >= 0x100 || *(_QWORD *)(v10 + 18688) >= 0x4000uLL) )
    {
      v28 = 0LL;
      MiInitializePageColorBase(0LL, 3, 0, (__int64)&v28);
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 1u);
      Page = MiGetPage(
               v10,
               DWORD2(v28) ^ (unsigned int)(unsigned __int8)(BYTE8(v28) ^ (v12
                                                                         % dword_140E2D980[(*((_QWORD *)&v28 + 1) >> 16) & 3LL])),
               1u);
      if ( Page == -1 )
        v24 = 1LL;
      v25 = Page;
    }
LABEL_21:
    v6 = MiLockStandbyLookasidePage(a1, &v29, v3);
    if ( v6 == -1LL && (v6 = MiLockStandbyOldestPage(a1, v14, v3, &v22), v6 == -1LL) )
    {
      if ( !v22 )
        goto LABEL_4;
    }
    else
    {
      v8 = 48 * v6 - 0x220000000000LL;
      if ( (unsigned int)MiGetPfnSlabType(v8) == 9 )
        goto LABEL_23;
      MiReleasePageListLock(a1 + 88LL * v3 + 3264, (__int64)&v29);
      v19 = MiUnlinkPageFromListEx(48 * v6 - 0x220000000000LL, 0);
      v20 = 48 * v6 - 0x220000000000LL;
      if ( (v19 & 3) != 0 )
      {
        MiDiscardTransitionPteEx(v20);
      }
      else
      {
        v23 = *(_DWORD *)(v8 + 32);
        HIBYTE(v23) &= 0xF8u;
        *(_DWORD *)(v8 + 32) = v23;
        MiInsertPageInList(v20, 0x800u);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    --v3;
LABEL_4:
    ++v3;
  }
  if ( v3 == v26 )
    goto LABEL_34;
LABEL_23:
  if ( v25 == -1
    || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) != 0x40
    || (unsigned int)MiGetPagePrivilege(v8, 1, 0LL)
    || (v15 = *(_QWORD *)(v8 + 16), (v15 & 0x400) == 0)
    && ((v15 & 4) == 0
     || (unsigned int)MiIsPteInStore(a1, *(_QWORD *)(v8 + 16))
     || _bittest16(
          (const signed __int16 *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v8 + 16)) >> 4) + 18528)
                                 + 172LL),
          0xBu)) )
  {
    MiUnlinkStandbyPage(a1, (__int64)&v29, v7, v6, a3);
  }
  else
  {
    MiRepointPteAtExtendedStandby(v8, (__int64)&v24);
  }
  MiClearPfnReuseFields(v8);
  *(_QWORD *)v8 = 0LL;
  v21 = *(_DWORD *)(v8 + 32);
  BYTE2(v21) = BYTE2(v21) & 0xF8 | 5;
  *(_DWORD *)(v8 + 32) = v21;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v8 + 16));
  if ( v16 )
    MiSetFreeZeroPfnCold(v8, v16);
  if ( v17 )
    v27 = v6;
  else
    MiReleaseFreshPageLocked(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
  if ( v25 != -1 )
    MiReleaseFreshPage(48 * v25 - 0x220000000000LL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v27;
}
