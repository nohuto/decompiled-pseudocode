/*
 * XREFs of MmAccessFault @ 0x140216750
 * Callers:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiFaultInProbeAddress @ 0x1402C3798 (MiFaultInProbeAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiReleaseOutSwapReservations @ 0x140406A04 (MiReleaseOutSwapReservations.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     ExpSvmServicePageFault @ 0x140659970 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1409F7E30 (MmVirtualAccessFault.c)
 * Callees:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     MiRaisedIrqlFault @ 0x140245EB8 (MiRaisedIrqlFault.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 *     MiRetainSubsection @ 0x14036F5D4 (MiRetainSubsection.c)
 *     MiReleaseFaultCharges @ 0x14037040C (MiReleaseFaultCharges.c)
 *     MiInitializePageFaultPacket @ 0x1403975B0 (MiInitializePageFaultPacket.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiDeprioritizeVad @ 0x1403FD204 (MiDeprioritizeVad.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiDelayFaultingThread @ 0x14048F028 (MiDelayFaultingThread.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D6A8C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D8538 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiHandleEnclaveFault @ 0x1406F95A8 (MiHandleEnclaveFault.c)
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
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v20; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  PVOID v29; // rcx
  void *Address; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 ProtoPteAddress; // rcx
  __int64 v34; // rax
  struct _SLIST_ENTRY *v35; // rdi
  unsigned int v36; // eax
  char v37; // cl
  char v38; // cl
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h]
  __int128 v42; // [rsp+60h] [rbp-A0h]
  __int128 v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+A0h] [rbp-60h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  _OWORD v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]

  v49 = 0LL;
  *(_QWORD *)&v52 = 0LL;
  v4 = BugCheckParameter4;
  DWORD2(v52) = 0;
  v39 = 0LL;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)P = 0LL;
  v46 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v48 = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 != 1 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v38 = *(_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v38 == 1 || v38 == 3 || v38 == 6 )
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
  v9 = (unsigned __int64)v50 & 4;
  if ( ((unsigned __int64)v50 & 4) != 0 )
    LODWORD(v50[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v50;
  if ( (_DWORD)v9 )
    v10 = (_DWORD *)v50 + 1;
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
  *((_QWORD *)&v51 + 1) = v11;
  v52 = 0LL;
  v14 = 0xFFFFF68000000000uLL;
  *((_QWORD *)&v41 + 1) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v42 = ((*((_QWORD *)&v41 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v42 + 1) = (((unsigned __int64)v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v43 = ((*((_QWORD *)&v42 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = (int)P[0];
  *(_QWORD *)&v46 = v50;
  if ( (v7 & 0x40) != 0 )
  {
    v15 = LODWORD(P[0]) | 0x80;
    v7 &= ~2uLL;
  }
  *((_QWORD *)&v40 + 1) = v7;
  *(_QWORD *)&v40 = v6;
  *(_QWORD *)&v41 = v4;
  LODWORD(P[0]) = v15 & 0xFFFFFEFF | ((a3 & 1) << 8);
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(&v40, 0xFFFFF68000000000uLL, v10, v8);
  while ( 1 )
  {
    v16 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v36 = MiSystemFault(&v40, v14, v10, v8), FileExtents = v36, v36 == 192) )
    {
      FileExtents = MiUserFault(&v40, v14, v10, v8);
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
      v28 = v40;
      if ( (unsigned __int64)v40 < 0xFFFF800000000000uLL
        && *((_QWORD *)&v46 + 1) != qword_140E2DA68
        && (!qword_140E2DA70 || *((_QWORD *)&v46 + 1) != qword_140E2DA70) )
      {
        v29 = P[1];
        if ( !P[1] )
        {
          MiLockVadTree(1LL);
          Address = (void *)MiLocateAddress(v40);
          LOBYTE(v31) = 17;
          P[1] = Address;
          MiUnlockVadTree(1LL, v31);
          v29 = P[1];
          v28 = v40;
        }
        ProtoPteAddress = MiGetProtoPteAddress(
                            v29,
                            v28 >> 12,
                            2 * (unsigned int)(((__int64)P[0] & 8) == 0) + 10,
                            ListEntry);
        if ( !ProtoPteAddress )
        {
          LOBYTE(v32) = 17;
          MiReleaseFaultState((char *)&v43 + 8, v32, 0LL);
          *((_QWORD *)&v46 + 1) = 0LL;
          FileExtents = -1073741819;
          goto LABEL_28;
        }
        v34 = *((_QWORD *)&v46 + 1);
        if ( *((_QWORD *)&v46 + 1) != ProtoPteAddress )
          v34 = ProtoPteAddress;
        *((_QWORD *)&v46 + 1) = v34;
        MiRetainSubsection((ULONG_PTR)ListEntry[0]);
      }
      LODWORD(P[0]) &= ~8u;
      FileExtents = 0;
    }
    else
    {
      if ( v39 )
      {
        v25 = *(_QWORD *)(v39 + 256);
        v16 = *(_DWORD *)(v39 + 312);
        if ( v25 )
          v16 = *(_DWORD *)(v25 + 40);
        v26 = *(_DWORD *)(v39 + 192);
        v27 = v39;
        if ( a3 == 1 )
        {
          v26 |= 0x80000u;
          *(_DWORD *)(v39 + 192) = v26;
        }
        if ( (v26 & 1) != 0 && *(int *)(v27 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(&v40);
          *((_QWORD *)&v46 + 1) = 0LL;
          goto LABEL_24;
        }
        FileExtents = MiIssueHardFault(&v40, v27);
      }
      *((_QWORD *)&v46 + 1) = 0LL;
    }
    v18 = *((_QWORD *)&v43 + 1);
    MiUnlockFaultPageTable((char *)&v43 + 8);
    if ( (BYTE5(v44) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v18, BYTE4(v44));
    else
      MiUnlockWorkingSetShared(v18, BYTE4(v44));
LABEL_24:
    if ( ((__int64)P[0] & 0x20) != 0 )
      MiDeprioritizeVad(P[1]);
    if ( (*(_DWORD *)(*((_QWORD *)&v43 + 1) + 184LL) & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)&v43 + 1) + 4LL) & 0xFFF) != 0 )
        goto LABEL_28;
      v23 = *((_QWORD *)&v43 + 1);
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
      v23 = *((_QWORD *)&v43 + 1);
      if ( (__int64)(*(_QWORD *)(*((_QWORD *)&v43 + 1) + 128LL) - *(_QWORD *)(*((_QWORD *)&v43 + 1) + 112LL)) <= 100 )
        goto LABEL_28;
    }
    v24 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v23 + 174));
    if ( v24 && !(unsigned int)MiSufficientAvailablePages(v24, 1056LL) )
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
        MiIssuePageHeatList();
        MiFreeTransitionPageHeatList(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v48 )
    {
      MiReplenishSlabAllocator(v48, v49, (unsigned __int8)((BYTE1(P[0]) & 1) == 0) << 17);
      if ( *((_QWORD *)&v48 + 1) )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)&v48 + 1) + 18376LL));
      if ( FileExtents == -1073741801 )
        FileExtents = -1073740748;
    }
    if ( (v41 & 1) != 0
      && *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (v22 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFEuLL) + 48)) != 0
      && (MiReplenishSlabAllocator(v22, 1LL, 0LL), FileExtents == -1073741801) )
    {
      FileExtents = -1073740748;
    }
    else if ( !FileExtents )
    {
      goto LABEL_33;
    }
    FileExtents = MiConvertFaultStatus((__int64)&v40, v16, FileExtents);
LABEL_33:
    v20 = (char)P[0];
    if ( ((__int64)P[0] & 1) != 0 )
    {
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v43 + 1), 3221225495LL, 0LL);
      v20 = (char)P[0];
    }
    if ( (v20 & 2) != 0 )
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v43 + 1), 3221226548LL, 0LL);
    if ( !*((_QWORD *)&v46 + 1) )
      break;
    if ( (v4 & 1) == 0 )
      goto LABEL_81;
    v37 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v37 == 1 || v37 == 2 )
    {
      *(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 1) = 1;
LABEL_81:
      v4 = 0LL;
      goto LABEL_82;
    }
    if ( v37 == 5 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_81;
LABEL_82:
    v35 = ListEntry[0];
    MiInitializePageFaultPacket(2, DWORD2(v46), 0, v4, (__int64)v50, (__int64)&v40);
    LODWORD(P[0]) |= 0x40u;
    v6 = v40;
    ListEntry[0] = v35;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return FileExtents;
}
