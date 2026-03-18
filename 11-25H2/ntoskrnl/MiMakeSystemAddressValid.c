/*
 * XREFs of MiMakeSystemAddressValid @ 0x1402B67C0
 * Callers:
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiFillHyperPtes @ 0x14045BBC8 (MiFillHyperPtes.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MiLockPageTableRange @ 0x14049569C (MiLockPageTableRange.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2D98 (MiWorkingSetInfoCheckPageTable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(ULONG_PTR BugCheckParameter1, int a2, unsigned __int8 a3, char a4)
{
  unsigned __int8 v4; // r10
  unsigned __int64 BugCheckParameter4; // rdi
  struct _LIST_ENTRY **p_Blink; // r13
  int v7; // r15d
  ULONG_PTR v8; // rcx
  BOOL v9; // eax
  int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  volatile signed __int64 *v15; // r15
  struct _KPRCB *CurrentPrcb; // r8
  char v17; // al
  unsigned int v18; // ecx
  volatile __int64 *v19; // rdx
  unsigned __int64 Lock; // rcx
  __int64 v21; // rax
  int v22; // eax
  ULONG_PTR v23; // rsi
  _QWORD *v24; // rax
  unsigned int v25; // edi
  _DWORD *v26; // rbx
  unsigned __int8 v27; // r14
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  _DWORD *MmInternal; // rcx
  int v32; // eax
  ULONG_PTR v33; // rsi
  signed __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  struct _KPRCB *v36; // rdx
  char v37; // al
  unsigned int v38; // ecx
  volatile __int64 *v39; // r8
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned int v42; // r14d
  bool v43; // zf
  signed __int64 v44; // rax
  __int64 v45; // r15
  int v46; // eax
  struct _KPRCB *v47; // rdx
  char v48; // al
  __int64 v49; // rcx
  _KLOCK_QUEUE_HANDLE *v50; // rbx
  __int64 Next; // rax
  __int64 v52; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v55; // rcx
  char v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rax
  signed __int64 v59; // rdi
  signed __int64 v60; // rax
  __int64 CurrentIrql; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // r12d
  unsigned __int64 v65; // rdi
  char v66; // bl
  unsigned __int32 v67; // edx
  volatile signed __int32 *v68; // rdi
  int v69; // r13d
  __int64 v70; // rcx
  signed __int32 v71; // eax
  int v72; // ecx
  signed __int32 v73; // eax
  int v74; // r14d
  signed __int64 v75; // rdx
  int v76; // [rsp+34h] [rbp-CCh]
  struct _LIST_ENTRY **v77; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  _KPROCESS *BugCheckParameter3; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v81; // [rsp+68h] [rbp-98h]
  __int128 v82; // [rsp+70h] [rbp-90h]
  __int128 v83; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  ULONG_PTR v85; // [rsp+98h] [rbp-68h]
  unsigned __int64 v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  _OWORD v88[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v89; // [rsp+D0h] [rbp-30h]
  __int128 v90; // [rsp+E0h] [rbp-20h]
  __int128 v91; // [rsp+F0h] [rbp-10h]
  __int128 v92; // [rsp+100h] [rbp+0h]
  __int128 v93; // [rsp+110h] [rbp+10h]
  __int64 v94; // [rsp+120h] [rbp+20h]
  void *retaddr; // [rsp+178h] [rbp+78h]
  BOOL v97; // [rsp+188h] [rbp+88h]
  int v99; // [rsp+198h] [rbp+98h]

  v94 = 0LL;
  v4 = a3;
  BugCheckParameter4 = BugCheckParameter1;
  memset(v88, 0, sizeof(v88));
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    BugCheckParameter3 = 0LL;
    p_Blink = (struct _LIST_ENTRY **)&unk_140E37D80;
  }
  else
  {
    BugCheckParameter3 = KeGetCurrentThread()->ApcState.Process;
    p_Blink = &BugCheckParameter3[2].ReadyListHead.Blink;
  }
  v77 = p_Blink;
  v7 = a4 & 8;
  DWORD2(v89) = a2;
  v76 = v7;
  LOBYTE(v88[0]) = (v7 != 0) + 7;
  v8 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v81 = v8;
  v9 = v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  v10 = a4 & 1;
  v97 = v9;
  v99 = v10;
  v11 = 2LL;
  while ( 2 )
  {
    if ( v10 )
    {
      v82 = 0LL;
      v83 = 0LL;
      if ( (unsigned __int64)(((__int64)BugCheckParameter4 >> 47) + 1) > 1 )
        goto LABEL_22;
      v12 = 4LL;
      *(_QWORD *)&v82 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v82 + 1) = (((unsigned __int64)v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v83 = ((*((_QWORD *)&v82 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v83 + 1) = (((unsigned __int64)v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v13 = *(&v81 + v12--);
        v14 = *(_QWORD *)v13;
        if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (v14 & 1) == 0 )
            goto LABEL_22;
          if ( ((v14 & 0x42) == 0 || (v14 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v55 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
                if ( (v55 & 0x20) != 0 )
                  LOBYTE(v14) = v14 | 0x20;
                v56 = v14;
                LOBYTE(v14) = v14 | 0x42;
                if ( (v55 & 0x42) == 0 )
                  LOBYTE(v14) = v56;
              }
            }
          }
        }
        if ( (v14 & 1) == 0 )
          goto LABEL_22;
        if ( (v14 & 0x80u) != 0LL )
          break;
        if ( !v12 )
          return 0LL;
      }
      if ( BugCheckParameter4 >= 0xFFFFF68000000000uLL && BugCheckParameter4 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
LABEL_22:
        MiUnlockWorkingSetExclusive(p_Blink, v4);
        goto LABEL_23;
      }
      return 0LL;
    }
    if ( v9 )
    {
      v32 = MiFastLockLeafPageTable((__int64)p_Blink, v8, 0);
      if ( v32 )
      {
        if ( v32 != 1 )
        {
          while ( 1 )
            BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        return 0LL;
      }
    }
    BugCheckParameter2 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v85 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v86 = ((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v87 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v78 = 0xFFFFF6FB7DBEDF68uLL;
    v17 = (_DWORD)p_Blink[23] & 0xF;
    if ( v17 )
    {
      if ( v17 == 7 )
      {
        v18 = 1;
      }
      else
      {
        v18 = 3;
        if ( v17 == 5 )
          v18 = 0;
      }
      v19 = (volatile __int64 *)(&MiState + 2 * v18 + 3232);
    }
    else
    {
      v18 = 2;
      v19 = (volatile __int64 *)(p_Blink + 22);
    }
    Lock = (unsigned __int64)CurrentPrcb->SelfmapLockHandle + 16 * v18 + 8 * v18;
    *(_QWORD *)(Lock + 8) = v19;
    *(_QWORD *)Lock = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v21 = _InterlockedExchange64(v19, Lock);
      if ( v21 )
        KxWaitForLockOwnerShip(Lock, v21, CurrentPrcb, 0LL);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(Lock, v19);
    }
    while ( 1 )
    {
      v33 = *(&BugCheckParameter2 + v11);
      v79 = v11;
      v34 = *(_QWORD *)v33;
      if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL && (v34 & 1) != 0 )
      {
        LOBYTE(Lock) = (v34 & 0x42) != 0;
        if ( ((unsigned __int8)Lock & ((v34 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Lock = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Lock + 352) != 1 )
          {
            v57 = *(_QWORD *)(Lock + 1288);
            if ( v57 )
            {
              v58 = *(_QWORD *)(v57 + 8 * ((v33 >> 3) & 0x1FF));
              if ( (v58 & 0x20) != 0 )
                v34 |= 0x20uLL;
              Lock = v34;
              v34 |= 0x42uLL;
              if ( (v58 & 0x42) == 0 )
                v34 = Lock;
            }
          }
        }
      }
      if ( (v34 & 0x81) != 1 )
        break;
      if ( (v34 & 0x20) == 0 )
      {
        v74 = 0;
        v35 = (__int64)(v33 << 25) >> 16;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v74 = 1;
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
        }
        if ( v35 < 0xFFFFF68000000000uLL || v35 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          MiWriteValidPteNewProtection(v33);
        }
        else
        {
          do
          {
            v75 = v34;
            Lock = v34 | 0x20;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v33, Lock, v34);
          }
          while ( v34 != v75 );
        }
        if ( v74 )
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
      }
      if ( (volatile signed __int64 *)v33 != v15 )
      {
        if ( v33 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v36 = KeGetCurrentPrcb();
          v37 = (_DWORD)p_Blink[23] & 0xF;
          if ( v37 )
          {
            if ( v37 == 7 )
            {
              v38 = 1;
            }
            else
            {
              v38 = 3;
              if ( v37 == 5 )
                v38 = 0;
            }
            v39 = (volatile __int64 *)(&MiState + 2 * v38 + 3232);
          }
          else
          {
            v38 = 2;
            v39 = (volatile __int64 *)(p_Blink + 22);
          }
          Lock = (unsigned __int64)v36->SelfmapLockHandle + 16 * v38 + 8 * v38;
          *(_QWORD *)(Lock + 8) = v39;
          *(_QWORD *)Lock = 0LL;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v40 = _InterlockedExchange64(v39, Lock);
            if ( v40 )
              KxWaitForLockOwnerShip(Lock, v40, v39, 0LL);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(Lock, v39);
          }
        }
        else if ( ((_DWORD)p_Blink[23] & 0xF) == 0
               && v33 >= 0xFFFFF6FB7DBED000uLL
               && v33 <= 0xFFFFF6FB7DBEDFFFuLL
               && (Lock = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Lock + 4LL * (((unsigned int)v33 >> 3) & 0x1FF)));
        }
        else
        {
          if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v64 = 0;
            v65 = (unsigned __int64)(2 * (unsigned int)((__int64)(v33 + 0x90482413000LL) >> 3)) >> 5;
            v66 = (2 * ((__int64)(v33 + 0x90482413000LL) >> 3)) & 0x1F;
            v67 = *(&MiState + v65 + 2459);
            v68 = (volatile signed __int32 *)(&MiState + v65 + 2459);
            v69 = 2 << v66;
            do
            {
              while ( 1 )
              {
                v70 = (2 * (unsigned __int8)((__int64)(v33 + 0x90482413000LL) >> 3)) & 0x1F;
                if ( ((v67 >> v66) & 1) == 0 )
                  break;
                if ( ((v67 >> v66) & 2) != 0 )
                {
                  do
                  {
                    if ( (++v64 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70) )
                    {
                      HvlNotifyLongSpinWait(v64);
                    }
                    else
                    {
                      _mm_pause();
                    }
                    v67 = *v68;
                    v70 = (2 * (unsigned __int8)((__int64)(v33 + 0x90482413000LL) >> 3)) & 0x1F;
                  }
                  while ( (((unsigned __int32)*v68 >> v66) & 1) != 0 );
                }
                else
                {
                  v72 = v67 | v69;
                  v73 = _InterlockedCompareExchange(v68, v67 | v69, v67);
                  v43 = v67 == v73;
                  v67 = v73;
                  if ( v43 )
                    v67 = v72;
                }
              }
              Lock = ~(2 << v66) & (v67 | (1 << v66));
              v71 = _InterlockedCompareExchange(v68, Lock, v67);
              v43 = v67 == v71;
              v67 = v71;
            }
            while ( !v43 );
          }
          else
          {
            v41 = *(_QWORD *)v33;
            v42 = 0;
            if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL && (v41 & 1) != 0 )
            {
              LOBYTE(Lock) = (v41 & 0x42) != 0;
              if ( ((unsigned __int8)Lock & ((v41 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
              {
                Lock = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                if ( *(_BYTE *)(Lock + 352) != 1 )
                {
                  v62 = *(_QWORD *)(Lock + 1288);
                  if ( v62 )
                  {
                    v63 = *(_QWORD *)(v62 + 8 * ((v33 >> 3) & 0x1FF));
                    if ( (v63 & 0x20) != 0 )
                      v41 |= 0x20uLL;
                    Lock = v41;
                    v41 |= 0x42uLL;
                    if ( (v63 & 0x42) == 0 )
                      v41 = Lock;
                  }
                }
              }
            }
            while ( (v41 & 1) != 0 )
            {
              if ( (v41 & 0x1000000000000000LL) != 0 )
              {
                if ( ((v41 >> 60) & 2) != 0 )
                {
                  do
                  {
                    if ( (++v42 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Lock) )
                    {
                      HvlNotifyLongSpinWait(v42);
                    }
                    else
                    {
                      _mm_pause();
                    }
                    v41 = *(_QWORD *)v33;
                  }
                  while ( (*(_QWORD *)v33 & 0x1000000000000000LL) != 0 );
                }
                else
                {
                  v59 = v41 | 0x2000000000000000LL;
                  if ( (MiFlags & 0x2000000) != 0 )
                    _mm_lfence();
                  if ( _bittest64(&MiFlags, 0x24u) )
                  {
                    if ( (v41 & 0x21) == 1 )
                    {
                      Lock = 0x4000000000LL;
                      if ( v33 >= 0xFFFFF6C000000000uLL )
                        MiCheckLinearProtectedPteAccessedBit(v33, v41 | 0x2000000000000000LL);
                    }
                  }
                  v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v33, v59, v41);
                  v43 = v41 == v60;
                  v41 = v60;
                  if ( v43 )
                    v41 = v59;
                }
              }
              else
              {
                Lock = v41 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v33, Lock, v41);
                v43 = v41 == v44;
                v41 = v44;
                if ( v43 )
                  break;
              }
            }
          }
          p_Blink = v77;
          v11 = v79;
          v15 = (volatile signed __int64 *)v78;
        }
        if ( v15 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
        {
          v47 = KeGetCurrentPrcb();
          v48 = (_DWORD)p_Blink[23] & 0xF;
          if ( v48 )
          {
            if ( v48 == 7 )
            {
              v49 = 1LL;
            }
            else
            {
              v49 = 3LL;
              if ( v48 == 5 )
                v49 = 0LL;
            }
          }
          else
          {
            v49 = 2LL;
          }
          v50 = &v47->SelfmapLockHandle[v49];
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _m_prefetchw(v50);
            Next = (__int64)v50->LockQueue.Next;
            if ( !v50->LockQueue.Next )
            {
              Lock = (unsigned __int64)v50->LockQueue.Lock;
              if ( v50 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)Lock,
                                                   0LL,
                                                   (signed __int64)v50) )
                goto LABEL_96;
              Next = KxWaitForLockChainValid((__int64 *)v50);
            }
            Lock = Next + 8;
            v50->LockQueue.Next = 0LL;
            v52 = (__int64)v50->LockQueue.Lock;
            if ( (((unsigned __int8)v52 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), v52)) & 4) == 0 )
              goto LABEL_96;
            KeWakeAddressAll(Lock, v52);
            v15 = (volatile signed __int64 *)v33;
            v78 = v33;
          }
          else
          {
            KiReleaseQueuedSpinLockInstrumented(v50, retaddr);
            v15 = (volatile signed __int64 *)v33;
            v78 = v33;
          }
        }
        else
        {
          if ( ((_DWORD)p_Blink[23] & 0xF) != 0
            || (unsigned __int64)v15 < 0xFFFFF6FB7DBED000uLL
            || (unsigned __int64)v15 > 0xFFFFF6FB7DBEDFFFuLL
            || (Lock = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) != 0
              && (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v15 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              Lock = (2 * (unsigned __int8)((__int64)(v15 + 0x12090482600LL) >> 3)) & 0x1F;
              _InterlockedAnd(
                (volatile signed __int32 *)&MiState
              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v15 + 0x12090482600LL) >> 3)) >> 5)
              + 2459,
                ~(3 << Lock));
              v15 = (volatile signed __int64 *)v33;
              v78 = v33;
              goto LABEL_62;
            }
            _InterlockedAnd64(v15, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_96:
            v15 = (volatile signed __int64 *)v33;
            v78 = v33;
            goto LABEL_62;
          }
          v45 = ((unsigned int)v15 >> 3) & 0x1FF;
          v46 = *(_DWORD *)(Lock + 4 * v45);
          Lock += 4 * v45;
          if ( (v46 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd((volatile signed __int32 *)Lock, 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)Lock);
              v15 = (volatile signed __int64 *)v33;
              v78 = v33;
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Lock, retaddr);
              v15 = (volatile signed __int64 *)v33;
              v78 = v33;
            }
          }
          else
          {
            if ( v46 >= 0 )
              KeBugCheckEx(0x10u, Lock, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              *(_DWORD *)Lock = 0;
              v15 = (volatile signed __int64 *)v33;
              v78 = v33;
            }
            else
            {
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(Lock, retaddr);
              v15 = (volatile signed __int64 *)v33;
              v78 = v33;
            }
          }
        }
      }
LABEL_62:
      if ( !v11 )
        break;
      --v11;
    }
    BugCheckParameter4 = BugCheckParameter1;
    if ( v15 == (volatile signed __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      return 0LL;
    MiUnlockPageTable((__int64)p_Blink, (unsigned __int64)v15);
    MiUnlockWorkingSetShared(p_Blink, a3);
    v10 = v99;
    v11 = 2LL;
    v7 = v76;
LABEL_23:
    v22 = MmAccessFault(2uLL, BugCheckParameter4, 0, (ULONG_PTR)v88 + 1);
    v23 = v22;
    if ( v22 < 0 && !v7 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v23, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    if ( v10 )
    {
      MiLockWorkingSetExclusive((__int64)p_Blink);
    }
    else if ( ((_DWORD)p_Blink[23] & 0xFu) >= 6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    else
    {
      if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
        v24 = &unk_140E38500;
      else
        v24 = p_Blink + 24;
      v25 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v26 = (_DWORD *)(*v24 + ((unsigned __int64)v25 << 6));
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v27);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v26);
        v28 = *v26 & 0x7FFFFFFF;
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(v26, v28 + 1, v28);
          if ( v29 == v28 )
            break;
          if ( v28 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v26, v27);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v26, v27);
      }
      v10 = v99;
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v25;
      BugCheckParameter4 = BugCheckParameter1;
    }
    if ( (v23 & 0x80000000) == 0LL )
    {
      v8 = v81;
      v9 = v97;
      v4 = a3;
      continue;
    }
    return (unsigned int)v23;
  }
}
