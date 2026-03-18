/*
 * XREFs of MiWalkVaRange @ 0x14028A740
 * Callers:
 *     MiResetVirtualMemory @ 0x140441CD0 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E9914 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r12
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rbx
  int v14; // eax
  unsigned __int64 DpcRequestSummary; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 ProtoPteAddress; // rsi
  int v20; // r13d
  int v21; // r14d
  __int64 v22; // rbx
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  int v26; // eax
  ULONG_PTR v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v29; // r8d
  __int64 v30; // r9
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 *v40; // r11
  unsigned __int64 v41; // rbx
  __int64 *ProcessorFlushList; // rax
  BOOL v43; // ecx
  __int64 v44; // rsi
  int v45; // r14d
  size_t v46; // r10
  __int64 *v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // r8
  unsigned __int64 *v50; // r9
  unsigned __int64 v51; // rcx
  struct _KPRCB *v53; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 MmInternal; // rax
  __int64 v58; // r8
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // r10d
  int v63; // ecx
  unsigned __int32 v64; // eax
  unsigned __int32 v65; // ett
  unsigned __int64 v66; // rax
  unsigned int v67; // r8d
  __int64 v68; // rcx
  __int64 v69; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *v71; // rsi
  struct _KTHREAD *v72; // rax
  char CurrentSlabIdentity; // al
  __int64 v74; // rdx
  unsigned __int8 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  int ProtoLeafValid; // [rsp+48h] [rbp-B8h]
  __int64 *v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  __int64 v80; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY **v81; // [rsp+68h] [rbp-98h]
  int v82; // [rsp+70h] [rbp-90h]
  __int64 v83; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-58h] BYREF
  _KPROCESS *Process; // [rsp+B8h] [rbp-48h]
  int v90; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v91; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int8 v92; // [rsp+C9h] [rbp-37h]
  struct _LIST_ENTRY **v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  __int64 v95; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v96)(); // [rsp+170h] [rbp+70h]
  __int128 *v97; // [rsp+178h] [rbp+78h]
  unsigned __int8 v98; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  unsigned int v101; // [rsp+1E8h] [rbp+E8h]

  v101 = a4;
  v100 = a3;
  v98 = 17;
  v84 = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v86 = 0LL;
  v5 = 0;
  ProtoLeafValid = 0;
  v6 = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v83 = 0LL;
  v99 = v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v81 = &Process[2].ReadyListHead.Blink;
  v75 = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
  while ( v7 <= v8 )
  {
    v88 = 0LL;
    memset_0(&v91, 0, 0xBCuLL);
    v10 = (__int64)(v7 << 25) >> 16;
    v11 = (__int64)(v8 << 25) >> 16;
    v90 = 8289;
    LeafVa = MiGetLeafVa(v10);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F280 && LeafVa <= qword_140E2F290 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
    v14 = MiFastLockLeafPageTable(AnyMultiplexedVm, v10, 0LL);
    if ( v14 )
    {
      LODWORD(v88) = v14 - 1;
      v16 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v88 + 1) = v16;
    }
    else
    {
      v90 |= 4u;
      v97 = &v88;
      v93 = AnyMultiplexedVm;
      v94 = (__int64)(v7 << 25) >> 16;
      v91 = v91 & 0xFFFFFE3F | 0x40;
      v96 = MiGetNextPageTableTail;
      v92 = v75;
      v95 = v11;
      MiWalkPageTables((__int64)&v90);
      v16 = *((_QWORD *)&v88 + 1);
    }
    v79 = 1;
    if ( v16 != v7 )
    {
      if ( (*(_DWORD *)(v100 + 48) & 0x200000) == 0
        && *(_QWORD *)(v100 + 80)
        && MiGetProtoPteAddress(v100, v10 >> 12, 8LL, &v84) )
      {
        v79 = 0;
      }
      else
      {
        v5 = -1073740748;
        ProtoLeafValid = -1073740748;
        if ( !v16 )
        {
          p_Blink = v81;
          break;
        }
        v7 = v16;
      }
    }
    if ( v16 )
      v83 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v80;
LABEL_11:
    v18 = v79;
    while ( 1 )
    {
      v86 = 0LL;
      LODWORD(ProtoPteAddress) = 0;
      v76 = 0;
      v20 = 0;
      v21 = 0;
      if ( !(_DWORD)v18 )
        goto LABEL_48;
      v22 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v22 & 1) != 0 )
      {
        LOBYTE(v18) = (v22 & 0x42) != 0;
        if ( ((unsigned __int8)v18 & ((v22 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          v18 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v18 + 352) != 1 )
          {
            DpcRequestSummary = *(_QWORD *)(v18 + 1288);
            if ( DpcRequestSummary )
            {
              v34 = *(_QWORD *)(DpcRequestSummary + 8 * ((v7 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v22 |= 0x20uLL;
              v18 = v22;
              v22 |= 0x42uLL;
              if ( (v34 & 0x42) == 0 )
                v22 = v18;
            }
          }
        }
      }
      if ( !v22 )
      {
LABEL_48:
        v18 = v100;
        if ( (*(_DWORD *)(v100 + 48) & 0x200000) == 0 && *(_QWORD *)(v100 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v100, (unsigned __int64)((__int64)(v7 << 25) >> 16) >> 12, 8LL, &v84);
          if ( ProtoPteAddress )
            goto LABEL_135;
          if ( !v79 )
            goto LABEL_77;
        }
LABEL_20:
        if ( v17 )
        {
          v23 = 0;
          if ( v98 == 18 )
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v23 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
                {
                  HvlNotifyLongSpinWait(v23);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
          }
          else
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v23 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
                {
                  HvlNotifyLongSpinWait(v23);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
          }
          if ( (*(_QWORD *)v17 & 0xFFFFFFFFFFELL) != 0 )
          {
            v36 = *(_QWORD *)v17 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
            v37 = *(_QWORD *)(8 * v36);
            v38 = 8 * v36;
            if ( v37 == 8 * v36 )
            {
              v25 = *(_QWORD *)v17 & 0xFFFFF00000000001uLL;
            }
            else
            {
              v39 = *(_QWORD *)v37;
              if ( *(_QWORD *)(v37 + 8) != v38 || *(_QWORD *)(v39 + 8) != v37 )
                __fastfail(3u);
              *(_QWORD *)v38 = v39;
              *(_QWORD *)(v39 + 8) = v38;
              if ( *(_QWORD *)v38 == v38 )
              {
                *(_QWORD *)v37 = v37;
                v24 = (_QWORD *)v37;
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)v38 + 8LL) = v37;
                v24 = *(_QWORD **)(v38 + 8);
                *v24 = v37;
              }
              *(_QWORD *)(v37 + 8) = v24;
              v25 = (2 * (v37 >> 4)) ^ ((2 * (v37 >> 4)) ^ *(_QWORD *)v17) & 0xFFFFF00000000001uLL;
            }
            *(_QWORD *)v17 = v25;
            MiRemoveLockedPageChargeAndDecRef(v17);
            if ( v38 )
              *(_DWORD *)(v38 + 16) = 1;
          }
          else
          {
            v82 = *(_DWORD *)(v17 + 32);
            BYTE2(v82) &= ~0x20u;
            *(_DWORD *)(v17 + 32) = v82;
            MiRemoveLockedPageChargeAndDecRef(v17);
          }
          if ( v98 == 18 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v98 <= 1u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v98);
              __writecr8(v98);
            }
          }
          v17 = 0LL;
          v80 = 0LL;
          v6 = 0LL;
        }
        goto LABEL_32;
      }
      if ( (v22 & 1) != 0 || (v22 & 0x400) == 0 )
        goto LABEL_20;
      v58 = v101;
      if ( v101 == 2 )
      {
        if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v22, DpcRequestSummary, 2LL) )
          break;
      }
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v22, DpcRequestSummary, v58) )
      {
        if ( v67 == 1 )
        {
          v27 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
          v20 = 0;
        }
        else
        {
          if ( v17 )
          {
            MiUnlockProtoPoolPage(v17, v98);
            v17 = 0LL;
            v80 = 0LL;
            v6 = 0LL;
          }
          if ( v78 )
          {
            MiFlushTbList(v78, DpcRequestSummary);
            MiReleaseProcessorFlushList();
            v78 = 0LL;
          }
          ProtoLeafValid = MiMakeProtoLeafValid(v7);
          if ( ProtoLeafValid < 0 )
          {
            v27 = v7 + 8;
            ProtoLeafValid = -1073740748;
            v7 += 8LL;
            v20 = 0;
          }
          else
          {
            v20 = 0;
            v27 = v7;
          }
        }
      }
      else
      {
        DpcRequestSummary = (__int64)(v7 << 25) >> 16;
        if ( ((DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
           || (DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == qword_140E2DA78 && qword_140E2DA78)
          && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v27 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
          v20 = 0;
        }
        else
        {
          v18 = v100;
          if ( (*(_DWORD *)(v100 + 48) & 0x200000) == 0 && *(_QWORD *)(v100 + 80) )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v100, DpcRequestSummary >> 12, 8LL, &v84);
            if ( (unsigned int)MiIsPrototypePteVadLookup(v22) )
              goto LABEL_134;
            DpcRequestSummary = qword_140E2DB80;
            v68 = v22;
            if ( qword_140E2DB80 && (v22 & 0x10) == 0 )
              v68 = v22 & ~qword_140E2DB80;
            v18 = v68 >> 16;
            if ( ProtoPteAddress == v18 )
              goto LABEL_134;
            v67 = v101;
          }
          v69 = v22;
          if ( qword_140E2DB80 && (v22 & 0x10) == 0 )
            v69 = v22 & ~qword_140E2DB80;
          ProtoPteAddress = v69 >> 16;
          if ( v67 == 2 )
            goto LABEL_134;
          v27 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
        }
      }
LABEL_36:
      if ( v27 > v99 || (v27 & 0xFFF) == 0 )
        goto LABEL_77;
      if ( (v27 & 0x78) == 0 && ((_DWORD)v81[23] & 0xFu) <= 5 )
      {
        if ( ((_DWORD)v81[23] & 0xF) == 1 )
          v55 = (__int64 *)&unk_140E38740;
        else
          v55 = (__int64 *)(v81 + 24);
        v56 = *v55;
        MmInternal = (unsigned __int64)KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          MmInternal = *(unsigned int *)(MmInternal + 324);
        if ( (*(_DWORD *)(v56 + (MmInternal << 6)) & 0x40000000) != 0 )
          goto LABEL_77;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = 0;
      v30 = 0LL;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v29 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v35 = 1;
            goto LABEL_108;
          }
          goto LABEL_74;
        }
LABEL_44:
        if ( DpcWatchdogCount > 7 )
        {
          if ( v29 )
            goto LABEL_74;
          goto LABEL_118;
        }
        goto LABEL_45;
      }
      if ( !CurrentPrcb->NestingLevel )
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v35 = 2;
          goto LABEL_108;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v35 = 3;
          goto LABEL_108;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v35 = 4;
          goto LABEL_108;
        }
        goto LABEL_44;
      }
      v30 = 1LL;
      if ( DpcWatchdogCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v35 = 7;
          goto LABEL_108;
        }
LABEL_74:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v35 = 5;
          goto LABEL_108;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v35 = 6;
          goto LABEL_108;
        }
LABEL_118:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        v53 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v53->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v64 = *SchedulerAssist;
          do
          {
            DpcRequestSummary = v64;
            LODWORD(DpcRequestSummary) = v64 & 0xFFDFFFFF;
            v65 = v64;
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v64 & 0xFFDFFFFF, v64);
          }
          while ( v65 != v64 );
          if ( (v64 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
        _enable();
        v35 = 0;
LABEL_108:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v35, DpcWatchdogCount, DpcTimeCount, v30);
        if ( v35 )
          goto LABEL_77;
      }
LABEL_45:
      v18 = v79;
      if ( v17 )
      {
        if ( (*(_QWORD *)v17 & 0xFFFFFFFFFFELL) != 0 )
          goto LABEL_78;
        goto LABEL_11;
      }
    }
    v59 = v22;
    if ( qword_140E2DB80 && (v22 & 0x10) == 0 )
      v59 = v22 & ~qword_140E2DB80;
    ProtoPteAddress = v59 >> 16;
LABEL_134:
    if ( !ProtoPteAddress )
      goto LABEL_20;
LABEL_135:
    if ( ((ProtoPteAddress ^ v6) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v17 )
      {
        MiUnlockProtoPoolPage(v17, v98);
        v6 = 0LL;
      }
      v80 = MiLockProtoPoolPage(ProtoPteAddress, &v98);
      v17 = v80;
      if ( !v80 )
      {
        if ( v78 )
        {
          MiFlushTbList(v78, v60);
          MiReleaseProcessorFlushList();
          v78 = 0LL;
        }
        p_Blink = v81;
        if ( v83 )
        {
          MiUnlockPageTableInternal(v81, v83);
          v83 = 0LL;
        }
        MiUnlockWorkingSetShared(v81, v75);
        MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
        goto LABEL_86;
      }
      v6 = ProtoPteAddress;
    }
LABEL_32:
    v26 = MiActOnPte(v100, v79, v7, ProtoPteAddress, v101, a5, (__int64)&v87, (__int64)&v85);
    if ( !v26 )
      goto LABEL_33;
    if ( v26 == 274 )
    {
      v21 = MiCopyOnWrite((__int64)(v7 << 25) >> 16, v7, (__int64)&v86);
      v76 = v21;
      v7 -= 8LL;
      v20 = 1;
      goto LABEL_33;
    }
    if ( v26 != -1073741791 )
    {
      ProtoLeafValid = v26;
      goto LABEL_33;
    }
    v40 = v78;
    v41 = (__int64)(v7 << 25) >> 16;
    if ( !v78 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      v40 = ProcessorFlushList;
      v78 = ProcessorFlushList;
      *((_DWORD *)ProcessorFlushList + 4) = 0;
      *((_DWORD *)ProcessorFlushList + 5) = 10;
      *ProcessorFlushList = (__int64)v81;
      *((_BYTE *)ProcessorFlushList + 24) = ((_DWORD)v81[23] & 0x800) != 0;
      if ( ((_DWORD)v81[23] & 0xF) != 0 || v81 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v43 = ((_DWORD)v81[23] & 0xF) == 0;
      }
      else
      {
        *((_DWORD *)ProcessorFlushList + 4) |= 9u;
        v43 = 0;
      }
      *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
      *((_DWORD *)ProcessorFlushList + 2) = v43;
      *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
      *((_DWORD *)ProcessorFlushList + 7) = 0;
      ProcessorFlushList[4] = 0LL;
      ProcessorFlushList[5] = 0LL;
    }
    v44 = 1LL;
    if ( *((_DWORD *)v40 + 2) != 1 )
    {
      v63 = *((_DWORD *)v40 + 4);
      if ( (v63 & 4) == 0 && v41 >= 0xFFFFF68000000000uLL && v41 <= 0xFFFFF6FFFFFFFFFFuLL )
        *((_DWORD *)v40 + 4) = v63 | 4;
    }
LABEL_95:
    v45 = 0;
    while ( 2 )
    {
      v46 = *((unsigned int *)v40 + 7);
      if ( !(_DWORD)v46 )
        goto LABEL_146;
      if ( (v40[2] & 2) != 0 )
        goto LABEL_146;
      v47 = &v40[(unsigned int)(v46 - 1)];
      v48 = v47[5];
      if ( (v48 & 0xC00) != 0 )
        goto LABEL_146;
      v49 = v47[5] & 0x3FF;
      if ( (v48 & 0xFFFFFFFFFFFFF000uLL) + ((v49 + 1) << 12) == v41 && v44 + v49 > v49 && v44 + v49 <= 0x3FF )
      {
        v40[4] += v44;
        v47[5] = (v48 + v44) ^ ((v48 + v44) ^ v48) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_158:
        v21 = 0;
        goto LABEL_33;
      }
      v50 = (unsigned __int64 *)&v40[(unsigned int)(v46 - 1) + 5];
      v51 = *v50;
      if ( (*v50 & 0xFFFFFFFFFFFFF000uLL) != v41 + (v44 << 12)
        || (v66 = *v50 & 0x3FF, v44 + v66 > 0x3FF)
        || v44 + v66 <= v66 )
      {
        v40 = v78;
LABEL_146:
        if ( (_DWORD)v46 != *((_DWORD *)v40 + 3) )
        {
          while ( v44 )
          {
            v61 = 1024LL;
            if ( (unsigned __int64)(v44 - 1) <= 0x3FF )
              v61 = v44;
            v40[v46 + 5] = v41 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v61 - 1) & 0x3FF;
            v62 = *((_DWORD *)v40 + 7);
            v40[4] += v61;
            v46 = (unsigned int)(v62 + 1);
            v41 += v61 << 12;
            *((_DWORD *)v40 + 7) = v46;
            v44 -= v61;
            if ( v44 && (_DWORD)v46 == *((_DWORD *)v40 + 3) )
              goto LABEL_95;
          }
          goto LABEL_158;
        }
        if ( v45 )
        {
          if ( !*((_BYTE *)v40 + 25) )
            *((_BYTE *)v40 + 25) = 1;
          goto LABEL_158;
        }
        if ( *((_BYTE *)v40 + 25) )
          goto LABEL_158;
        qsort(v40 + 5, v46, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(v78);
        v40 = v78;
        v45 = 1;
        continue;
      }
      break;
    }
    v21 = 0;
    v78[4] += v44;
    *v50 = (v51 - (v44 << 12) + v44) ^ ((v51 - (v44 << 12)) ^ (v51 - (v44 << 12) + v44)) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_33:
    DpcRequestSummary = v85;
    if ( v85 )
    {
      if ( v17 )
      {
        MiUnlockProtoPoolPage(v17, v98);
        DpcRequestSummary = v85;
        v17 = 0LL;
        v80 = 0LL;
        v6 = 0LL;
      }
      MiReleasePageFileInfo(v87, DpcRequestSummary, 1LL);
    }
    v7 += 8LL;
    v27 = v7;
    if ( v20 )
    {
      v20 = v76;
    }
    else
    {
      DpcRequestSummary = (unsigned __int64)v78;
      v20 = v21;
      v80 = v17;
      if ( v21 >= 0 )
        goto LABEL_36;
    }
LABEL_77:
    if ( v17 )
    {
LABEL_78:
      MiUnlockProtoPoolPage(v17, v98);
      v80 = 0LL;
      v6 = 0LL;
    }
    if ( v78 )
    {
      MiFlushTbList(v78, DpcRequestSummary);
      MiReleaseProcessorFlushList();
      v78 = 0LL;
    }
    p_Blink = v81;
    if ( v83 )
    {
      MiUnlockPageTableInternal(v81, v83);
      v83 = 0LL;
    }
    MiUnlockWorkingSetShared(v81, v75);
    if ( v20 < 0 )
    {
      if ( v20 == -1073740748 )
      {
        if ( ((_DWORD)v81[23] & 0xF) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v71 = CurrentThread->ApcState.Process;
          v72 = (struct _KTHREAD *)v71[1].ActiveGroupPadding[0];
          if ( v72 )
          {
            if ( v72 != CurrentThread )
            {
              LOCK_ADDRESS_SPACE(CurrentThread, CurrentThread->ApcState.Process);
              UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, v71);
            }
          }
        }
      }
      else if ( v20 == -1073741801
             && KeGetCurrentIrql() < 2u
             && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
             && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
      {
        if ( v86 )
        {
          MiReplenishSlabAllocator(v86, 1LL, 0x20000LL);
        }
        else
        {
          CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
          v74 = 3LL;
          if ( CurrentSlabIdentity == -1 )
            v74 = 1LL;
          MiWaitForFreePage(*((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)v81 + 87)), v74);
        }
      }
    }
LABEL_86:
    MiLockWorkingSetShared(p_Blink);
    v5 = ProtoLeafValid;
    v8 = v99;
  }
  MiUnlockWorkingSetShared(p_Blink, v75);
  return v5;
}
