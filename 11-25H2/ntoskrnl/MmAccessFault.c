/*
 * XREFs of MmAccessFault @ 0x1402B5880
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiReleaseOutSwapReservations @ 0x140455434 (MiReleaseOutSwapReservations.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     ExpSvmServicePageFault @ 0x14064DAD0 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     MiInitializePrototypePtes @ 0x14093A344 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1409FE0E4 (MmVirtualAccessFault.c)
 * Callees:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiInitializePageFaultPacket @ 0x140379270 (MiInitializePageFaultPacket.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiConvertFaultStatus @ 0x1403BF610 (MiConvertFaultStatus.c)
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiRaisedIrqlFault @ 0x1403E1B20 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 *     MiRetainSubsection @ 0x14046FBAC (MiRetainSubsection.c)
 *     MiReleaseFaultCharges @ 0x14046FC10 (MiReleaseFaultCharges.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D7C5C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D94B8 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiHandleEnclaveFault @ 0x1406ED838 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR a4)
{
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // rdx
  unsigned int i; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // r12d
  unsigned int FileExtents; // edi
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v23; // al
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PVOID v31; // rcx
  __int64 v32; // rdx
  __int64 ProtoPteAddress; // rcx
  __int64 v34; // rax
  ULONG_PTR v35; // rdi
  unsigned int v36; // eax
  char v37; // cl
  char v38; // cl
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v41; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v42; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v47; // [rsp+84h] [rbp-7Ch]
  char v48; // [rsp+85h] [rbp-7Bh]
  unsigned int v49; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _OWORD *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2a; // [rsp+B0h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  _OWORD v58[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+10h]

  memset_0(&v40, 0, 0x98uLL);
  *(_QWORD *)&v60 = 0LL;
  DWORD2(v60) = 0;
  v39 = 0LL;
  memset(v58, 0, sizeof(v58));
  v59 = 0LL;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, a4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 != 1 )
    {
      if ( (a4 & 1) != 0 )
      {
        v38 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v38 == 1 || v38 == 3 || v38 == 6 )
          return 3221225477LL;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(a4, 0LL) )
      {
        return 3221225477LL;
      }
      KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, a4, 4uLL);
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v8 = (unsigned __int16)KeNumberNodes;
  v9 = (unsigned __int64)v58 & 4;
  if ( ((unsigned __int64)v58 & 4) != 0 )
    LODWORD(v58[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v58;
  if ( (_DWORD)v9 )
    v10 = (_DWORD *)v58 + 1;
  memset64(v10, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
  if ( !(_DWORD)v9 )
    v10[2] = v8;
  v11 = 0LL;
  for ( i = 0; i < 3; ++i )
  {
    v13 = i;
    if ( MiPageSizes[v13] == 16 )
    {
      v11 = MiDemandLargePageCoalesceTimeBounds[v13];
      break;
    }
  }
  *((_QWORD *)&v59 + 1) = v11;
  v60 = 0LL;
  v14 = 0xFFFFF68000000000uLL;
  v42 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v49;
  v51 = v58;
  if ( (BugCheckParameter2 & 0x40) != 0 )
  {
    v15 = v49 | 0x80;
    BugCheckParameter2 &= ~2uLL;
  }
  *((_QWORD *)&v40 + 1) = BugCheckParameter2;
  *(_QWORD *)&v40 = BugCheckParameter1;
  v41 = a4;
  v49 = v15 & 0xFFFFFEFF | ((a3 & 1) << 8);
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(&v40, 0xFFFFF68000000000uLL, v10, v8);
  while ( 1 )
  {
    v16 = 4096;
    if ( (unsigned __int64)BugCheckParameter1 < 0xFFFF800000000000uLL
      || (v36 = MiSystemFault(&v40, v14, v10, v8), FileExtents = v36, v36 == 192) )
    {
      FileExtents = MiUserFault((ULONG_PTR *)&v40);
      if ( FileExtents != -1073741802 )
        goto LABEL_24;
    }
    else if ( v36 != -1073741802 )
    {
      goto LABEL_28;
    }
    FileExtents = MiDispatchFault(&v40, &v39);
    if ( FileExtents == -1073741802 )
    {
      v18 = v40;
      if ( (unsigned __int64)v40 < 0xFFFF800000000000uLL
        && v52 != qword_140E2D828
        && (!qword_140E2D830 || v52 != qword_140E2D830) )
      {
        v31 = P;
        if ( !P )
        {
          MiLockVadTree(1, v40);
          P = MiLocateAddress(v40);
          MiUnlockVadTree(1, 0x11u);
          v31 = P;
          v18 = v40;
        }
        ProtoPteAddress = MiGetProtoPteAddress(
                            (__int64)v31,
                            v18 >> 12,
                            2 * ((v49 & 8) == 0) + 10,
                            (unsigned __int64 **)&BugCheckParameter2a);
        if ( !ProtoPteAddress )
        {
          LOBYTE(v32) = 17;
          MiReleaseFaultState(&v46, v32, 0LL);
          v52 = 0LL;
          FileExtents = -1073741819;
          goto LABEL_28;
        }
        v34 = v52;
        if ( v52 != ProtoPteAddress )
          v34 = ProtoPteAddress;
        v52 = v34;
        MiRetainSubsection(BugCheckParameter2a);
      }
      v49 &= ~8u;
      FileExtents = 0;
    }
    else
    {
      if ( v39 )
      {
        v27 = *(_QWORD *)(v39 + 256);
        v16 = *(_DWORD *)(v39 + 312);
        if ( v27 )
          v16 = *(_DWORD *)(v27 + 40);
        v28 = *(_DWORD *)(v39 + 192);
        v29 = v39;
        if ( a3 == 1 )
        {
          v28 |= 0x80000u;
          *(_DWORD *)(v39 + 192) = v28;
        }
        if ( (v28 & 1) != 0 && *(int *)(v29 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(&v40);
          v52 = 0LL;
          goto LABEL_24;
        }
        FileExtents = MiIssueHardFault((unsigned __int64 *)&v40, v29);
      }
      v52 = 0LL;
    }
    v21 = v46;
    MiUnlockFaultPageTable(&v46, v18, v19, v20);
    if ( (v48 & 1) != 0 )
      MiUnlockWorkingSetExclusive(v21, v47);
    else
      MiUnlockWorkingSetShared(v21, v47);
LABEL_24:
    if ( (v49 & 0x20) != 0 )
      MiDeprioritizeVad((unsigned int *)P, v40);
    if ( (*(_DWORD *)(v46 + 184) & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(v46 + 4) & 0xFFF) != 0 )
        goto LABEL_28;
      v26 = v46;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_28;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_28;
      }
      v26 = v46;
      if ( (__int64)(*(_QWORD *)(v46 + 128) - *(_QWORD *)(v46 + 112)) <= 100 )
        goto LABEL_28;
    }
    v30 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v26 + 174));
    if ( v30 && !(unsigned int)MiSufficientAvailablePages(v30, 1056LL) )
      MiDelayFaultingThread(65546LL);
LABEL_28:
    if ( ListEntry )
    {
      if ( ListEntry == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiIssuePageHeatList(ListEntry);
        MiFreeTransitionPageHeatList(ListEntry);
      }
      ListEntry = 0LL;
    }
    if ( v55 )
    {
      MiReplenishSlabAllocator(v55, v57, (unsigned __int8)((v49 & 0x100) == 0) << 17);
      if ( v56 )
        ExReleaseRundownProtection_0(v56 + 2297);
      if ( FileExtents == -1073741801 )
        FileExtents = -1073740748;
    }
    if ( (v41 & 1) != 0
      && *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (v25 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFEuLL) + 48)) != 0
      && (MiReplenishSlabAllocator(v25, 1LL, 0LL), FileExtents == -1073741801) )
    {
      FileExtents = -1073740748;
    }
    else if ( !FileExtents )
    {
      goto LABEL_33;
    }
    FileExtents = MiConvertFaultStatus(&v40, v16, FileExtents);
LABEL_33:
    v23 = v49;
    if ( (v49 & 1) != 0 )
    {
      MiCopyOnWriteCheckConditions(v46, 3221225495LL, 0LL);
      v23 = v49;
    }
    if ( (v23 & 2) != 0 )
      MiCopyOnWriteCheckConditions(v46, 3221226548LL, 0LL);
    if ( !v52 )
      break;
    if ( (a4 & 1) == 0 )
      goto LABEL_77;
    v37 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v37 == 2 || v37 == 1 )
    {
      *(_BYTE *)((a4 & 0xFFFFFFFFFFFFFFFEuLL) + 1) = 1;
LABEL_77:
      a4 = 0LL;
      goto LABEL_78;
    }
    if ( v37 == 5 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_77;
LABEL_78:
    v35 = BugCheckParameter2a;
    MiInitializePageFaultPacket(2, v52, 0, a4, (__int64)v58, (__int64)&v40);
    v49 |= 0x40u;
    BugCheckParameter1 = v40;
    BugCheckParameter2a = v35;
  }
  if ( BugCheckParameter2a )
    MiReleaseFaultCharges(BugCheckParameter2a);
  return FileExtents;
}
