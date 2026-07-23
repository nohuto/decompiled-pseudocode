/*
 * XREFs of MiWalkVaRange @ 0x14029A340
 * Callers:
 *     MiResetVirtualMemory @ 0x1404388A4 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E48D4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  signed __int64 v6; // r12
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rbx
  __int64 p_Blink; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rbx
  int v14; // eax
  unsigned __int64 DpcRequestSummary; // rdx
  __int64 SchedulerAssist; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  signed __int64 ProtoPteAddress; // rsi
  int v22; // r13d
  int v23; // r14d
  unsigned __int64 v24; // rbx
  unsigned int v25; // ebx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  unsigned __int64 *v29; // r9
  unsigned __int64 v30; // rdx
  ULONG_PTR v31; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  __int64 v36; // rax
  int v37; // ebx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r11
  unsigned __int64 v46; // rbx
  __int64 *ProcessorFlushList; // rax
  BOOL v48; // ecx
  __int64 v49; // rsi
  int v50; // r14d
  size_t v51; // r10
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  struct _KPRCB *v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rcx
  unsigned __int64 MmInternal; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  int v62; // r10d
  int v63; // ecx
  unsigned __int32 v64; // eax
  unsigned __int32 v65; // ett
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *v71; // rsi
  struct _KTHREAD *v72; // rax
  char CurrentSlabIdentity; // al
  char v74; // dl
  unsigned __int8 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  int ProtoLeafValid; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  __int64 v80; // [rsp+60h] [rbp-A0h]
  __int64 v81; // [rsp+68h] [rbp-98h]
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
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v81 = (__int64)&Process[2].ReadyListHead.Blink;
  v75 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, 0x7FFFFFFFF8LL, a3, a4);
  while ( v7 <= v8 )
  {
    v88 = 0LL;
    memset_0(&v91, 0, 0xBCuLL);
    v10 = (__int64)(v7 << 25) >> 16;
    v11 = (__int64)(v8 << 25) >> 16;
    v90 = 8289;
    LeafVa = MiGetLeafVa(v10);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F3C0 && LeafVa <= qword_140E2F3D0 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
    v14 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10, 0);
    if ( v14 )
    {
      LODWORD(v88) = v14 - 1;
      v18 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v88 + 1) = v18;
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
      MiWalkPageTables(&v90);
      v18 = *((_QWORD *)&v88 + 1);
    }
    v79 = 1;
    if ( v18 != v7 )
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
        if ( !v18 )
        {
          p_Blink = v81;
          break;
        }
        v7 = v18;
      }
    }
    if ( v18 )
      v83 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v80;
LABEL_11:
    v20 = v79;
    while ( 1 )
    {
      v86 = 0LL;
      LODWORD(ProtoPteAddress) = 0;
      v76 = 0;
      v22 = 0;
      v23 = 0;
      if ( !(_DWORD)v20 )
        goto LABEL_48;
      v24 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v24 & 1) != 0 )
      {
        LOBYTE(v20) = (v24 & 0x42) != 0;
        if ( ((unsigned __int8)v20 & ((v24 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          v20 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v20 + 352) != 1 )
          {
            DpcRequestSummary = *(_QWORD *)(v20 + 1288);
            if ( DpcRequestSummary )
            {
              v36 = *(_QWORD *)(DpcRequestSummary + 8 * ((v7 >> 3) & 0x1FF));
              if ( (v36 & 0x20) != 0 )
                v24 |= 0x20uLL;
              v20 = v24;
              v24 |= 0x42uLL;
              if ( (v36 & 0x42) == 0 )
                v24 = v20;
            }
          }
        }
      }
      if ( !v24 )
      {
LABEL_48:
        v20 = v100;
        if ( (*(_DWORD *)(v100 + 48) & 0x200000) == 0 && *(_QWORD *)(v100 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v100, (unsigned __int64)((__int64)(v7 << 25) >> 16) >> 12, 8LL, &v84);
          if ( ProtoPteAddress )
            goto LABEL_135;
          if ( !v79 )
            goto LABEL_77;
        }
LABEL_20:
        if ( v19 )
        {
          v25 = 0;
          if ( v98 == 18 )
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v25 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(
                                        v20,
                                        DpcRequestSummary,
                                        SchedulerAssist,
                                        v17) )
                {
                  HvlNotifyLongSpinWait(v25);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
          }
          else
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v25 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(
                                        v20,
                                        DpcRequestSummary,
                                        SchedulerAssist,
                                        v17) )
                {
                  HvlNotifyLongSpinWait(v25);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
          }
          if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFELL) != 0 )
          {
            v38 = *(_QWORD *)v19 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
            v39 = *(_QWORD *)(8 * v38);
            v40 = 8 * v38;
            if ( v39 == 8 * v38 )
            {
              v27 = *(_QWORD *)v19 & 0xFFFFF00000000001uLL;
            }
            else
            {
              v41 = *(_QWORD *)v39;
              if ( *(_QWORD *)(v39 + 8) != v40 || *(_QWORD *)(v41 + 8) != v39 )
                __fastfail(3u);
              *(_QWORD *)v40 = v41;
              *(_QWORD *)(v41 + 8) = v40;
              if ( *(_QWORD *)v40 == v40 )
              {
                *(_QWORD *)v39 = v39;
                v26 = (_QWORD *)v39;
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)v40 + 8LL) = v39;
                v26 = *(_QWORD **)(v40 + 8);
                *v26 = v39;
              }
              *(_QWORD *)(v39 + 8) = v26;
              v27 = (2 * (v39 >> 4)) ^ ((2 * (v39 >> 4)) ^ *(_QWORD *)v19) & 0xFFFFF00000000001uLL;
            }
            *(_QWORD *)v19 = v27;
            MiRemoveLockedPageChargeAndDecRef(v19);
            if ( v40 )
              *(_DWORD *)(v40 + 16) = 1;
          }
          else
          {
            v82 = *(_DWORD *)(v19 + 32);
            BYTE2(v82) &= ~0x20u;
            *(_DWORD *)(v19 + 32) = v82;
            MiRemoveLockedPageChargeAndDecRef(v19);
          }
          if ( v98 == 18 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v98 <= 1u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v98);
              __writecr8(v98);
            }
          }
          v19 = 0LL;
          v80 = 0LL;
          v6 = 0LL;
        }
        goto LABEL_32;
      }
      if ( (v24 & 1) != 0 || (v24 & 0x400) == 0 )
        goto LABEL_20;
      if ( v101 == 2 && MI_PROTO_FORMAT_COMBINED(v24) )
        break;
      if ( MI_PROTO_FORMAT_COMBINED(v24) )
      {
        if ( (_DWORD)SchedulerAssist == 1 )
        {
          v31 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
          v22 = 0;
        }
        else
        {
          if ( v19 )
          {
            MiUnlockProtoPoolPage(v19, v98);
            v19 = 0LL;
            v80 = 0LL;
            v6 = 0LL;
          }
          if ( v78 )
          {
            MiFlushTbList(v78);
            MiReleaseProcessorFlushList();
            v78 = 0LL;
          }
          ProtoLeafValid = MiMakeProtoLeafValid(v7);
          if ( ProtoLeafValid < 0 )
          {
            v31 = v7 + 8;
            ProtoLeafValid = -1073740748;
            v7 += 8LL;
            v22 = 0;
          }
          else
          {
            v22 = 0;
            v31 = v7;
          }
        }
      }
      else
      {
        DpcRequestSummary = (__int64)(v7 << 25) >> 16;
        if ( ((DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
           || (DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == qword_140E2DBB8 && qword_140E2DBB8)
          && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v31 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
          v22 = 0;
        }
        else
        {
          v20 = v100;
          if ( (*(_DWORD *)(v100 + 48) & 0x200000) == 0 && *(_QWORD *)(v100 + 80) )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v100, DpcRequestSummary >> 12, 8LL, &v84);
            if ( (unsigned int)MiIsPrototypePteVadLookup(v24, v67) )
              goto LABEL_134;
            DpcRequestSummary = qword_140E2DCC0;
            v68 = v24;
            if ( qword_140E2DCC0 && (v24 & 0x10) == 0 )
              v68 = v24 & ~qword_140E2DCC0;
            v20 = v68 >> 16;
            if ( ProtoPteAddress == v20 )
              goto LABEL_134;
            SchedulerAssist = v101;
          }
          v69 = v24;
          if ( qword_140E2DCC0 && (v24 & 0x10) == 0 )
            v69 = v24 & ~qword_140E2DCC0;
          ProtoPteAddress = v69 >> 16;
          if ( (_DWORD)SchedulerAssist == 2 )
            goto LABEL_134;
          v31 = v7 + 8;
          ProtoLeafValid = -1073740748;
          v7 += 8LL;
        }
      }
LABEL_36:
      if ( v31 > v99 || (v31 & 0xFFF) == 0 )
        goto LABEL_77;
      if ( (v31 & 0x78) == 0 && (*(_DWORD *)(v81 + 184) & 0xFu) <= 5 )
      {
        if ( (*(_DWORD *)(v81 + 184) & 0xF) == 1 )
          v57 = (__int64 *)&unk_140E38880;
        else
          v57 = (__int64 *)(v81 + 192);
        v58 = *v57;
        MmInternal = (unsigned __int64)KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          MmInternal = *(unsigned int *)(MmInternal + 324);
        if ( (*(_DWORD *)(v58 + (MmInternal << 6)) & 0x40000000) != 0 )
          goto LABEL_77;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v17 = 0LL;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        SchedulerAssist = 1LL;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v37 = 1;
            goto LABEL_108;
          }
          goto LABEL_74;
        }
LABEL_44:
        if ( DpcWatchdogCount > 7 )
        {
          if ( (_DWORD)SchedulerAssist )
            goto LABEL_74;
          goto LABEL_118;
        }
        goto LABEL_45;
      }
      if ( !CurrentPrcb->NestingLevel )
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v37 = 2;
          goto LABEL_108;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v37 = 3;
          goto LABEL_108;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v37 = 4;
          goto LABEL_108;
        }
        goto LABEL_44;
      }
      v17 = 1LL;
      if ( DpcWatchdogCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v37 = 7;
          goto LABEL_108;
        }
LABEL_74:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v37 = 5;
          goto LABEL_108;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v37 = 6;
          goto LABEL_108;
        }
LABEL_118:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        v56 = KeGetCurrentPrcb();
        SchedulerAssist = (__int64)v56->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw((const void *)SchedulerAssist);
          v64 = *(_DWORD *)SchedulerAssist;
          do
          {
            DpcRequestSummary = v64;
            LODWORD(DpcRequestSummary) = v64 & 0xFFDFFFFF;
            v65 = v64;
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v64 & 0xFFDFFFFF, v64);
          }
          while ( v65 != v64 );
          if ( (v64 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v56);
        }
        _enable();
        v37 = 0;
LABEL_108:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v37, DpcWatchdogCount, DpcTimeCount);
        if ( v37 )
          goto LABEL_77;
      }
LABEL_45:
      v20 = v79;
      if ( v19 )
      {
        if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFELL) != 0 )
          goto LABEL_78;
        goto LABEL_11;
      }
    }
    v60 = v24;
    if ( qword_140E2DCC0 && (v24 & 0x10) == 0 )
      v60 = v24 & ~qword_140E2DCC0;
    ProtoPteAddress = v60 >> 16;
LABEL_134:
    if ( !ProtoPteAddress )
      goto LABEL_20;
LABEL_135:
    if ( ((ProtoPteAddress ^ v6) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v19 )
      {
        MiUnlockProtoPoolPage(v19, v98);
        v6 = 0LL;
      }
      v80 = MiLockProtoPoolPage(ProtoPteAddress, &v98);
      v19 = v80;
      if ( !v80 )
      {
        if ( v78 )
        {
          MiFlushTbList(v78);
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
    v28 = MiActOnPte(v100, v79, v7, ProtoPteAddress, v101, a5, (__int64)&v87, (__int64)&v85);
    if ( !v28 )
      goto LABEL_33;
    if ( v28 == 274 )
    {
      v23 = MiCopyOnWrite((__int64)(v7 << 25) >> 16, v7, (__int64)&v86);
      v76 = v23;
      v7 -= 8LL;
      v22 = 1;
      goto LABEL_33;
    }
    if ( v28 != -1073741791 )
    {
      ProtoLeafValid = v28;
      goto LABEL_33;
    }
    v45 = v78;
    v46 = (__int64)(v7 << 25) >> 16;
    if ( !v78 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      v45 = (__int64)ProcessorFlushList;
      v78 = (__int64)ProcessorFlushList;
      *((_DWORD *)ProcessorFlushList + 4) = 0;
      *((_DWORD *)ProcessorFlushList + 5) = 10;
      *ProcessorFlushList = v81;
      *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v81 + 184) & 0x800) != 0;
      if ( (*(_DWORD *)(v81 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v81 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v48 = (*(_DWORD *)(v81 + 184) & 0xF) == 0;
      }
      else
      {
        *((_DWORD *)ProcessorFlushList + 4) |= 9u;
        v48 = 0;
      }
      *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
      *((_DWORD *)ProcessorFlushList + 2) = v48;
      *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
      *((_DWORD *)ProcessorFlushList + 7) = 0;
      ProcessorFlushList[4] = 0LL;
      ProcessorFlushList[5] = 0LL;
    }
    v49 = 1LL;
    if ( *(_DWORD *)(v45 + 8) != 1 )
    {
      v63 = *(_DWORD *)(v45 + 16);
      if ( (v63 & 4) == 0 && v46 >= 0xFFFFF68000000000uLL && v46 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_DWORD *)(v45 + 16) = v63 | 4;
    }
LABEL_95:
    v50 = 0;
    while ( 2 )
    {
      v51 = *(unsigned int *)(v45 + 28);
      if ( !(_DWORD)v51 )
        goto LABEL_146;
      if ( (*(_DWORD *)(v45 + 16) & 2) != 0 )
        goto LABEL_146;
      v29 = (unsigned __int64 *)(v45 + 8LL * (unsigned int)(v51 - 1));
      v52 = v29[5];
      if ( (v52 & 0xC00) != 0 )
        goto LABEL_146;
      v53 = v29[5] & 0x3FF;
      if ( (v52 & 0xFFFFFFFFFFFFF000uLL) + ((v53 + 1) << 12) == v46 && v49 + v53 > v53 && v49 + v53 <= 0x3FF )
      {
        *(_QWORD *)(v45 + 32) += v49;
        v29[5] = (v52 + v49) ^ ((v52 + v49) ^ v52) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_158:
        v23 = 0;
        goto LABEL_33;
      }
      v29 = (unsigned __int64 *)(v45 + 8 * ((unsigned int)(v51 - 1) + 5LL));
      v54 = *v29;
      if ( (*v29 & 0xFFFFFFFFFFFFF000uLL) != v46 + (v49 << 12)
        || (v66 = *v29 & 0x3FF, v49 + v66 > 0x3FF)
        || v49 + v66 <= v66 )
      {
        v45 = v78;
LABEL_146:
        if ( (_DWORD)v51 != *(_DWORD *)(v45 + 12) )
        {
          while ( v49 )
          {
            v61 = 1024LL;
            if ( (unsigned __int64)(v49 - 1) <= 0x3FF )
              v61 = v49;
            *(_QWORD *)(v45 + 8 * v51 + 40) = v46 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v61 - 1) & 0x3FF;
            v62 = *(_DWORD *)(v45 + 28);
            *(_QWORD *)(v45 + 32) += v61;
            v51 = (unsigned int)(v62 + 1);
            v46 += v61 << 12;
            *(_DWORD *)(v45 + 28) = v51;
            v49 -= v61;
            if ( v49 && (_DWORD)v51 == *(_DWORD *)(v45 + 12) )
              goto LABEL_95;
          }
          goto LABEL_158;
        }
        if ( v50 )
        {
          if ( !*(_BYTE *)(v45 + 25) )
            *(_BYTE *)(v45 + 25) = 1;
          goto LABEL_158;
        }
        if ( *(_BYTE *)(v45 + 25) )
          goto LABEL_158;
        qsort((void *)(v45 + 40), v51, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(v78);
        v45 = v78;
        v50 = 1;
        continue;
      }
      break;
    }
    v23 = 0;
    *(_QWORD *)(v78 + 32) += v49;
    *v29 = (v54 - (v49 << 12) + v49) ^ ((v54 - (v49 << 12)) ^ (v54 - (v49 << 12) + v49)) & 0xFFFFFFFFFFFFFC00uLL;
LABEL_33:
    v30 = v85;
    if ( v85 )
    {
      if ( v19 )
      {
        MiUnlockProtoPoolPage(v19, v98);
        v30 = v85;
        v19 = 0LL;
        v80 = 0LL;
        v6 = 0LL;
      }
      MiReleasePageFileInfo(v87, v30, 1LL, (__int64)v29);
    }
    v7 += 8LL;
    v31 = v7;
    if ( v22 )
    {
      v22 = v76;
    }
    else
    {
      v22 = v23;
      v80 = v19;
      if ( v23 >= 0 )
        goto LABEL_36;
    }
LABEL_77:
    if ( v19 )
    {
LABEL_78:
      MiUnlockProtoPoolPage(v19, v98);
      v80 = 0LL;
      v6 = 0LL;
    }
    if ( v78 )
    {
      MiFlushTbList(v78);
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
    if ( v22 < 0 )
    {
      if ( v22 == -1073740748 )
      {
        if ( (*(_DWORD *)(v81 + 184) & 0xF) == 0 )
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
      else if ( v22 == -1073741801
             && KeGetCurrentIrql() < 2u
             && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
             && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
      {
        if ( v86 )
        {
          MiReplenishSlabAllocator(v86, 1uLL, 0x20000);
        }
        else
        {
          CurrentSlabIdentity = MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread());
          v74 = 3;
          if ( CurrentSlabIdentity == -1 )
            v74 = 1;
          MiWaitForFreePage(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v81 + 174)), v74);
        }
      }
    }
LABEL_86:
    MiLockWorkingSetShared(p_Blink, v42, v43, v44);
    v5 = ProtoLeafValid;
    v8 = v99;
  }
  MiUnlockWorkingSetShared(p_Blink, v75);
  return v5;
}
