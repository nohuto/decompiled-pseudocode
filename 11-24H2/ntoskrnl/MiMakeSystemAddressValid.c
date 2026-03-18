/*
 * XREFs of MiMakeSystemAddressValid @ 0x1402176A0
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     MiFillHyperPtes @ 0x14045AF48 (MiFillHyperPtes.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2798 (MiWorkingSetInfoCheckPageTable.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x14067CF28 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068C850 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(ULONG_PTR BugCheckParameter1, int a2, unsigned __int8 a3, char a4)
{
  __int64 v5; // r9
  unsigned __int8 v6; // r10
  unsigned __int64 BugCheckParameter4; // rdi
  struct _LIST_ENTRY **p_Blink; // r13
  int v9; // r15d
  unsigned __int64 v10; // rcx
  BOOL v11; // eax
  int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  ULONG_PTR v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  _DWORD *v23; // rdi
  unsigned __int8 v24; // r14
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  _DWORD *MmInternal; // rcx
  volatile signed __int64 *v28; // r15
  struct _KPRCB *CurrentPrcb; // r8
  char v30; // al
  unsigned int v31; // ecx
  volatile __int64 *v32; // rdx
  __int64 Lock; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v36; // rcx
  char v37; // dl
  int v39; // eax
  struct _KPRCB *v40; // r8
  ULONG_PTR v41; // rsi
  signed __int64 v42; // rbx
  int v43; // r14d
  unsigned __int64 v44; // rdi
  char v45; // al
  unsigned int v46; // ecx
  volatile __int64 *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rbx
  unsigned int v51; // r14d
  bool v52; // zf
  signed __int64 v53; // rax
  struct _KPRCB *v54; // rdx
  char v55; // al
  __int64 v56; // rcx
  _KLOCK_QUEUE_HANDLE *v57; // rbx
  __int64 Next; // rax
  __int64 v59; // rdx
  __int64 v60; // r15
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rax
  signed __int64 v64; // rdi
  signed __int64 v65; // rax
  __int64 CurrentIrql; // rcx
  unsigned int v67; // r12d
  unsigned __int64 v68; // rdi
  char v69; // bl
  unsigned __int32 v70; // edx
  volatile signed __int32 *v71; // rdi
  int v72; // r13d
  __int64 v73; // rcx
  signed __int32 v74; // eax
  int v75; // ecx
  signed __int32 v76; // eax
  signed __int64 v77; // rdx
  int v78; // [rsp+34h] [rbp-CCh]
  struct _LIST_ENTRY **v79; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v80; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+48h] [rbp-B8h]
  _KPROCESS *BugCheckParameter3; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v83; // [rsp+68h] [rbp-98h]
  __int128 v84; // [rsp+70h] [rbp-90h]
  __int128 v85; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  ULONG_PTR v87; // [rsp+98h] [rbp-68h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  _OWORD v90[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v91; // [rsp+D0h] [rbp-30h]
  __int128 v92; // [rsp+E0h] [rbp-20h]
  __int128 v93; // [rsp+F0h] [rbp-10h]
  __int128 v94; // [rsp+100h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+10h]
  __int64 v96; // [rsp+120h] [rbp+20h]
  void *retaddr; // [rsp+178h] [rbp+78h]
  BOOL v99; // [rsp+188h] [rbp+88h]
  int v101; // [rsp+198h] [rbp+98h]

  v5 = 0LL;
  v96 = 0LL;
  v6 = a3;
  BugCheckParameter4 = BugCheckParameter1;
  memset(v90, 0, sizeof(v90));
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    BugCheckParameter3 = 0LL;
    p_Blink = (struct _LIST_ENTRY **)&unk_140E37FC0;
  }
  else
  {
    BugCheckParameter3 = KeGetCurrentThread()->ApcState.Process;
    p_Blink = &BugCheckParameter3[2].ReadyListHead.Blink;
  }
  v79 = p_Blink;
  v9 = a4 & 8;
  DWORD2(v91) = a2;
  v78 = v9;
  LOBYTE(v90[0]) = (v9 != 0) + 7;
  v10 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v83 = v10;
  v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  v12 = a4 & 1;
  v99 = v11;
  v101 = v12;
  v13 = 2LL;
  while ( 2 )
  {
    if ( v12 )
    {
      v84 = 0LL;
      v85 = 0LL;
      if ( (unsigned __int64)(((__int64)BugCheckParameter4 >> 47) + 1) <= 1 )
      {
        v14 = 4LL;
        *(_QWORD *)&v84 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *((_QWORD *)&v84 + 1) = (((unsigned __int64)v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v85 = ((*((_QWORD *)&v84 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *((_QWORD *)&v85 + 1) = (((unsigned __int64)v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v15 = *(&v83 + v14--);
          v16 = *(_QWORD *)v15;
          if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (v16 & 1) == 0 )
              break;
            if ( ((v16 & 0x42) == 0 || (v16 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v15 >> 3) & 0x1FF));
                  if ( (v36 & 0x20) != 0 )
                    LOBYTE(v16) = v16 | 0x20;
                  v37 = v16;
                  LOBYTE(v16) = v16 | 0x42;
                  if ( (v36 & 0x42) == 0 )
                    LOBYTE(v16) = v37;
                }
              }
            }
          }
          if ( (v16 & 1) == 0 )
            break;
          if ( (v16 & 0x80u) != 0LL )
          {
            if ( BugCheckParameter4 >= 0xFFFFF68000000000uLL && BugCheckParameter4 <= 0xFFFFF6FFFFFFFFFFuLL )
              break;
            return 0LL;
          }
          if ( !v14 )
            return 0LL;
        }
      }
      MiUnlockWorkingSetExclusive(p_Blink, v6);
      goto LABEL_20;
    }
    if ( v11 )
    {
      v39 = MiFastLockLeafPageTable(p_Blink, v10, 0LL);
      if ( v39 )
      {
        if ( v39 != 1 )
        {
          while ( 1 )
            BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        return 0LL;
      }
      v5 = 0LL;
    }
    BugCheckParameter2 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v87 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v80 = 0xFFFFF6FB7DBEDF68uLL;
    v30 = (_DWORD)p_Blink[23] & 0xF;
    if ( v30 )
    {
      if ( v30 == 7 )
      {
        v31 = 1;
      }
      else
      {
        v31 = 3;
        if ( v30 == 5 )
          v31 = 0;
      }
      v32 = (volatile __int64 *)(&MiState + 2 * v31 + 3232);
    }
    else
    {
      v31 = 2;
      v32 = (volatile __int64 *)(p_Blink + 22);
    }
    Lock = (__int64)CurrentPrcb->SelfmapLockHandle + 16 * v31 + 8 * v31;
    *(_QWORD *)(Lock + 8) = v32;
    *(_QWORD *)Lock = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      KiAcquireQueuedSpinLockInstrumented(Lock, v32);
      goto LABEL_74;
    }
    if ( _InterlockedExchange64(v32, Lock) )
    {
      KxWaitForLockOwnerShip(Lock);
      goto LABEL_74;
    }
    while ( 1 )
    {
      v41 = *(&BugCheckParameter2 + v13);
      v81 = v13;
      v40 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
      v42 = *(_QWORD *)v41;
      if ( v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL && (v42 & 1) != 0 )
      {
        LOBYTE(Lock) = (v42 & 0x42) != 0;
        if ( ((unsigned __int8)Lock & ((v42 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Lock = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Lock + 352) != 1 )
          {
            v48 = *(_QWORD *)(Lock + 1288);
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48 + 8 * ((v41 >> 3) & 0x1FF));
              if ( (v49 & 0x20) != 0 )
                v42 |= 0x20uLL;
              Lock = v42;
              v42 |= 0x42uLL;
              if ( (v49 & 0x42) == 0 )
                v42 = Lock;
            }
          }
        }
      }
      if ( (v42 & 0x81) != 1 )
        break;
      if ( (v42 & 0x20) == 0 )
      {
        v43 = 0;
        v44 = (__int64)(v41 << 25) >> 16;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v43 = 1;
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
          v40 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
          v5 = 0LL;
        }
        if ( v44 < 0xFFFFF68000000000uLL || v44 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          MiWriteValidPteNewProtection(v41);
          v40 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
          v5 = 0LL;
        }
        else
        {
          do
          {
            v77 = v42;
            Lock = v42 | 0x20;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v41, Lock, v42);
          }
          while ( v42 != v77 );
        }
        if ( v43 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
          v40 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
          v5 = 0LL;
        }
      }
      if ( (volatile signed __int64 *)v41 == v28 )
        goto LABEL_72;
      if ( v41 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v40 = KeGetCurrentPrcb();
        v45 = (_DWORD)p_Blink[23] & 0xF;
        if ( v45 )
        {
          if ( v45 == 7 )
          {
            v46 = 1;
          }
          else
          {
            v46 = 3;
            if ( v45 == 5 )
              v46 = 0;
          }
          v47 = (volatile __int64 *)(&MiState + 2 * v46 + 3232);
        }
        else
        {
          v46 = 2;
          v47 = (volatile __int64 *)(p_Blink + 22);
        }
        Lock = (__int64)v40->SelfmapLockHandle + 16 * v46 + 8 * v46;
        *(_QWORD *)(Lock + 8) = v47;
        *(_QWORD *)Lock = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( !_InterlockedExchange64(v47, Lock) )
            goto LABEL_117;
          KxWaitForLockOwnerShip(Lock);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(Lock, v47);
        }
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) == 0
             && v41 >= 0xFFFFF6FB7DBED000uLL
             && v41 <= 0xFFFFF6FB7DBEDFFFuLL
             && (Lock = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Lock + 4LL * (((unsigned int)v41 >> 3) & 0x1FF)));
      }
      else
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v67 = 0;
          v68 = (unsigned __int64)(2 * (unsigned int)((__int64)(v41 + 0x90482413000LL) >> 3)) >> 5;
          v69 = (2 * ((__int64)(v41 + 0x90482413000LL) >> 3)) & 0x1F;
          v70 = *(&MiState + v68 + 2459);
          v71 = (volatile signed __int32 *)(&MiState + v68 + 2459);
          v72 = 2 << v69;
          do
          {
            while ( 1 )
            {
              v73 = (2 * (unsigned __int8)((__int64)(v41 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( ((v70 >> v69) & 1) == 0 )
                break;
              if ( ((v70 >> v69) & 2) != 0 )
              {
                do
                {
                  if ( (++v67 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v73) )
                  {
                    HvlNotifyLongSpinWait(v67);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v70 = *v71;
                  v73 = (2 * (unsigned __int8)((__int64)(v41 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v71 >> v69) & 1) != 0 );
              }
              else
              {
                v75 = v70 | v72;
                v76 = _InterlockedCompareExchange(v71, v70 | v72, v70);
                v52 = v70 == v76;
                v70 = v76;
                if ( v52 )
                  v70 = v75;
              }
            }
            Lock = ~(2 << v69) & (v70 | (1 << v69));
            v74 = _InterlockedCompareExchange(v71, Lock, v70);
            v52 = v70 == v74;
            v70 = v74;
          }
          while ( !v52 );
        }
        else
        {
          v50 = *(_QWORD *)v41;
          v51 = 0;
          if ( v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL && (v50 & 1) != 0 )
          {
            LOBYTE(Lock) = (v50 & 0x42) != 0;
            if ( ((unsigned __int8)Lock & ((v50 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Lock = (__int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Lock + 352) != 1 )
              {
                v62 = *(_QWORD *)(Lock + 1288);
                if ( v62 )
                {
                  v63 = *(_QWORD *)(v62 + 8 * ((v41 >> 3) & 0x1FF));
                  if ( (v63 & 0x20) != 0 )
                    v50 |= 0x20uLL;
                  Lock = v50;
                  v50 |= 0x42uLL;
                  if ( (v63 & 0x42) == 0 )
                    v50 = Lock;
                }
              }
            }
          }
          while ( (v50 & 1) != 0 )
          {
            if ( (v50 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v50 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v51 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Lock) )
                  {
                    HvlNotifyLongSpinWait(v51);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v50 = *(_QWORD *)v41;
                }
                while ( (*(_QWORD *)v41 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v64 = v50 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v50 & 0x21) == 1 )
                  {
                    Lock = 0x4000000000LL;
                    if ( v41 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v41, v50 | 0x2000000000000000LL);
                  }
                }
                v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v41, v64, v50);
                v52 = v50 == v65;
                v50 = v65;
                if ( v52 )
                  v50 = v64;
              }
            }
            else
            {
              Lock = v50 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v53 = _InterlockedCompareExchange64((volatile signed __int64 *)v41, Lock, v50);
              v52 = v50 == v53;
              v50 = v53;
              if ( v52 )
                break;
            }
          }
        }
        p_Blink = v79;
        v13 = v81;
        v28 = (volatile signed __int64 *)v80;
      }
      v5 = 0LL;
LABEL_117:
      if ( v28 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
      {
        v54 = KeGetCurrentPrcb();
        v55 = (_DWORD)p_Blink[23] & 0xF;
        if ( v55 )
        {
          if ( v55 == 7 )
          {
            v56 = 1LL;
          }
          else
          {
            v56 = 3LL;
            if ( v55 == 5 )
              v56 = 0LL;
          }
        }
        else
        {
          v56 = 2LL;
        }
        v57 = &v54->SelfmapLockHandle[v56];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(v57, retaddr, v40, 0LL);
          v28 = (volatile signed __int64 *)v41;
          v80 = v41;
        }
        else
        {
          _m_prefetchw(v57);
          Next = (__int64)v57->LockQueue.Next;
          if ( !v57->LockQueue.Next )
          {
            Lock = (__int64)v57->LockQueue.Lock;
            if ( v57 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)Lock,
                                                 0LL,
                                                 (signed __int64)v57) )
              goto LABEL_121;
            Next = KxWaitForLockChainValid(v57, v54, v40, 0LL);
          }
          Lock = Next + 8;
          v57->LockQueue.Next = 0LL;
          v59 = (__int64)v57->LockQueue.Lock;
          if ( (((unsigned __int8)v59 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), v59)) & 4) == 0 )
            goto LABEL_121;
          KeWakeAddressAll(Lock, v59, v40, v5);
          v28 = (volatile signed __int64 *)v41;
          v80 = v41;
        }
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
             || (unsigned __int64)v28 < 0xFFFFF6FB7DBED000uLL
             || (unsigned __int64)v28 > 0xFFFFF6FB7DBEDFFFuLL
             || (Lock = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) == 0
          || (unsigned __int64)v28 < 0xFFFFF6FB7DBED000uLL
          || (unsigned __int64)v28 > 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd64(v28, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_121:
          v28 = (volatile signed __int64 *)v41;
          v80 = v41;
          goto LABEL_72;
        }
        Lock = (2 * (unsigned __int8)((__int64)(v28 + 0x12090482600LL) >> 3)) & 0x1F;
        _InterlockedAnd(
          (volatile signed __int32 *)&MiState
        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v28 + 0x12090482600LL) >> 3)) >> 5)
        + 2459,
          ~(3 << Lock));
        v28 = (volatile signed __int64 *)v41;
        v80 = v41;
      }
      else
      {
        v60 = ((unsigned int)v28 >> 3) & 0x1FF;
        v61 = *(_DWORD *)(Lock + 4 * v60);
        Lock += 4 * v60;
        if ( (v61 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd((volatile signed __int32 *)Lock, 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)Lock);
            v28 = (volatile signed __int64 *)v41;
            v80 = v41;
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Lock, retaddr);
            v28 = (volatile signed __int64 *)v41;
            v80 = v41;
          }
        }
        else
        {
          if ( v61 >= 0 )
            KeBugCheckEx(0x10u, Lock, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            *(_DWORD *)Lock = 0;
            v28 = (volatile signed __int64 *)v41;
            v80 = v41;
          }
          else
          {
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(Lock, retaddr);
            v28 = (volatile signed __int64 *)v41;
            v80 = v41;
          }
        }
      }
LABEL_72:
      if ( !v13 )
        break;
      --v13;
LABEL_74:
      v5 = 0LL;
    }
    BugCheckParameter4 = BugCheckParameter1;
    if ( v28 == (volatile signed __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      return 0LL;
    MiUnlockPageTableInternal(p_Blink, v28);
    MiUnlockWorkingSetShared(p_Blink, a3);
    v12 = v101;
    v13 = 2LL;
    v9 = v78;
LABEL_20:
    v17 = MmAccessFault(2uLL, BugCheckParameter4, 0, (ULONG_PTR)v90 + 1);
    v20 = v17;
    if ( v17 < 0 && !v9 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v20, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    if ( v12 )
    {
      MiLockWorkingSetExclusive((__int64)p_Blink);
    }
    else if ( ((_DWORD)p_Blink[23] & 0xFu) >= 6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v18) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18, v19);
      }
    }
    else
    {
      if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
        v21 = &unk_140E38740;
      else
        v21 = p_Blink + 24;
      v22 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v23 = (_DWORD *)(*v21 + ((unsigned __int64)v22 << 6));
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v18) = 2;
        KiRaiseIrqlProcessIrqlFlags(v24, v18, v19);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v23, v24);
      }
      else
      {
        _m_prefetchw(v23);
        v25 = *v23 & 0x7FFFFFFF;
        while ( 1 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(v23, v25 + 1, v25);
          if ( v26 == v25 )
            break;
          if ( v25 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v23, v24);
            break;
          }
        }
      }
      BugCheckParameter4 = BugCheckParameter1;
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v22;
      v12 = v101;
    }
    if ( (v20 & 0x80000000) == 0LL )
    {
      v10 = v83;
      v5 = 0LL;
      v11 = v99;
      v6 = a3;
      continue;
    }
    return (unsigned int)v20;
  }
}
