/*
 * XREFs of MiMakeSystemAddressValid @ 0x140244700
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiFillHyperPtes @ 0x1404502E8 (MiFillHyperPtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14049D728 (MiWorkingSetInfoCheckPageTable.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(ULONG_PTR BugCheckParameter1, int a2, unsigned __int8 a3, char a4)
{
  __int64 v5; // r9
  unsigned __int8 v6; // si
  unsigned __int64 BugCheckParameter4; // rdi
  struct _LIST_ENTRY **p_Blink; // r15
  int v9; // r14d
  ULONG_PTR v10; // rcx
  BOOL v11; // eax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rsi
  _QWORD *v17; // rax
  unsigned int v18; // edi
  _DWORD *v19; // rbx
  unsigned __int8 v20; // bp
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  _DWORD *MmInternal; // rcx
  volatile signed __int64 *v24; // r13
  struct _KPRCB *CurrentPrcb; // r8
  char v26; // al
  unsigned int v27; // ecx
  signed __int64 Lock; // rdx
  unsigned __int64 Process; // rcx
  __int64 v30; // rax
  __int64 i; // r14
  ULONG_PTR v32; // rsi
  struct _KPRCB *v33; // r8
  signed __int64 v34; // rbx
  int v35; // ebp
  unsigned __int64 v36; // rdi
  char v38; // al
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  unsigned __int64 v43; // rbx
  unsigned int v44; // ebp
  bool v45; // zf
  signed __int64 v46; // rax
  char v47; // al
  __int64 v48; // rcx
  _KLOCK_QUEUE_HANDLE *v49; // rbx
  __int64 Next; // rax
  __int64 v51; // r13
  int v52; // eax
  __int64 v53; // rax
  signed __int64 v54; // rdi
  signed __int64 v55; // rax
  __int64 CurrentIrql; // rcx
  unsigned int v57; // r12d
  unsigned __int64 v58; // rdi
  char v59; // bl
  volatile signed __int32 *v60; // rdi
  int v61; // r15d
  __int64 v62; // rcx
  unsigned __int32 v63; // eax
  unsigned int v64; // ecx
  unsigned __int32 v65; // eax
  int v66; // [rsp+34h] [rbp-124h]
  struct _LIST_ENTRY **v67; // [rsp+38h] [rbp-120h]
  unsigned __int64 v68; // [rsp+58h] [rbp-100h]
  _KPROCESS *BugCheckParameter3; // [rsp+60h] [rbp-F8h]
  ULONG_PTR v70; // [rsp+68h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  ULONG_PTR v72; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v73; // [rsp+80h] [rbp-D8h]
  __int64 v74; // [rsp+88h] [rbp-D0h]
  _OWORD v75[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v76; // [rsp+B0h] [rbp-A8h]
  __int128 v77; // [rsp+C0h] [rbp-98h]
  __int128 v78; // [rsp+D0h] [rbp-88h]
  __int128 v79; // [rsp+E0h] [rbp-78h]
  __int128 v80; // [rsp+F0h] [rbp-68h]
  __int64 v81; // [rsp+100h] [rbp-58h]
  __int64 retaddr; // [rsp+158h] [rbp+0h]
  BOOL v84; // [rsp+168h] [rbp+10h]
  int v86; // [rsp+178h] [rbp+20h]

  memset(v75, 0, sizeof(v75));
  v5 = 0LL;
  v6 = a3;
  BugCheckParameter4 = BugCheckParameter1;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    BugCheckParameter3 = 0LL;
    p_Blink = (struct _LIST_ENTRY **)&unk_140E38100;
  }
  else
  {
    BugCheckParameter3 = KeGetCurrentThread()->ApcState.Process;
    p_Blink = &BugCheckParameter3[2].ReadyListHead.Blink;
  }
  v67 = p_Blink;
  v9 = a4 & 8;
  DWORD2(v76) = a2;
  v66 = v9;
  LOBYTE(v75[0]) = (v9 != 0) + 7;
  v10 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v70 = v10;
  v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  v12 = a4 & 1;
  v84 = v11;
  v86 = v12;
  while ( 2 )
  {
    if ( v12 )
    {
      if ( MmIsAddressValidEx(BugCheckParameter4) )
        return 0LL;
      MiUnlockWorkingSetExclusive((__int64)p_Blink, v6);
      goto LABEL_11;
    }
    if ( v11 )
    {
      v42 = MiFastLockLeafPageTable((__int64)p_Blink, v10, 0);
      if ( v42 )
      {
        if ( v42 != 1 )
        {
          while ( 1 )
            BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        return 0LL;
      }
      v5 = 0LL;
    }
    BugCheckParameter2 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v72 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v73 = ((v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v74 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v68 = 0xFFFFF6FB7DBEDF68uLL;
    v26 = (_DWORD)p_Blink[23] & 0xF;
    if ( v26 )
    {
      if ( v26 == 7 )
      {
        v27 = 1;
        Lock = (signed __int64)(&MiState + 3234);
      }
      else
      {
        v27 = 3;
        if ( v26 == 5 )
          v27 = 0;
        Lock = (signed __int64)(&MiState + 2 * v27 + 3232);
      }
    }
    else
    {
      v27 = 2;
      Lock = (signed __int64)(p_Blink + 22);
    }
    Process = (unsigned __int64)CurrentPrcb->SelfmapLockHandle + 16 * v27 + 8 * v27;
    *(_QWORD *)(Process + 8) = Lock;
    *(_QWORD *)Process = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      KiAcquireQueuedSpinLockInstrumented(Process, Lock);
LABEL_144:
      v5 = 0LL;
      goto LABEL_32;
    }
    v30 = _InterlockedExchange64((volatile __int64 *)Lock, Process);
    if ( v30 )
    {
      KxWaitForLockOwnerShip(Process, v30);
      goto LABEL_144;
    }
LABEL_32:
    for ( i = 2LL; ; --i )
    {
      v32 = *(&BugCheckParameter2 + i);
      v33 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
      v34 = *(_QWORD *)v32;
      if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL && (v34 & 1) != 0 )
      {
        LOBYTE(Process) = (v34 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v34 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 352) != 1 )
          {
            Lock = *(_QWORD *)(Process + 1288);
            if ( Lock )
            {
              v41 = *(_QWORD *)(Lock + 8 * ((v32 >> 3) & 0x1FF));
              if ( (v41 & 0x20) != 0 )
                v34 |= 0x20uLL;
              Process = v34;
              v34 |= 0x42uLL;
              if ( (v41 & 0x42) == 0 )
                v34 = Process;
            }
          }
        }
      }
      if ( (v34 & 0x81) != 1 )
        break;
      if ( (v34 & 0x20) == 0 )
      {
        v35 = 0;
        v36 = (__int64)(v32 << 25) >> 16;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v35 = 1;
          ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
          v5 = 0LL;
          v33 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
        }
        if ( v36 < 0xFFFFF68000000000uLL || v36 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          MiWriteValidPteNewProtection(v32);
          v5 = 0LL;
          v33 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
        }
        else
        {
          do
          {
            Lock = v34;
            Process = v34 | 0x20;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, Process, v34);
          }
          while ( v34 != Lock );
        }
        if ( v35 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
          v5 = 0LL;
          v33 = (struct _KPRCB *)0xFFFFF6FB7DBED000LL;
        }
      }
      if ( (volatile signed __int64 *)v32 == v24 )
        goto LABEL_48;
      if ( v32 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v33 = KeGetCurrentPrcb();
        v38 = (_DWORD)p_Blink[23] & 0xF;
        if ( v38 )
        {
          if ( v38 == 7 )
          {
            v39 = 1;
          }
          else
          {
            v39 = 3;
            if ( v38 == 5 )
              v39 = 0;
          }
          Lock = (signed __int64)(&MiState + 2 * v39 + 3232);
        }
        else
        {
          v39 = 2;
          Lock = (signed __int64)(p_Blink + 22);
        }
        Process = (unsigned __int64)v33->SelfmapLockHandle + 16 * v39 + 8 * v39;
        *(_QWORD *)(Process + 8) = Lock;
        *(_QWORD *)Process = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v40 = _InterlockedExchange64((volatile __int64 *)Lock, Process);
          if ( !v40 )
            goto LABEL_89;
          KxWaitForLockOwnerShip(Process, v40);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(Process, Lock);
        }
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) == 0
             && v32 >= 0xFFFFF6FB7DBED000uLL
             && v32 <= 0xFFFFF6FB7DBEDFFFuLL
             && (Process = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4LL * (((unsigned int)v32 >> 3) & 0x1FF)));
      }
      else
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v57 = 0;
          v58 = (unsigned __int64)(2 * (unsigned int)((__int64)(v32 + 0x90482413000LL) >> 3)) >> 5;
          v59 = (2 * ((__int64)(v32 + 0x90482413000LL) >> 3)) & 0x1F;
          Lock = *(&MiState + v58 + 2459);
          v60 = (volatile signed __int32 *)(&MiState + v58 + 2459);
          v61 = 2 << v59;
          do
          {
            while ( 1 )
            {
              v62 = (2 * (unsigned __int8)((__int64)(v32 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( (((unsigned int)Lock >> v59) & 1) == 0 )
                break;
              if ( (((unsigned int)Lock >> v59) & 2) != 0 )
              {
                do
                {
                  if ( (++v57 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v62, Lock, v33, v5) )
                  {
                    HvlNotifyLongSpinWait(v57);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  Lock = *(unsigned int *)v60;
                  v62 = (2 * (unsigned __int8)((__int64)(v32 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v60 >> v59) & 1) != 0 );
              }
              else
              {
                v64 = v61 | Lock;
                v65 = _InterlockedCompareExchange(v60, v61 | Lock, Lock);
                v45 = (_DWORD)Lock == v65;
                Lock = v65;
                if ( v45 )
                  Lock = v64;
              }
            }
            Process = ~(2 << v59) & ((1 << v59) | (unsigned int)Lock);
            v63 = _InterlockedCompareExchange(v60, Process, Lock);
            v45 = (_DWORD)Lock == v63;
            Lock = v63;
          }
          while ( !v45 );
        }
        else
        {
          v43 = *(_QWORD *)v32;
          v44 = 0;
          if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL && (v43 & 1) != 0 )
          {
            LOBYTE(Process) = (v43 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v43 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                Lock = *(_QWORD *)(Process + 1288);
                if ( Lock )
                {
                  v53 = *(_QWORD *)(Lock + 8 * ((v32 >> 3) & 0x1FF));
                  if ( (v53 & 0x20) != 0 )
                    v43 |= 0x20uLL;
                  Process = v43;
                  v43 |= 0x42uLL;
                  if ( (v53 & 0x42) == 0 )
                    v43 = Process;
                }
              }
            }
          }
          while ( (v43 & 1) != 0 )
          {
            if ( (v43 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v43 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v44 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, Lock, v33, v5) )
                  {
                    HvlNotifyLongSpinWait(v44);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v43 = *(_QWORD *)v32;
                }
                while ( (*(_QWORD *)v32 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v54 = v43 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v43 & 0x21) == 1 )
                  {
                    Process = 0x4000000000LL;
                    if ( v32 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v32, v43 | 0x2000000000000000LL, 128LL);
                  }
                }
                v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, v54, v43);
                v45 = v43 == v55;
                v43 = v55;
                if ( v45 )
                  v43 = v54;
              }
            }
            else
            {
              Process = v43 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, Process, v43);
              v45 = v43 == v46;
              v43 = v46;
              if ( v45 )
                break;
            }
          }
          v24 = (volatile signed __int64 *)v68;
        }
        p_Blink = v67;
      }
      v5 = 0LL;
LABEL_89:
      if ( v24 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
      {
        Lock = (signed __int64)KeGetCurrentPrcb();
        v47 = (_DWORD)p_Blink[23] & 0xF;
        if ( v47 )
        {
          if ( v47 == 7 )
          {
            v48 = 24LL;
          }
          else
          {
            v48 = 72LL;
            if ( v47 == 5 )
              v48 = 0LL;
          }
        }
        else
        {
          v48 = 48LL;
        }
        v49 = (_KLOCK_QUEUE_HANDLE *)(v48 + Lock + 40000);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(v49, retaddr);
          v24 = (volatile signed __int64 *)v32;
          v68 = v32;
        }
        else
        {
          _m_prefetchw(v49);
          Next = (__int64)v49->LockQueue.Next;
          if ( !v49->LockQueue.Next )
          {
            Process = (unsigned __int64)v49->LockQueue.Lock;
            if ( v49 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)Process,
                                                 0LL,
                                                 (signed __int64)v49) )
              goto LABEL_93;
            Next = KxWaitForLockChainValid(v49);
          }
          Process = Next + 8;
          v49->LockQueue.Next = 0LL;
          Lock = (signed __int64)v49->LockQueue.Lock;
          if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) == 0 )
            goto LABEL_93;
          KeWakeAddressAll(Process, Lock, v33, v5);
          v24 = (volatile signed __int64 *)v32;
          v68 = v32;
        }
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
             || (unsigned __int64)v24 < 0xFFFFF6FB7DBED000uLL
             || (unsigned __int64)v24 > 0xFFFFF6FB7DBEDFFFuLL
             || (Process = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) == 0
          || (unsigned __int64)v24 < 0xFFFFF6FB7DBED000uLL
          || (unsigned __int64)v24 > 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd64(v24, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_93:
          v24 = (volatile signed __int64 *)v32;
          v68 = v32;
          goto LABEL_48;
        }
        Process = (2 * (unsigned __int8)((__int64)(v24 + 0x12090482600LL) >> 3)) & 0x1F;
        Lock = (signed __int64)(&MiState
                              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v24 + 0x12090482600LL) >> 3)) >> 5));
        _InterlockedAnd((volatile signed __int32 *)(Lock + 9836), ~(3 << Process));
        v24 = (volatile signed __int64 *)v32;
        v68 = v32;
      }
      else
      {
        v51 = ((unsigned int)v24 >> 3) & 0x1FF;
        v52 = *(_DWORD *)(Process + 4 * v51);
        Process += 4 * v51;
        if ( (v52 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd((volatile signed __int32 *)Process, 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)Process);
            v24 = (volatile signed __int64 *)v32;
            v68 = v32;
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)Process, retaddr);
            v24 = (volatile signed __int64 *)v32;
            v68 = v32;
          }
        }
        else
        {
          if ( v52 >= 0 )
            KeBugCheckEx(0x10u, Process, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            *(_DWORD *)Process = 0;
            v24 = (volatile signed __int64 *)v32;
            v68 = v32;
          }
          else
          {
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(Process, retaddr);
            v24 = (volatile signed __int64 *)v32;
            v68 = v32;
          }
        }
      }
LABEL_48:
      if ( !i )
        break;
      v5 = 0LL;
    }
    BugCheckParameter4 = BugCheckParameter1;
    if ( v24 == (volatile signed __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      return 0LL;
    MiUnlockPageTableInternal(p_Blink, v24);
    MiUnlockWorkingSetShared((__int64)p_Blink, a3);
    v12 = v86;
    v9 = v66;
LABEL_11:
    v13 = MmAccessFault(2uLL, BugCheckParameter4, 0, (ULONG_PTR)v75 + 1);
    v16 = v13;
    if ( v13 < 0 && !v9 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    if ( v12 )
    {
      MiLockWorkingSetExclusive(p_Blink);
    }
    else if ( ((_DWORD)p_Blink[23] & 0xFu) >= 6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    else
    {
      if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
        v17 = &unk_140E38880;
      else
        v17 = p_Blink + 24;
      v18 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v19 = (_DWORD *)(*v17 + ((unsigned __int64)v18 << 6));
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v20, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, v20);
      }
      else
      {
        _m_prefetchw(v19);
        v21 = *v19 & 0x7FFFFFFF;
        while ( 1 )
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(v19, v21 + 1, v21);
          if ( v22 == v21 )
            break;
          if ( v21 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v19, v20, v14, v15);
            break;
          }
        }
      }
      v12 = v86;
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v18;
      BugCheckParameter4 = BugCheckParameter1;
    }
    if ( (v16 & 0x80000000) == 0LL )
    {
      v10 = v70;
      v5 = 0LL;
      v11 = v84;
      v6 = a3;
      continue;
    }
    return (unsigned int)v16;
  }
}
