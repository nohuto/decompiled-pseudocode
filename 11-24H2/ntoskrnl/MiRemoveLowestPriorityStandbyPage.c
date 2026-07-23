/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x14024DC50
 * Callers:
 *     MiPurgePartitionStandby @ 0x14024DAA0 (MiPurgePartitionStandby.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiLockStandbyOldestPage @ 0x1403E71A8 (MiLockStandbyOldestPage.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRepointPteAtExtendedStandby @ 0x140685FA4 (MiRepointPteAtExtendedStandby.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v6; // r12
  ULONG_PTR v7; // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int32 v12; // eax
  __int64 Page; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
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
  char v35[111]; // [rsp+71h] [rbp-58h] BYREF

  v3 = 0;
  v31 = a2;
  v27 = 0;
  memset_0(v35, 0, 0x67uLL);
  v6 = -1LL;
  v29 = 0LL;
  v7 = 0LL;
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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    v10 = v29;
    if ( !v29 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0
        || (v11 = *(_QWORD *)(a1 + 17640), v11 == a1 + 17640)
        || (v10 = *(_QWORD *)(v11 - 8)) == 0 )
      {
        v29 = 1LL;
        goto LABEL_21;
      }
      v29 = v10;
    }
    if ( v10 > 1
      && v30 == -1
      && (a3 & 0x200) == 0
      && ((unsigned __int64)MiGetAvailablePagesBelowPriority(v10, 0LL) >= 0x100 || *(_QWORD *)(v10 + 18688) >= 0x4000uLL) )
    {
      v33 = 0LL;
      MiInitializePageColorBase(0LL, 3LL, 0LL, &v33);
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v33, 1u);
      Page = MiGetPage(
               v10,
               DWORD2(v33) ^ (unsigned int)(unsigned __int8)(BYTE8(v33) ^ (v12
                                                                         % dword_140E2DD00[(*((_QWORD *)&v33 + 1) >> 16) & 3LL])),
               1LL,
               dword_140E2DD00);
      if ( Page == -1 )
        v29 = 1LL;
      v30 = Page;
    }
LABEL_21:
    v6 = MiLockStandbyLookasidePage(a1, (unsigned __int64)&v34, v3);
    if ( v6 == -1LL && (v6 = MiLockStandbyOldestPage(a1, v14, v3, &v27), v6 == -1LL) )
    {
      if ( !v27 )
        goto LABEL_4;
    }
    else
    {
      v8 = 48 * v6 - 0x220000000000LL;
      if ( (unsigned int)MiGetPfnSlabType(v8) == 9 )
        goto LABEL_23;
      MiReleasePageListLock(a1 + 88LL * v3 + 3264, (__int64)&v34, v15, v16);
      v24 = MiUnlinkPageFromListEx(48 * v6 - 0x220000000000LL);
      v25 = 48 * v6 - 0x220000000000LL;
      if ( (v24 & 3) != 0 )
      {
        MiDiscardTransitionPteEx(v25);
      }
      else
      {
        v28 = *(_DWORD *)(v8 + 32);
        HIBYTE(v28) &= 0xF8u;
        *(_DWORD *)(v8 + 32) = v28;
        MiInsertPageInList(v25, 2048LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    --v3;
LABEL_4:
    ++v3;
  }
  if ( v3 == v31 )
    goto LABEL_34;
LABEL_23:
  if ( v30 == -1
    || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) != 0x40
    || (unsigned int)MiGetPagePrivilege(v8, 1, 0LL)
    || (v17 = *(_QWORD *)(v8 + 16), (v17 & 0x400) == 0)
    && ((v17 & 4) == 0
     || (unsigned int)MiIsPteInStore(a1, *(_QWORD *)(v8 + 16))
     || _bittest16(
          (const signed __int16 *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v8 + 16)) >> 4) + 18528)
                                 + 172LL),
          0xBu)) )
  {
    MiUnlinkStandbyPage(a1, (__int64)&v34, v7, v6, a3);
  }
  else
  {
    MiRepointPteAtExtendedStandby(v8, a3, v7, (unsigned int)&v34, (__int64)&v29);
  }
  MiClearPfnReuseFields(v8);
  *(_QWORD *)v8 = 0LL;
  v26 = *(_DWORD *)(v8 + 32);
  BYTE2(v26) = BYTE2(v26) & 0xF8 | 5;
  *(_DWORD *)(v8 + 32) = v26;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList(v8 + 16, v18, v19, v20);
  if ( v21 )
    MiSetFreeZeroPfnCold(v8, v21);
  if ( v22 )
    v32 = v6;
  else
    MiReleaseFreshPageLocked(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
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
