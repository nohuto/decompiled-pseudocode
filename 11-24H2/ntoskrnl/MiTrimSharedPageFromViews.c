/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1402BB5D0
 * Callers:
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiGetMultiplexedVm @ 0x140240018 (MiGetMultiplexedVm.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiDeleteTrimViewInfoList @ 0x140A4C370 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, ULONG_PTR a4, _QWORD *a5)
{
  ULONG_PTR v7; // rbx
  __int64 *ProcessorFlushList; // r13
  unsigned int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // r15
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v13; // r8
  ULONG_PTR MmInternal; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  KIRQL v17; // al
  ULONG_PTR v18; // r9
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v31; // esi
  unsigned __int64 v32; // rcx
  unsigned int v33; // r10d
  int v34; // eax
  int v35; // r10d
  BOOL v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  BOOL v41; // eax
  __int64 Address; // rax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r8
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rcx
  unsigned int v53; // esi
  char v54; // al
  __int64 v55; // r10
  ULONG *v56; // rax
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // r8
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 *v61; // rdx
  __int64 v62; // rax
  int v63; // ecx
  struct _KPRCB *v64; // rax
  char *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned __int8 v69; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v70; // [rsp+38h] [rbp-C8h]
  unsigned int v71; // [rsp+40h] [rbp-C0h]
  unsigned __int64 valid; // [rsp+48h] [rbp-B8h]
  struct _LIST_ENTRY **v73; // [rsp+50h] [rbp-B0h]
  __int64 v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+60h] [rbp-A0h]
  char *Object; // [rsp+68h] [rbp-98h]
  __int64 v78; // [rsp+70h] [rbp-90h]
  __int64 *v79; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v80; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v81; // [rsp+88h] [rbp-78h]
  unsigned __int64 v82; // [rsp+90h] [rbp-70h]
  int v83; // [rsp+98h] [rbp-68h]
  int v84; // [rsp+9Ch] [rbp-64h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  _QWORD *v86; // [rsp+A8h] [rbp-58h]
  PVOID v87; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v88; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v89[8]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v90[6]; // [rsp+140h] [rbp+40h] BYREF
  __int64 retaddr; // [rsp+1E8h] [rbp+E8h]

  v80 = a4;
  v84 = a2;
  v86 = a5;
  v88 = 0LL;
  v7 = 0LL;
  v70 = 0LL;
  ProcessorFlushList = 0LL;
  v79 = 0LL;
  v9 = 0;
  v69 = 17;
  v10 = 0LL;
  v78 = 0LL;
  v11 = 0LL;
  v71 = 0;
  v73 = 0LL;
  valid = 0LL;
  memset(v90, 0, 48);
  CurrentThread = KeGetCurrentThread();
  v81 = CurrentThread;
  memset(v89, 0, sizeof(v89));
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    v13 = a1;
    P = a1;
    v87 = (PVOID)*a1;
    MmInternal = a1[1];
    v15 = v13[2];
    v16 = v13[4];
    Object = (char *)MmInternal;
    v82 = v13[3];
    v75 = 0;
    v83 = 0;
    if ( MmInternal )
    {
      if ( (_KPROCESS *)MmInternal != KeGetCurrentThread()->ApcState.Process )
      {
        v17 = ExAcquireSpinLockExclusive(&dword_140E373C0);
        v18 = (ULONG_PTR)Object;
        v19 = v17;
        v76 = *((_DWORD *)Object + 302);
        if ( (*((_DWORD *)Object + 125) & 0xC00u) < 0xC00
          || *((_QWORD *)Object + 141)
          || (v20 = *((_DWORD *)Object + 302) >> 8, (v20 & 0xF0) == 0xF0)
          || *((_QWORD *)Object + 146) <= 1uLL )
        {
          v75 = 0;
        }
        else
        {
          BYTE1(v76) = (v20 + 16) ^ ((v20 + 16) ^ v20) & 0xF;
          *((_WORD *)Object + 604) = v76;
          v75 = 1;
        }
        if ( v17 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            dword_140E373C0 = 0;
LABEL_23:
            if ( !v75 )
              goto LABEL_184;
            memset(&v90[3], 0, 48);
            KiStackAttachProcess(v18);
            goto LABEL_48;
          }
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E373C0, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            dword_140E373C0 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E373C0, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
          __writecr8(v19);
        }
        v18 = (ULONG_PTR)Object;
        goto LABEL_23;
      }
      CurrentThread = v81;
    }
    v21 = *((_DWORD *)v13 + 10);
    if ( v21 < 2 || v21 == 3 )
      goto LABEL_49;
    if ( (a3 & 6) != 0 )
      goto LABEL_184;
    --CurrentThread->SpecialApcDisable;
    v22 = KeAbPreAcquire(&qword_140E35F40, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35F40, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_140E35F40, 0LL, v22, &qword_140E35F40);
    if ( v22 )
      *(_BYTE *)(v22 + 10) = 1;
    MmInternal = (ULONG_PTR)::P;
    if ( ::P )
    {
      do
      {
        v23 = *(_QWORD *)(MmInternal + 88) & 0xFFFFFFFFFFFFF000uLL;
        if ( v15 < v23 + *(_QWORD *)(MmInternal + 32) )
        {
          if ( v15 >= v23 )
            break;
          MmInternal = *(_QWORD *)MmInternal;
        }
        else
        {
          MmInternal = *(_QWORD *)(MmInternal + 8);
        }
      }
      while ( MmInternal );
      if ( MmInternal )
      {
        v79 = *(__int64 **)(MmInternal + 48);
        if ( *v79 == v80
          && v15 + (*(_QWORD *)(MmInternal + 24) << 12) - v16 == (*(_QWORD *)(MmInternal + 88) & 0xFFFFFFFFFFFFF000uLL) )
        {
          v83 = 1;
LABEL_48:
          v7 = v70;
LABEL_49:
          v27 = v16 - 4096;
          if ( v15 >= v82 )
            goto LABEL_184;
          while ( 2 )
          {
            v74 = v27 + 4096;
            if ( v10 && ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != v11 )
            {
              if ( v7 )
              {
                if ( *(_DWORD *)(v7 + 28) )
                {
                  v28 = MiFreeWsleList(v10, v7, 0);
                  v29 = v71;
                  if ( v28 )
                    v29 = 277;
                  v71 = v29;
                }
                v70 = 0LL;
              }
              if ( v78 )
              {
                MiFlushTbList(v78);
                v78 = 0LL;
              }
              if ( ProcessorFlushList )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                MmInternal = (ULONG_PTR)MxTempPrcb;
                ProcessorFlushList = 0LL;
                if ( CurrentPrcb->MmInternal )
                  MmInternal = (ULONG_PTR)CurrentPrcb->MmInternal;
                *(_QWORD *)(20600LL * (unsigned int)--*(_DWORD *)(MmInternal + 348) + MmInternal + 20976) = 0LL;
              }
              if ( Object )
              {
                if ( v11 )
                  MiUnlockPageTableInternal(v10, v11);
                MiUnlockWorkingSetShared(v10, v69);
              }
              else if ( *((_QWORD *)&v89[1] + 1) )
              {
                LOBYTE(MmInternal) = 17;
                MiReleaseFaultState((char *)&v89[1] + 8, MmInternal, 0LL);
                *((_QWORD *)&v89[1] + 1) = 0LL;
                v11 = 0LL;
                valid = 0LL;
                v10 = 0LL;
                v73 = 0LL;
                goto LABEL_71;
              }
              v11 = 0LL;
              valid = 0LL;
              v10 = 0LL;
              v73 = 0LL;
            }
LABEL_71:
            if ( Object )
            {
              v31 = 0;
              if ( !v10 )
              {
                v10 = (__int64)(Object + 1024);
                v73 = (struct _LIST_ENTRY **)(Object + 1024);
                v69 = MiLockWorkingSetShared(Object + 1024);
                if ( (a3 & 1) != 0 && !v78 )
                {
                  if ( !ProcessorFlushList )
                    ProcessorFlushList = MiGetProcessorFlushList();
                  *((_DWORD *)ProcessorFlushList + 4) = 0;
                  *((_DWORD *)ProcessorFlushList + 5) = 10;
                  *ProcessorFlushList = v10;
                  v78 = (__int64)ProcessorFlushList;
                  *((_BYTE *)ProcessorFlushList + 24) = (*((_DWORD *)Object + 302) & 0x800) != 0;
                  if ( (*((_DWORD *)Object + 302) & 0xF) != 0
                    || (struct _LIST_ENTRY **)v10 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
                  {
                    v41 = (*((_DWORD *)Object + 302) & 0xF) == 0;
                  }
                  else
                  {
                    *((_DWORD *)ProcessorFlushList + 4) |= 9u;
                    v41 = 0;
                  }
                  *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                  *((_DWORD *)ProcessorFlushList + 2) = v41;
                  *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                  *((_DWORD *)ProcessorFlushList + 7) = 0;
                  ProcessorFlushList[4] = 0LL;
                  ProcessorFlushList[5] = 0LL;
                }
              }
              MiLockVadTree(1LL);
              Address = MiLocateAddress(v15);
              v43 = Address;
              if ( !Address
                || (v44 = *(_DWORD *)(Address + 48), (v44 & 0x200000) != 0)
                || (v45 = *(_DWORD *)(v80 + 56), (v45 & 0x20) == 0) && (v44 & 0x70) != 0
                || (v79 = *(__int64 **)(v43 + 72), *v79 != v80) )
              {
LABEL_180:
                ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                {
                  _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
                  _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
                }
                else
                {
                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
                    (volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1,
                    retaddr);
                }
                goto LABEL_184;
              }
              if ( (v45 & 0x20) != 0 )
              {
                v46 = *(_QWORD *)(v43 + 80);
                if ( (unsigned __int64)v86 < v46 )
                  goto LABEL_180;
                v47 = *(unsigned int *)(v43 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v43 + 32) << 32);
                if ( (unsigned __int64)v86 >= v46
                                            + -8LL * v47
                                            + 8
                                            + 8
                                            * (*(unsigned int *)(v43 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v43 + 33) << 32)) )
                  goto LABEL_180;
                v15 = (v47 << 12) + ((__int64)((__int64)v86 - v46) >> 3 << 12);
              }
              else
              {
                ProtoPteAddress = MiGetProtoPteAddress(v43, v15 >> 12, 8LL, &v79);
                if ( !ProtoPteAddress || !v79 )
                  goto LABEL_180;
                if ( v74 != MiStartingOffset(v79, ProtoPteAddress, 0xFFFFFFFF) )
                {
                  MiUnlockVadTree(1, 0x11u);
                  goto LABEL_184;
                }
              }
              MiUnlockVadTree(1, 0x11u);
              MmInternal = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v49 = ((MmInternal >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              if ( v11 != v49 )
              {
                if ( v11 )
                {
                  v15 -= 4096LL;
                  v7 = v70;
                  v27 = v74 - 4096;
                  goto LABEL_177;
                }
                valid = MiLockLowestValidPageTableEx(v10, MmInternal, &v88, 0);
                v11 = valid;
                if ( valid != v49 )
                  goto LABEL_184;
              }
            }
            else
            {
              v31 = 1;
              if ( v10 )
              {
                if ( v15 >= 0xFFFF800000000000uLL )
                  goto LABEL_88;
                v37 = 0;
              }
              else
              {
                if ( v15 < 0xFFFF800000000000uLL )
                  goto LABEL_204;
                v32 = ((v15 >> 39) & 0x1FF) - 256;
                v33 = *((unsigned __int8 *)&MiState + v32 + 49000);
                if ( v33 > 0x11 )
                  goto LABEL_204;
                v34 = 133280;
                if ( !_bittest(&v34, v33) )
                  goto LABEL_204;
                v73 = MiSystemVaTypeToVm(*((unsigned __int8 *)&MiState + v32 + 49000));
                v10 = (__int64)v73;
                if ( !v73 )
                  goto LABEL_204;
                if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v73, v15, v35, 0, (__int64)v89) )
                  goto LABEL_185;
                v10 = *((_QWORD *)&v89[1] + 1);
                v73 = (struct _LIST_ENTRY **)*((_QWORD *)&v89[1] + 1);
                if ( (a3 & 1) != 0 && !v78 )
                {
                  if ( !ProcessorFlushList )
                    ProcessorFlushList = MiGetProcessorFlushList();
                  *ProcessorFlushList = *((_QWORD *)&v89[1] + 1);
                  *((_DWORD *)ProcessorFlushList + 4) = 0;
                  *((_DWORD *)ProcessorFlushList + 5) = 10;
                  v78 = (__int64)ProcessorFlushList;
                  *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v10 + 184) & 0x800) != 0;
                  if ( (*(_DWORD *)(*((_QWORD *)&v89[1] + 1) + 184LL) & 0xF) != 0
                    || (struct _LIST_ENTRY **)*((_QWORD *)&v89[1] + 1) == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
                  {
                    v36 = (*(_DWORD *)(*((_QWORD *)&v89[1] + 1) + 184LL) & 0xF) == 0;
                  }
                  else
                  {
                    *((_DWORD *)ProcessorFlushList + 4) |= 9u;
                    v36 = 0;
                  }
                  *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                  *((_DWORD *)ProcessorFlushList + 2) = v36;
                  *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                  *((_DWORD *)ProcessorFlushList + 7) = 0;
                  ProcessorFlushList[4] = 0LL;
                  ProcessorFlushList[5] = 0LL;
                }
                v11 = ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
                valid = v11;
LABEL_88:
                v37 = *((unsigned __int8 *)&MiState + ((v15 >> 39) & 0x1FF) + 48744);
              }
              if ( !*((_DWORD *)P + 10) )
              {
                if ( v37 != 7
                  || !MiGetSystemCacheReverseMap(v15)
                  || v10 != MiGetMultiplexedVm(v38, v15)
                  || *(_QWORD *)(v39 + 32) >> 62 != 3 )
                {
                  goto LABEL_184;
                }
                v40 = *(_QWORD *)(v39 + 24);
                v79 = (__int64 *)v40;
                if ( (v40 & 1) != 0 )
                {
                  v40 &= ~1uLL;
                  v79 = (__int64 *)v40;
                }
                MmInternal = v80;
                if ( *(_QWORD *)v40 != v80
                  || 4 * (*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFF0000uLL) + (v15 & 0x3FFFF) != v74 )
                {
                  goto LABEL_184;
                }
LABEL_128:
                v50 = *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v50 & 1) != 0 )
                {
                  v51 = 48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                  if ( (a3 & 8) != 0 && ((v50 & 0x42) != 0 || (*(_BYTE *)(v51 + 34) & 0x10) != 0)
                    || *(__int64 *)(v51 + 40) >= 0 )
                  {
                    goto LABEL_174;
                  }
                  v52 = *(_QWORD *)(v51 + 16) & 0x400LL;
                  if ( (a3 & 1) != 0 )
                  {
                    if ( v52 && (v50 & 0x42) != 0 )
                    {
                      v53 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v53 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && KiCheckVpBackingLongSpinWaitHypercall() )
                          {
                            HvlNotifyLongSpinWait(v53);
                          }
                          else
                          {
                            _mm_pause();
                          }
                        }
                        while ( *(__int64 *)(v51 + 24) < 0 );
                      }
                      if ( (*(_BYTE *)(v51 + 34) & 0x10) == 0 )
                        MiSetPfnModified(48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
                      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      MiWriteValidPteNewProtection(
                        ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        v50 & 0xFFFFFFFFFFFFFFBDuLL);
                      MiInsertTbFlushEntry(v78, v15, 1LL, 0);
                    }
                    goto LABEL_174;
                  }
                  if ( !v52 && (*(_DWORD *)(MmInternal + 56) & 0x80u) != 0 )
                    goto LABEL_174;
                  v54 = MiGetWsleContents(v52, v15) & 0xF;
                  if ( *(_DWORD *)(v55 + 40) == 3 && v54 == 9 )
                    goto LABEL_174;
                  if ( v54 != 8 && (a3 & 0x10) == 0 )
                  {
                    v10 = (__int64)v73;
                    if ( ((_DWORD)v73[23] & 0xF) == 1 )
                      v56 = &MiSystemPartition;
                    else
                      v56 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)v73 + 87));
                    if ( v56[4363] )
                      MI_WSLE_LOG_ACCESS(v73, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    v7 = v70;
                    if ( !v70 )
                    {
                      if ( !ProcessorFlushList )
                        ProcessorFlushList = MiGetProcessorFlushList();
                      v7 = (ULONG_PTR)(ProcessorFlushList + 517);
                      v70 = (ULONG_PTR)(ProcessorFlushList + 517);
                      MiInitializeTbFlushList(
                        (__int64)(ProcessorFlushList + 517),
                        (__int64)v73,
                        *((_DWORD *)ProcessorFlushList + 1037),
                        2,
                        1);
                    }
                    MiInsertTbFlushEntry(v7, v15, 1LL, 0);
                    if ( *(_DWORD *)(v7 + 28) == *(_DWORD *)(v7 + 12) )
                    {
                      v57 = MiFreeWsleList((__int64)v73, v7, 0);
                      v58 = v71;
                      v11 = valid;
                      v27 = v74;
                      if ( v57 )
                        v58 = 277;
                      v71 = v58;
                      v7 = 0LL;
                      v70 = 0LL;
LABEL_177:
                      v15 += 4096LL;
                      if ( v15 >= v82 )
                        goto LABEL_184;
                      continue;
                    }
LABEL_176:
                    v27 = v74;
                    v11 = valid;
                    goto LABEL_177;
                  }
                  v59 = ((a3 & 0x40) << 9) | 1u;
                  LODWORD(v59) = ((a3 & 0x40) << 9) | 0x801;
                  if ( a3 >= 0 )
                    v59 = ((a3 & 0x40) << 9) | 1u;
                  if ( (a3 & 8) != 0
                    || !v84
                    || ((_DWORD)v73[23] & 0xF) == 1
                    || !(unsigned int)MiReplaceLockedPage(
                                        48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                        v15,
                                        v59,
                                        v31) )
                  {
                    v71 = 277;
                  }
