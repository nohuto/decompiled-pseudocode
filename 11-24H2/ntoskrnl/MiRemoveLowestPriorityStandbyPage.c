/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140220F00
 * Callers:
 *     MiPurgePartitionStandby @ 0x140220D50 (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleasePageListLock @ 0x1402262E0 (MiReleasePageListLock.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiLockStandbyOldestPage @ 0x1403F41B8 (MiLockStandbyOldestPage.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v6; // r12
  __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 v12; // r12
  unsigned __int32 v13; // eax
  __int64 Page; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // r9d
  int v22; // r11d
  char v24; // al
  ULONG_PTR v25; // rcx
  int v26; // [rsp+30h] [rbp-99h]
  int v27; // [rsp+38h] [rbp-91h] BYREF
  int v28; // [rsp+3Ch] [rbp-8Dh]
  __int64 v29; // [rsp+40h] [rbp-89h] BYREF
  __int64 v30; // [rsp+48h] [rbp-81h]
  unsigned int v31; // [rsp+50h] [rbp-79h]
  __int64 v32; // [rsp+58h] [rbp-71h]
  __int128 v33; // [rsp+60h] [rbp-69h] BYREF
  char v34; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v35[111]; // [rsp+71h] [rbp-58h] BYREF

  v3 = 0;
  v31 = a2;
  v27 = 0;
  memset_0(v35, 0, 0x67uLL);
  v6 = -1LL;
  v29 = 0LL;
  LODWORD(v7) = 0;
  v30 = -1LL;
  v34 = 0;
  v8 = 0LL;
  v32 = -1LL;
  CurrentIrql = 17;
  while ( v3 < v31 )
  {
    v7 = a1 + 88LL * v3 + 3264;
    if ( *(_QWORD *)(v7 + 16) == 0x3FFFFFFFFFLL )
      goto LABEL_4;
    memset_0(&v34, 0, 0x68uLL);
    if ( CurrentIrql == 17 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, v10);
    }
    v11 = v29;
    if ( !v29 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0
        || (v12 = *(_QWORD *)(a1 + 17640), v12 == a1 + 17640)
        || (v11 = *(_QWORD *)(v12 - 8)) == 0 )
      {
        v29 = 1LL;
        goto LABEL_21;
      }
      v29 = v11;
    }
    if ( v11 > 1
      && v30 == -1
      && (a3 & 0x200) == 0
      && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v11, 0LL) >= 0x100 || *(_QWORD *)(v11 + 18688) >= 0x4000uLL) )
    {
      v33 = 0LL;
      MiInitializePageColorBase(0LL, 3LL, 0LL, &v33);
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v33, 1u);
      Page = MiGetPage(
               v11,
               DWORD2(v33) ^ (unsigned int)(unsigned __int8)(BYTE8(v33) ^ (v13
                                                                         % dword_140E2DBC0[(*((_QWORD *)&v33 + 1) >> 16) & 3LL])),
               1LL);
      if ( Page == -1 )
        v29 = 1LL;
      v30 = Page;
    }
LABEL_21:
    v6 = MiLockStandbyLookasidePage(a1, &v34, v3);
    if ( v6 == -1 && (v6 = MiLockStandbyOldestPage(a1, v15, v3, &v27), v6 == -1) )
    {
      if ( !v27 )
        goto LABEL_4;
    }
    else
    {
      v8 = 48 * v6 - 0x220000000000LL;
      if ( (unsigned int)MiGetPfnSlabType(v8) == 9 )
        goto LABEL_23;
      MiReleasePageListLock(a1 + 88LL * v3 + 3264, &v34);
      v24 = MiUnlinkPageFromListEx(48 * v6 - 0x220000000000LL, 0);
      v25 = 48 * v6 - 0x220000000000LL;
      if ( (v24 & 3) != 0 )
      {
        MiDiscardTransitionPteEx(v25, 0LL);
      }
      else
      {
        v28 = *(_DWORD *)(v8 + 32);
        HIBYTE(v28) &= 0xF8u;
        *(_DWORD *)(v8 + 32) = v28;
        MiInsertPageInList(v25);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    --v3;
LABEL_4:
    ++v3;
  }
  if ( v3 == v31 )
    goto LABEL_37;
LABEL_23:
  if ( v30 == -1
    || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) != 0x40
    || (unsigned int)MiGetPagePrivilege(v8, 1, 0LL)
    || (v16 = *(_QWORD *)(v8 + 16), (v16 & 0x400) == 0)
    && ((v16 & 4) == 0
     || (unsigned int)MiIsPteInStore(a1, *(_QWORD *)(v8 + 16))
     || _bittest16(
          (const signed __int16 *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v8 + 16)) >> 4) + 18528)
                                 + 172LL),
          0xBu)) )
  {
    MiUnlinkStandbyPage(a1, (unsigned int)&v34, v7, v6, a3);
    v17 = 0LL;
    v18 = *(_QWORD *)(v8 + 16);
    v19 = v18 & 0x400;
    v20 = (unsigned __int8)(v18 >> 3);
    if ( (v18 & 0x400) != 0 )
      v20 = (unsigned __int8)(v18 >> 11);
    if ( (v20 & 1) != 0 )
      v17 = 1LL;
  }
  else
  {
    MiRepointPteAtExtendedStandby(v8, (__int64)&v29);
    v17 = 0LL;
  }
  MiClearPfnReuseFields(v8, v20, v19, v17);
  *(_QWORD *)v8 = 0LL;
  v26 = *(_DWORD *)(v8 + 32);
  BYTE2(v26) = BYTE2(v26) & 0xF8 | 5;
  *(_DWORD *)(v8 + 32) = v26;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList();
  if ( v21 )
    MiSetFreeZeroPfnCold(v8, v21);
  if ( v22 )
    v32 = v6;
  else
    MiReleaseFreshPageLocked(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
  if ( v30 != -1 )
    MiReleaseFreshPage(48 * v30 - 0x220000000000LL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v32;
}
