/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140362D10
 * Callers:
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 * Callees:
 *     MiGetMultiplexedVm @ 0x140208168 (MiGetMultiplexedVm.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeleteTrimViewInfoList @ 0x140A42F00 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, unsigned __int64 a4, _KPROCESS *a5)
{
  _KPROCESS *SystemCacheReverseMap; // r9
  ULONG_PTR v8; // rbx
  __int64 *ProcessorFlushList; // r13
  unsigned int v10; // r8d
  __int64 p_Blink; // r14
  unsigned __int64 v12; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 ActiveProcessors; // r8
  unsigned __int64 MmInternal; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  KIRQL v18; // al
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned int v21; // eax
  char *v22; // rbx
  struct _KTHREAD *v23; // rcx
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rax
  int v28; // esi
  unsigned __int64 v29; // rcx
  unsigned int v30; // r10d
  int v31; // eax
  unsigned int v32; // r10d
  BOOL v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  BOOL v37; // eax
  struct _LIST_ENTRY *Address; // rax
  __int64 v39; // rcx
  int Flink; // eax
  int v41; // edx
  unsigned __int64 v42; // r8
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  __int64 v46; // r14
  __int64 v47; // rcx
  unsigned int v48; // esi
  char v49; // al
  __int64 v50; // r10
  ULONG *v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rax
  int v55; // ecx
  struct _KPRCB *v56; // rax
  __int64 *v57; // rdx
  _KPROCESS *v58; // rbx
  struct _KTHREAD *v59; // rcx
  unsigned __int8 v61; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v62; // [rsp+38h] [rbp-C8h]
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  unsigned __int64 valid; // [rsp+48h] [rbp-B8h]
  struct _LIST_ENTRY **v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+60h] [rbp-A0h]
  int ContextSwitches; // [rsp+60h] [rbp-A0h]
  _KPROCESS *Object; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h]
  __int64 *v71; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v73; // [rsp+88h] [rbp-78h]
  unsigned __int64 v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+98h] [rbp-68h]
  int v76; // [rsp+9Ch] [rbp-64h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  _KPROCESS *v78; // [rsp+A8h] [rbp-58h]
  PVOID v79; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v80; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v81[8]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v82[6]; // [rsp+140h] [rbp+40h] BYREF
  __int64 retaddr; // [rsp+1E8h] [rbp+E8h]

  v72 = a4;
  SystemCacheReverseMap = 0LL;
  v76 = a2;
  v78 = a5;
  v80 = 0LL;
  v8 = 0LL;
  v62 = 0LL;
  ProcessorFlushList = 0LL;
  v71 = 0LL;
  v10 = 0;
  v61 = 17;
  p_Blink = 0LL;
  v70 = 0LL;
  v12 = 0LL;
  v63 = 0;
  v65 = 0LL;
  valid = 0LL;
  memset(v82, 0, 48);
  CurrentThread = KeGetCurrentThread();
  v73 = CurrentThread;
  memset(v81, 0, sizeof(v81));
  if ( !a1 )
    return v10;
  while ( 1 )
  {
    ActiveProcessors = (unsigned __int64)a1;
    P = a1;
    v79 = (PVOID)*a1;
    MmInternal = a1[1];
    v16 = *(_QWORD *)(ActiveProcessors + 16);
    v17 = *(_QWORD *)(ActiveProcessors + 32);
    Object = (_KPROCESS *)MmInternal;
    v74 = *(_QWORD *)(ActiveProcessors + 24);
    v67 = 0;
    v75 = 0;
    if ( MmInternal )
    {
      if ( (_KPROCESS *)MmInternal != KeGetCurrentThread()->ApcState.Process )
      {
        v18 = ExAcquireSpinLockExclusive(&SpinLock);
        SystemCacheReverseMap = Object;
        v19 = v18;
        ContextSwitches = Object[2].ContextSwitches;
        if ( (HIDWORD(Object[1].DirectoryTableBase) & 0xC00u) < 0xC00
          || Object[2].Padding[3]
          || (v20 = LODWORD(Object[2].ContextSwitches) >> 8, (v20 & 0xF0) == 0xF0)
          || *(_QWORD *)&Object[2].Spare0d <= 1uLL )
        {
          v67 = 0;
        }
        else
        {
          BYTE1(ContextSwitches) = (v20 + 16) ^ ((v20 + 16) ^ v20) & 0xF;
          LOWORD(Object[2].ContextSwitches) = ContextSwitches;
          v67 = 1;
        }
        if ( v18 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            SpinLock = 0;
LABEL_23:
            if ( !v67 )
              goto LABEL_185;
            memset(&v82[3], 0, 48);
            KiStackAttachProcess(SystemCacheReverseMap, 1, (__int64)v82);
            goto LABEL_48;
          }
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            SpinLock = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
          __writecr8(v19);
        }
        SystemCacheReverseMap = Object;
        goto LABEL_23;
      }
      CurrentThread = v73;
    }
    v21 = *(_DWORD *)(ActiveProcessors + 40);
    if ( v21 < 2 || v21 == 3 )
      goto LABEL_49;
    if ( (a3 & 6) != 0 )
      goto LABEL_185;
    --CurrentThread->SpecialApcDisable;
    v22 = (char *)KeAbPreAcquire((__int64)&qword_140E36080, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E36080, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E36080, 0, v22, (__int64)&qword_140E36080);
    if ( v22 )
      v22[10] = 1;
    MmInternal = (unsigned __int64)::P;
    if ( ::P )
    {
      do
      {
        ActiveProcessors = *(_QWORD *)(MmInternal + 88) & 0xFFFFFFFFFFFFF000uLL;
        if ( v16 < ActiveProcessors + *(_QWORD *)(MmInternal + 32) )
        {
          if ( v16 >= ActiveProcessors )
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
        v71 = *(__int64 **)(MmInternal + 48);
        if ( *v71 == v72
          && v16 + (*(_QWORD *)(MmInternal + 24) << 12) - v17 == (*(_QWORD *)(MmInternal + 88) & 0xFFFFFFFFFFFFF000uLL) )
        {
          v75 = 1;
LABEL_48:
          v8 = v62;
          SystemCacheReverseMap = 0LL;
LABEL_49:
          v25 = v17 - 4096;
          if ( v16 >= v74 )
            goto LABEL_185;
          while ( 2 )
          {
            v66 = v25 + 4096;
            if ( p_Blink && ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != v12 )
            {
              if ( v8 )
              {
                if ( *(_DWORD *)(v8 + 28) )
                {
                  v26 = MiFreeWsleList(p_Blink, v8, 0);
                  ActiveProcessors = v63;
                  if ( v26 )
                    ActiveProcessors = 277LL;
                  SystemCacheReverseMap = 0LL;
                  v63 = ActiveProcessors;
                }
                v62 = 0LL;
              }
              if ( v70 )
              {
                MiFlushTbList(v70);
                SystemCacheReverseMap = 0LL;
                v70 = 0LL;
              }
              if ( ProcessorFlushList )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                MmInternal = (unsigned __int64)MxTempPrcb;
                ProcessorFlushList = 0LL;
                if ( CurrentPrcb->MmInternal )
                  MmInternal = (unsigned __int64)CurrentPrcb->MmInternal;
                *(_QWORD *)(20600LL * (unsigned int)--*(_DWORD *)(MmInternal + 348) + MmInternal + 20976) = 0LL;
              }
              if ( Object )
              {
                if ( v12 )
                  MiUnlockPageTableInternal(p_Blink, v12);
                MiUnlockWorkingSetShared(p_Blink, v61);
              }
              else if ( *((_QWORD *)&v81[1] + 1) )
              {
                MiReleaseFaultState((__int64 *)&v81[1] + 1, 0x11u, 0LL);
                *((_QWORD *)&v81[1] + 1) = 0LL;
                v12 = 0LL;
                valid = 0LL;
                p_Blink = 0LL;
                v65 = 0LL;
                goto LABEL_71;
              }
              v12 = 0LL;
              valid = 0LL;
              p_Blink = 0LL;
              v65 = 0LL;
            }
LABEL_71:
            if ( Object )
            {
              v28 = 0;
              if ( !p_Blink )
              {
                p_Blink = (__int64)&Object[2].ReadyListHead.Blink;
                v65 = &Object[2].ReadyListHead.Blink;
                v61 = MiLockWorkingSetShared(
                        (__int64)&Object[2].ReadyListHead.Blink,
                        MmInternal,
                        ActiveProcessors,
                        (__int64)SystemCacheReverseMap);
                if ( (a3 & 1) != 0 && !v70 )
                {
                  if ( !ProcessorFlushList )
                    ProcessorFlushList = MiGetProcessorFlushList();
                  *((_DWORD *)ProcessorFlushList + 4) = 0;
                  *((_DWORD *)ProcessorFlushList + 5) = 10;
                  *ProcessorFlushList = p_Blink;
                  v70 = (__int64)ProcessorFlushList;
                  *((_BYTE *)ProcessorFlushList + 24) = (Object[2].ContextSwitches & 0x800) != 0;
                  if ( (Object[2].ContextSwitches & 0xF) != 0
                    || (struct _LIST_ENTRY **)p_Blink == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
                  {
                    v37 = (Object[2].ContextSwitches & 0xF) == 0;
                  }
                  else
                  {
                    *((_DWORD *)ProcessorFlushList + 4) |= 9u;
                    v37 = 0;
                  }
                  *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                  *((_DWORD *)ProcessorFlushList + 2) = v37;
                  *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                  *((_DWORD *)ProcessorFlushList + 7) = 0;
                  ProcessorFlushList[4] = 0LL;
                  ProcessorFlushList[5] = 0LL;
                }
              }
              MiLockVadTree(1, MmInternal, ActiveProcessors, (__int64)SystemCacheReverseMap);
              Address = MiLocateAddress(v16);
              v39 = (__int64)Address;
              if ( !Address
                || (Flink = (int)Address[3].Flink, (Flink & 0x200000) != 0)
                || (SystemCacheReverseMap = (_KPROCESS *)v72, v41 = *(_DWORD *)(v72 + 56), (v41 & 0x20) == 0)
                && (Flink & 0x70) != 0
                || (v71 = *(__int64 **)(v39 + 72), *v71 != v72) )
              {
LABEL_181:
                ActiveProcessors = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                {
                  _InterlockedAnd((volatile signed __int32 *)(ActiveProcessors + 1004), 0xBFFFFFFF);
                  _InterlockedDecrement((volatile signed __int32 *)(ActiveProcessors + 1004));
                }
                else
                {
                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
                    (volatile signed __int32 *)(ActiveProcessors + 1004),
                    retaddr);
                }
                goto LABEL_185;
              }
              if ( (v41 & 0x20) != 0 )
              {
                SystemCacheReverseMap = *(_KPROCESS **)(v39 + 80);
                if ( v78 < SystemCacheReverseMap )
                  goto LABEL_181;
                v42 = *(unsigned int *)(v39 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 32) << 32);
                if ( v78 >= (_KPROCESS *)((char *)&SystemCacheReverseMap->Header.WaitListHead
                                        + 8
                                        * (*(unsigned int *)(v39 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 33) << 32))
                                        + -8 * v42) )
                  goto LABEL_181;
                v16 = (v42 << 12) + (((char *)v78 - (char *)SystemCacheReverseMap) >> 3 << 12);
              }
              else
              {
                ProtoPteAddress = MiGetProtoPteAddress(v39, v16 >> 12, 8u, (__int64 *)&v71);
                if ( !ProtoPteAddress || !v71 )
                  goto LABEL_181;
                if ( v66 != MiStartingOffset(v71, ProtoPteAddress, 0xFFFFFFFF) )
                {
                  MiUnlockVadTree(1, 0x11u);
                  goto LABEL_185;
                }
              }
              MiUnlockVadTree(1, 0x11u);
              MmInternal = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v44 = ((MmInternal >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              if ( v12 != v44 )
              {
                if ( v12 )
                {
                  v16 -= 4096LL;
                  v8 = v62;
                  v25 = v66 - 4096;
                  goto LABEL_177;
                }
                valid = MiLockLowestValidPageTableEx(p_Blink, MmInternal, &v80, 0);
                v12 = valid;
                if ( valid != v44 )
                  goto LABEL_185;
              }
            }
            else
            {
              v28 = 1;
              if ( p_Blink )
              {
                if ( v16 >= 0xFFFF800000000000uLL )
                  goto LABEL_88;
                v34 = 0;
              }
              else
              {
                if ( v16 < 0xFFFF800000000000uLL )
                  goto LABEL_205;
                v29 = ((v16 >> 39) & 0x1FF) - 256;
                v30 = *((unsigned __int8 *)&MiState + v29 + 49000);
                if ( v30 > 0x11 )
                  goto LABEL_205;
                v31 = 133280;
                if ( !_bittest(&v31, v30) )
                  goto LABEL_205;
                v65 = MiSystemVaTypeToVm(*((unsigned __int8 *)&MiState + v29 + 49000));
                p_Blink = (__int64)v65;
                if ( !v65 )
                  goto LABEL_205;
                if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v65, v16, v32, 0LL, (__int64)v81) )
                  goto LABEL_186;
                p_Blink = *((_QWORD *)&v81[1] + 1);
                v65 = (struct _LIST_ENTRY **)*((_QWORD *)&v81[1] + 1);
                if ( (a3 & 1) != 0 && !v70 )
                {
                  if ( !ProcessorFlushList )
                    ProcessorFlushList = MiGetProcessorFlushList();
                  *ProcessorFlushList = *((_QWORD *)&v81[1] + 1);
                  *((_DWORD *)ProcessorFlushList + 4) = 0;
                  *((_DWORD *)ProcessorFlushList + 5) = 10;
                  v70 = (__int64)ProcessorFlushList;
                  *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(p_Blink + 184) & 0x800) != 0;
                  if ( (*(_DWORD *)(*((_QWORD *)&v81[1] + 1) + 184LL) & 0xF) != 0
                    || (struct _LIST_ENTRY **)*((_QWORD *)&v81[1] + 1) == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
                  {
                    v33 = (*(_DWORD *)(*((_QWORD *)&v81[1] + 1) + 184LL) & 0xF) == 0;
                  }
                  else
                  {
                    *((_DWORD *)ProcessorFlushList + 4) |= 9u;
                    v33 = 0;
                  }
                  *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                  *((_DWORD *)ProcessorFlushList + 2) = v33;
                  *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                  *((_DWORD *)ProcessorFlushList + 7) = 0;
                  ProcessorFlushList[4] = 0LL;
                  ProcessorFlushList[5] = 0LL;
                }
                v12 = ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
                valid = v12;
LABEL_88:
                v34 = *((unsigned __int8 *)&MiState + ((v16 >> 39) & 0x1FF) + 48744);
              }
              if ( !*((_DWORD *)P + 10) )
              {
                if ( v34 != 7 )
                  goto LABEL_185;
                SystemCacheReverseMap = (_KPROCESS *)MiGetSystemCacheReverseMap(v16);
                if ( !SystemCacheReverseMap
                  || p_Blink != MiGetMultiplexedVm(v35, v16)
                  || (unsigned __int64)SystemCacheReverseMap->ProfileListHead.Blink >> 62 != 3 )
                {
                  goto LABEL_185;
                }
                v36 = (unsigned __int64)SystemCacheReverseMap->ProfileListHead.Flink;
                v71 = (__int64 *)v36;
                if ( (v36 & 1) != 0 )
                {
                  v36 &= ~1uLL;
                  v71 = (__int64 *)v36;
                }
                MmInternal = v72;
                if ( *(_QWORD *)v36 != v72
                  || 4 * ((unsigned __int64)SystemCacheReverseMap->ProfileListHead.Blink & 0xFFFFFFFFFFFF0000uLL)
                   + (v16 & 0x3FFFF) != v66 )
                {
                  goto LABEL_185;
                }
LABEL_128:
                v45 = *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v45 & 1) != 0 )
                {
                  v46 = 48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                  if ( (a3 & 8) != 0 && ((v45 & 0x42) != 0 || (*(_BYTE *)(v46 + 34) & 0x10) != 0)
                    || *(__int64 *)(v46 + 40) >= 0 )
                  {
                    goto LABEL_174;
                  }
                  v47 = *(_QWORD *)(v46 + 16) & 0x400LL;
                  if ( (a3 & 1) != 0 )
                  {
                    if ( v47 && (v45 & 0x42) != 0 )
                    {
                      v48 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v48 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && KiCheckVpBackingLongSpinWaitHypercall() )
                          {
                            HvlNotifyLongSpinWait(v48);
                          }
                          else
                          {
                            _mm_pause();
                          }
                        }
                        while ( *(__int64 *)(v46 + 24) < 0 );
                      }
                      if ( (*(_BYTE *)(v46 + 34) & 0x10) == 0 )
                        MiSetPfnModified(48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
                      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      MiWriteValidPteNewProtection(
                        ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        v45 & 0xFFFFFFFFFFFFFFBDuLL,
                        ActiveProcessors);
                      MiInsertTbFlushEntry(v70, v16, 1LL, 0);
                    }
                    goto LABEL_174;
                  }
                  if ( !v47 && (*(_DWORD *)(MmInternal + 56) & 0x80u) != 0 )
                    goto LABEL_174;
                  v49 = MiGetWsleContents(v47, v16) & 0xF;
                  if ( *(_DWORD *)(v50 + 40) == 3 && v49 == 9 )
                    goto LABEL_174;
                  if ( v49 != 8 && (a3 & 0x10) == 0 )
                  {
                    p_Blink = (__int64)v65;
                    if ( ((_DWORD)v65[23] & 0xF) == 1 )
                      v51 = &MiSystemPartition;
                    else
                      v51 = (ULONG *)*((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)v65 + 87));
                    if ( v51[4363] )
                      MI_WSLE_LOG_ACCESS((__int64)v65, ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    v8 = v62;
                    if ( !v62 )
                    {
                      if ( !ProcessorFlushList )
                        ProcessorFlushList = MiGetProcessorFlushList();
                      v8 = (ULONG_PTR)(ProcessorFlushList + 517);
                      v62 = (ULONG_PTR)(ProcessorFlushList + 517);
                      MiInitializeTbFlushList(
                        (__int64)(ProcessorFlushList + 517),
                        (__int64)v65,
                        *((_DWORD *)ProcessorFlushList + 1037),
                        2,
                        1);
                    }
                    MiInsertTbFlushEntry(v8, v16, 1LL, 0);
                    if ( *(_DWORD *)(v8 + 28) == *(_DWORD *)(v8 + 12) )
                    {
                      v52 = MiFreeWsleList((__int64)v65, v8, 0);
                      v53 = v63;
                      v12 = valid;
                      v25 = v66;
                      if ( v52 )
                        v53 = 277;
                      SystemCacheReverseMap = 0LL;
                      v63 = v53;
                      v8 = 0LL;
                      v62 = 0LL;
LABEL_178:
                      v16 += 4096LL;
                      if ( v16 >= v74 )
                        goto LABEL_185;
                      continue;
                    }
LABEL_176:
                    v25 = v66;
                    v12 = valid;
LABEL_177:
                    SystemCacheReverseMap = 0LL;
                    goto LABEL_178;
                  }
                  ActiveProcessors = ((a3 & 0x40) << 9) | 1u;
                  LODWORD(ActiveProcessors) = ((a3 & 0x40) << 9) | 0x801;
                  if ( a3 >= 0 )
                    ActiveProcessors = ((a3 & 0x40) << 9) | 1u;
                  if ( (a3 & 8) != 0
                    || !v76
                    || ((_DWORD)v65[23] & 0xF) == 1
                    || !(unsigned int)MiReplaceLockedPage(
                                        48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                        v16,
                                        ActiveProcessors,
                                        v28) )
                  {
                    v63 = 277;
                  }
LABEL_174:
                  p_Blink = (__int64)v65;
                }
                v8 = v62;
                goto LABEL_176;
              }
            }
            break;
          }
          MmInternal = v72;
          goto LABEL_128;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E36080, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E36080);
    KeAbPostRelease((ULONG_PTR)&qword_140E36080);
    v23 = v73;
    v24 = v73->SpecialApcDisable++ == -1;
    if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery();