LABEL_174:
                  v10 = (__int64)v73;
                }
                v7 = v70;
                goto LABEL_176;
              }
            }
            break;
          }
          MmInternal = v80;
          goto LABEL_128;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35F40, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E35F40);
    KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
    v25 = (__int64)v81;
    v26 = v81->SpecialApcDisable++ == -1;
    if ( v26 && *(_QWORD *)(v25 + 152) != v25 + 152 )
      KiCheckForKernelApcDelivery(v25, v24);
LABEL_184:
    if ( v10 )
    {
LABEL_185:
      v61 = (__int64 *)v70;
      if ( v70 )
      {
        if ( *(_DWORD *)(v70 + 28) )
        {
          v62 = MiFreeWsleList(v10, v70, 0);
          v63 = v71;
          if ( v62 )
            v63 = 277;
          v71 = v63;
        }
        v70 = 0LL;
      }
      if ( v78 )
      {
        MiFlushTbList(v78);
        v78 = 0LL;
      }
      if ( ProcessorFlushList )
      {
        v64 = KeGetCurrentPrcb();
        v61 = MxTempPrcb;
        ProcessorFlushList = 0LL;
        if ( v64->MmInternal )
          v61 = (__int64 *)v64->MmInternal;
        v61[2575 * (unsigned int)--*((_DWORD *)v61 + 87) + 2622] = 0LL;
      }
      v65 = Object;
      if ( Object )
      {
        if ( v11 )
          MiUnlockPageTableInternal(v10, v11);
        MiUnlockWorkingSetShared(v10, v69);
      }
      else if ( *((_QWORD *)&v89[1] + 1) )
      {
        LOBYTE(v61) = 17;
        MiReleaseFaultState((char *)&v89[1] + 8, v61, 0LL);
        *((_QWORD *)&v89[1] + 1) = 0LL;
        v11 = 0LL;
        valid = 0LL;
        v10 = 0LL;
        v73 = 0LL;
        goto LABEL_205;
      }
      v11 = 0LL;
      valid = 0LL;
      v10 = 0LL;
      v73 = 0LL;
    }
    else
    {
LABEL_204:
      v65 = Object;
    }
LABEL_205:
    if ( v83 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35F40, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E35F40);
      KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
      v67 = (__int64)v81;
      v26 = v81->SpecialApcDisable++ == -1;
      if ( v26 && *(_QWORD *)(v67 + 152) != v67 + 152 )
        KiCheckForKernelApcDelivery(v67, v66);
    }
    if ( v75 )
    {
      KeForceDetachProcess(v90, 0LL);
      MiAttachThreadDone(v65 + 1024);
    }
    if ( v65 )
      ObDereferenceObjectDeferDeleteWithTag(v65, 0x77566D4Du);
    ExFreePoolWithTag(P, 0);
    if ( v84 && (*v86 & 1) == 0 )
    {
      MiDeleteTrimViewInfoList(v87);
      return 0LL;
    }
    a1 = v87;
    if ( !v87 )
      return v71;
    v7 = v70;
    CurrentThread = v81;
  }
}
