/*
 * XREFs of MmAccessFault @ 0x140243610
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiReleaseOutSwapReservations @ 0x1403C697C (MiReleaseOutSwapReservations.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     ExpSvmServicePageFault @ 0x140658010 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1409F07A0 (MmVirtualAccessFault.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 *     MiRetainSubsection @ 0x1402723E4 (MiRetainSubsection.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiInitializePageFaultPacket @ 0x140351870 (MiInitializePageFaultPacket.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultCharges @ 0x140427624 (MiReleaseFaultCharges.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404CFEDC (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D1988 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiHandleEnclaveFault @ 0x1406F71E8 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rbx
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v22; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  PVOID v31; // rcx
  void *Address; // rax
  __int64 v33; // rdx
  __int64 ProtoPteAddress; // rcx
  __int64 v35; // rax
  _SLIST_ENTRY *v36; // rdi
  unsigned int v37; // eax
  char v38; // cl
  char v39; // cl
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v42; // [rsp+50h] [rbp-B0h]
  __int128 v43; // [rsp+60h] [rbp-A0h]
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-30h]
  _OWORD v51[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+100h] [rbp+0h]
  __int128 v53; // [rsp+110h] [rbp+10h]

  v50 = 0LL;
  *(_QWORD *)&v53 = 0LL;
  v4 = BugCheckParameter4;
  DWORD2(v53) = 0;
  v40 = 0LL;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  *(_OWORD *)P = 0LL;
  v47 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v49 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 != 1 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v39 = *(_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v39 == 1 || v39 == 3 || v39 == 6 )
          return 3221225477LL;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, 0LL) )
      {
        return 3221225477LL;
      }
      KeBugCheckEx(0x50u, v6, v7, v4, 4uLL);
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
  v9 = (unsigned __int64)v51 & 4;
  if ( ((unsigned __int64)v51 & 4) != 0 )
    LODWORD(v51[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v51;
  if ( (_DWORD)v9 )
    v10 = (_DWORD *)v51 + 1;
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
  *((_QWORD *)&v52 + 1) = v11;
  v53 = 0LL;
  v14 = 0xFFFFF68000000000uLL;
  *((_QWORD *)&v42 + 1) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v43 = ((*((_QWORD *)&v42 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v43 + 1) = (((unsigned __int64)v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v44 = ((*((_QWORD *)&v43 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = (int)P[0];
  *(_QWORD *)&v47 = v51;
  if ( (v7 & 0x40) != 0 )
  {
    v15 = LODWORD(P[0]) | 0x80;
    v7 &= ~2uLL;
  }
  *((_QWORD *)&v41 + 1) = v7;
  *(_QWORD *)&v41 = v6;
  *(_QWORD *)&v42 = v4;
  LODWORD(P[0]) = v15 & 0xFFFFFEFF | ((a3 & 1) << 8);
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(&v41, 0xFFFFF68000000000uLL, v10, v8);
  while ( 1 )
  {
    v16 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v37 = MiSystemFault(&v41, v14, v10, v8), FileExtents = v37, v37 == 192) )
    {
      FileExtents = MiUserFault(&v41, v14, v10, v8);
      if ( FileExtents != -1073741802 )
        goto LABEL_24;
    }
    else if ( v37 != -1073741802 )
    {
      goto LABEL_28;
    }
    FileExtents = MiDispatchFault(&v41, &v40);
    if ( FileExtents == -1073741802 )
    {
      v30 = v41;
      if ( (unsigned __int64)v41 < 0xFFFF800000000000uLL
        && *((_QWORD *)&v47 + 1) != qword_140E2DBA8
        && (!qword_140E2DBB0 || *((_QWORD *)&v47 + 1) != qword_140E2DBB0) )
      {
        v31 = P[1];
        if ( !P[1] )
        {
          MiLockVadTree(1, v41, v18, v19);
          Address = (void *)MiLocateAddress(v41);
          LOBYTE(v33) = 17;
          P[1] = Address;
          MiUnlockVadTree(1LL, v33);
          v31 = P[1];
          v30 = v41;
        }
        ProtoPteAddress = MiGetProtoPteAddress(
                            v31,
                            v30 >> 12,
                            2 * (unsigned int)(((__int64)P[0] & 8) == 0) + 10,
                            ListEntry);
        if ( !ProtoPteAddress )
        {
          MiReleaseFaultState((__int64 *)&v44 + 1, 0x11u, 0LL);
          *((_QWORD *)&v47 + 1) = 0LL;
          FileExtents = -1073741819;
          goto LABEL_28;
        }
        v35 = *((_QWORD *)&v47 + 1);
        if ( *((_QWORD *)&v47 + 1) != ProtoPteAddress )
          v35 = ProtoPteAddress;
        *((_QWORD *)&v47 + 1) = v35;
        MiRetainSubsection((ULONG_PTR)ListEntry[0]);
      }
      LODWORD(P[0]) &= ~8u;
      FileExtents = 0;
    }
    else
    {
      if ( v40 )
      {
        v27 = *(_QWORD *)(v40 + 256);
        v16 = *(_DWORD *)(v40 + 312);
        if ( v27 )
          v16 = *(_DWORD *)(v27 + 40);
        v28 = *(_DWORD *)(v40 + 192);
        v29 = v40;
        if ( a3 == 1 )
        {
          v28 |= 0x80000u;
          *(_DWORD *)(v40 + 192) = v28;
        }
        if ( (v28 & 1) != 0 && *(int *)(v29 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(&v41);
          *((_QWORD *)&v47 + 1) = 0LL;
          goto LABEL_24;
        }
        FileExtents = MiIssueHardFault(&v41, v29);
      }
      *((_QWORD *)&v47 + 1) = 0LL;
    }
    v20 = *((_QWORD *)&v44 + 1);
    MiUnlockFaultPageTable((__int64 *)&v44 + 1);
    if ( (BYTE5(v45) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v20, BYTE4(v45));
    else
      MiUnlockWorkingSetShared(v20, BYTE4(v45));
LABEL_24:
    if ( ((__int64)P[0] & 0x20) != 0 )
      MiDeprioritizeVad(P[1]);
    if ( (*(_DWORD *)(*((_QWORD *)&v44 + 1) + 184LL) & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)&v44 + 1) + 4LL) & 0xFFF) != 0 )
        goto LABEL_28;
      v25 = *((_QWORD *)&v44 + 1);
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
      v25 = *((_QWORD *)&v44 + 1);
      if ( (__int64)(*(_QWORD *)(*((_QWORD *)&v44 + 1) + 128LL) - *(_QWORD *)(*((_QWORD *)&v44 + 1) + 112LL)) <= 100 )
        goto LABEL_28;
    }
    v26 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v25 + 174));
    if ( v26 && !(unsigned int)MiSufficientAvailablePages(v26, 1056LL) )
      MiDelayFaultingThread(65546LL);
LABEL_28:
    if ( ListEntry[1] )
    {
      if ( ListEntry[1] == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiIssuePageHeatList(ListEntry[1]);
        MiFreeTransitionPageHeatList(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v49 )
    {
      MiReplenishSlabAllocator(v49, v50, ((BYTE1(P[0]) & 1) == 0) << 17);
      if ( *((_QWORD *)&v49 + 1) )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)&v49 + 1) + 18376LL));
      if ( FileExtents == -1073741801 )
        FileExtents = -1073740748;
    }
    if ( (v42 & 1) != 0
      && *(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (v24 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFFEuLL) + 48)) != 0
      && (MiReplenishSlabAllocator(v24, 1uLL, 0), FileExtents == -1073741801) )
    {
      FileExtents = -1073740748;
    }
    else if ( !FileExtents )
    {
      goto LABEL_33;
    }
    FileExtents = MiConvertFaultStatus(&v41, v16, FileExtents);
LABEL_33:
    v22 = (char)P[0];
    if ( ((__int64)P[0] & 1) != 0 )
    {
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v44 + 1), 3221225495LL, 0LL);
      v22 = (char)P[0];
    }
    if ( (v22 & 2) != 0 )
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v44 + 1), 3221226548LL, 0LL);
    if ( !*((_QWORD *)&v47 + 1) )
      break;
    if ( (v4 & 1) == 0 )
      goto LABEL_81;
    v38 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v38 == 1 || v38 == 2 )
    {
      *(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 1) = 1;
LABEL_81:
      v4 = 0LL;
      goto LABEL_82;
    }
    if ( v38 == 5 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_81;
LABEL_82:
    v36 = ListEntry[0];
    MiInitializePageFaultPacket(2, DWORD2(v47), 0, v4, (__int64)v51, (__int64)&v41);
    LODWORD(P[0]) |= 0x40u;
    v6 = v41;
    ListEntry[0] = v36;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return FileExtents;
}