LABEL_185:
    if ( p_Blink )
    {
LABEL_186:
      if ( v62 )
      {
        if ( *(_DWORD *)(v62 + 28) )
        {
          v54 = MiFreeWsleList(p_Blink, v62, 0);
          v55 = v63;
          if ( v54 )
            v55 = 277;
          v63 = v55;
        }
        v62 = 0LL;
      }
      if ( v70 )
      {
        MiFlushTbList(v70);
        v70 = 0LL;
      }
      if ( ProcessorFlushList )
      {
        v56 = KeGetCurrentPrcb();
        v57 = MxTempPrcb;
        ProcessorFlushList = 0LL;
        if ( v56->MmInternal )
          v57 = (__int64 *)v56->MmInternal;
        v57[2575 * (unsigned int)--*((_DWORD *)v57 + 87) + 2622] = 0LL;
      }
      v58 = Object;
      if ( Object )
      {
        if ( v12 )
          MiUnlockPageTableInternal(p_Blink, v12);
        MiUnlockWorkingSetShared(p_Blink, v61);
      }
      else if ( *((_QWORD *)&v81[1] + 1) )
      {
        MiReleaseFaultState((__int64 *)&v81[1] + 1, 0x11u, 0LL);
        *((_QWORD *)&v81[1] + 1) = 0LL;
        v12 = 0LL;
        valid = 0LL;
        p_Blink = 0LL;
        v65 = 0LL;
        goto LABEL_206;
      }
      v12 = 0LL;
      valid = 0LL;
      p_Blink = 0LL;
      v65 = 0LL;
    }
    else
    {
LABEL_205:
      v58 = Object;
    }
LABEL_206:
    if ( v75 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E36080, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E36080);
      KeAbPostRelease((ULONG_PTR)&qword_140E36080);
      v59 = v73;
      v24 = v73->SpecialApcDisable++ == -1;
      if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)v59->ApcState.ApcListHead[0].Flink != &v59->152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v67 )
    {
      KeForceDetachProcess((volatile _KAFFINITY_EX *)v82, 0, ActiveProcessors, (__int64)SystemCacheReverseMap);
      MiAttachThreadDone((__int64)&v58[2].ReadyListHead.Blink);
    }
    if ( v58 )
      ObDereferenceObjectDeferDeleteWithTag(v58, 0x77566D4Du);
    ExFreePoolWithTag(P, 0);
    if ( v76 && (*(_QWORD *)&v78->Header.Lock & 1) == 0 )
    {
      MiDeleteTrimViewInfoList(v79);
      return 0LL;
    }
    a1 = v79;
    if ( !v79 )
      return v63;
    v8 = v62;
    SystemCacheReverseMap = 0LL;
    CurrentThread = v73;
  }
}
