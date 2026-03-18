/*
 * XREFs of MiWalkVaRange @ 0x140236150
 * Callers:
 *     MiResetVirtualMemory @ 0x14044B240 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409FD8CC (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402B2120 (EtwTraceShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // r12d
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rbx
  __int64 p_Blink; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rbx
  int v17; // eax
  unsigned __int64 DpcRequestSummary; // rdx
  unsigned __int64 SchedulerAssist; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // r14
  __int64 v23; // rcx
  ULONG_PTR ProtoPteAddress; // rdi
  int v25; // esi
  int v26; // r12d
  __int64 v27; // rbx
  unsigned int v28; // ebx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  ULONG_PTR v32; // rax
  int v33; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned int v38; // ebx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r11
  unsigned __int64 v44; // rbx
  __int64 ProcessorFlushList; // rax
  BOOL v46; // ecx
  __int64 v47; // rdi
  int i; // esi
  size_t v49; // r10
  __int64 v50; // rax
  __int64 v51; // rcx
  struct _KPRCB *v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rcx
  unsigned __int64 MmInternal; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // r10d
  unsigned __int32 v63; // eax
  unsigned __int32 v64; // ett
  int v65; // ecx
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *v72; // rdi
  struct _KTHREAD *v73; // rax
  char CurrentSlabIdentity; // al
  __int64 v75; // rdx
  unsigned __int8 v76; // [rsp+40h] [rbp-C0h]
  int v77; // [rsp+44h] [rbp-BCh]
  int ProtoLeafValid; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B0h]
  unsigned int v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY **v82; // [rsp+68h] [rbp-98h]
  int v83; // [rsp+70h] [rbp-90h]
  __int64 v84; // [rsp+78h] [rbp-88h]
  __int64 v85; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v86; // [rsp+90h] [rbp-70h] BYREF
  __int64 v87; // [rsp+98h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-58h] BYREF
  _KPROCESS *Process; // [rsp+B8h] [rbp-48h]
  int v91; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v92; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int8 v93; // [rsp+C9h] [rbp-37h]
  struct _LIST_ENTRY **v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  __int64 v96; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v97)(); // [rsp+170h] [rbp+70h]
  __int128 *v98; // [rsp+178h] [rbp+78h]
  unsigned __int8 v99; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v100; // [rsp+1D8h] [rbp+D8h]
  __int64 v101; // [rsp+1E0h] [rbp+E0h]
  unsigned int v102; // [rsp+1E8h] [rbp+E8h]

  v102 = a4;
  v101 = a3;
  v99 = 17;
  v85 = 0LL;
  v86 = 0LL;
  v88 = 0LL;
  v87 = 0LL;
  v5 = 0;
  ProtoLeafValid = 0;
  v6 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v84 = 0LL;
  v100 = v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v82 = &Process[2].ReadyListHead.Blink;
  v76 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  while ( v7 <= v8 )
  {
    v89 = 0LL;
    memset_0(&v92, 0, 0xBCuLL);
    v10 = (__int64)(v7 << 25) >> 16;
    v11 = (__int64)(v8 << 25) >> 16;
    v91 = 8289;
    LeafVa = MiGetLeafVa(v10, v12, v13, v14);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F040 && LeafVa <= qword_140E2F050 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
    v17 = MiFastLockLeafPageTable(AnyMultiplexedVm, v10, 0LL);
    if ( v17 )
    {
      LODWORD(v89) = v17 - 1;
      v21 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v89 + 1) = v21;
    }
    else
    {
      v91 |= 4u;
      v98 = &v89;
      v94 = AnyMultiplexedVm;
      v95 = (__int64)(v7 << 25) >> 16;
      v92 = v92 & 0xFFFFFE3F | 0x40;
      v97 = MiGetNextPageTableTail;
      v93 = v76;
      v96 = v11;
      MiWalkPageTables(&v91);
      v21 = *((_QWORD *)&v89 + 1);
    }
    v80 = 1;
    if ( v21 != v7 )
    {
      if ( (*(_DWORD *)(v101 + 48) & 0x200000) == 0
        && *(_QWORD *)(v101 + 80)
        && MiGetProtoPteAddress(v101, v10 >> 12, 8LL, &v85) )
      {
        v80 = 0;
      }
      else
      {
        v5 = -1073740748;
        ProtoLeafValid = -1073740748;
        if ( !v21 )
        {
          p_Blink = (__int64)v82;
          break;
        }
        v7 = v21;
      }
    }
    if ( v21 )
      v84 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = v81;
LABEL_11:
    v23 = v80;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v25 = 0;
      v26 = 0;
      v87 = 0LL;
      v77 = 0;
      if ( (_DWORD)v23 )
      {
        v27 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v27 & 1) != 0 )
        {
          LOBYTE(v23) = (v27 & 0x42) != 0;
          if ( ((unsigned __int8)v23 & ((v27 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
          {
            v23 = (__int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(v23 + 352) != 1 )
            {
              DpcRequestSummary = *(_QWORD *)(v23 + 1288);
              if ( DpcRequestSummary )
              {
                v60 = *(_QWORD *)(DpcRequestSummary + 8 * ((v7 >> 3) & 0x1FF));
                if ( (v60 & 0x20) != 0 )
                  v27 |= 0x20uLL;
                v23 = v27;
                v27 |= 0x42uLL;
                if ( (v60 & 0x42) == 0 )
                  v27 = v23;
              }
            }
          }
        }
        if ( v27 )
        {
          if ( (v27 & 1) != 0 || (v27 & 0x400) == 0 )
            goto LABEL_17;
          if ( v102 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v27) )
          {
            v57 = v27;
            if ( qword_140E2D940 && (v27 & 0x10) == 0 )
              v57 = v27 & ~qword_140E2D940;
            ProtoPteAddress = v57 >> 16;
            goto LABEL_123;
          }
          if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v27) )
          {
            if ( (_DWORD)SchedulerAssist == 1 )
              goto LABEL_221;
            if ( v22 )
            {
              MiUnlockProtoPoolPage(v22, v99, SchedulerAssist, v20);
              v22 = 0LL;
              v81 = 0LL;
              v6 = 0LL;
            }
            if ( v79 )
            {
              MiFlushTbList(v79, DpcRequestSummary, SchedulerAssist);
              MiReleaseProcessorFlushList();
              v79 = 0LL;
            }
            ProtoLeafValid = MiMakeProtoLeafValid(v7);
            if ( ProtoLeafValid < 0 )
LABEL_221:
              ProtoLeafValid = -1073740748;
            else
              v7 -= 8LL;
            v32 = v7 + 8;
            v33 = 0;
            v7 += 8LL;
            goto LABEL_33;
          }
          DpcRequestSummary = (__int64)(v7 << 25) >> 16;
          if ( ((DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
             || (DpcRequestSummary & 0xFFFFFFFFFFFFF000uLL) == qword_140E2D838 && qword_140E2D838)
            && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
          {
            goto LABEL_221;
          }
          v23 = v101;
          if ( (*(_DWORD *)(v101 + 48) & 0x200000) != 0 || !*(_QWORD *)(v101 + 80) )
          {
LABEL_217:
            v70 = v27;
            if ( qword_140E2D940 && (v27 & 0x10) == 0 )
              v70 = v27 & ~qword_140E2D940;
            ProtoPteAddress = v70 >> 16;
            if ( (_DWORD)SchedulerAssist != 2 )
              goto LABEL_221;
          }
          else
          {
            ProtoPteAddress = MiGetProtoPteAddress(v101, DpcRequestSummary >> 12, 8LL, &v85);
            if ( !(unsigned int)MiIsPrototypePteVadLookup(v27, v67, v68) )
            {
              DpcRequestSummary = qword_140E2D940;
              v69 = v27;
              if ( qword_140E2D940 && (v27 & 0x10) == 0 )
                v69 = v27 & ~qword_140E2D940;
              v23 = v69 >> 16;
              if ( ProtoPteAddress != v23 )
              {
                SchedulerAssist = v102;
                goto LABEL_217;
              }
            }
          }
LABEL_123:
          if ( !ProtoPteAddress )
            goto LABEL_17;
          goto LABEL_124;
        }
      }
      v23 = v101;
      if ( (*(_DWORD *)(v101 + 48) & 0x200000) != 0 || !*(_QWORD *)(v101 + 80) )
        goto LABEL_17;
      ProtoPteAddress = MiGetProtoPteAddress(v101, (unsigned __int64)((__int64)(v7 << 25) >> 16) >> 12, 8LL, &v85);
      if ( !ProtoPteAddress )
      {
        if ( !v80 )
        {
          v33 = 0;
          goto LABEL_66;
        }
LABEL_17:
        if ( v22 )
        {
          v28 = 0;
          if ( v99 == 18 )
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v28 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
                {
                  HvlNotifyLongSpinWait(v28);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
          }
          else
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v28 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
                {
                  HvlNotifyLongSpinWait(v28);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
          }
          if ( (*(_QWORD *)v22 & 0xFFFFFFFFFFELL) != 0 )
          {
            v39 = *(_QWORD *)v22 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
            v40 = *(_QWORD *)(8 * v39);
            v41 = 8 * v39;
            if ( v40 == 8 * v39 )
            {
              v30 = *(_QWORD *)v22 & 0xFFFFF00000000001uLL;
            }
            else
            {
              v42 = *(_QWORD *)v40;
              if ( *(_QWORD *)(v40 + 8) != v41 || *(_QWORD *)(v42 + 8) != v40 )
                __fastfail(3u);
              *(_QWORD *)v41 = v42;
              *(_QWORD *)(v42 + 8) = v41;
              if ( *(_QWORD *)v41 == v41 )
              {
                *(_QWORD *)v40 = v40;
                v29 = (_QWORD *)v40;
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)v41 + 8LL) = v40;
                v29 = *(_QWORD **)(v41 + 8);
                *v29 = v40;
              }
              *(_QWORD *)(v40 + 8) = v29;
              DpcRequestSummary = 0xFFFFF00000000001uLL;
              v30 = (2 * (v40 >> 4)) ^ ((2 * (v40 >> 4)) ^ *(_QWORD *)v22) & 0xFFFFF00000000001uLL;
            }
            *(_QWORD *)v22 = v30;
            MiRemoveLockedPageChargeAndDecRef(v22, DpcRequestSummary, SchedulerAssist, v20);
            if ( v41 )
              *(_DWORD *)(v41 + 16) = 1;
          }
          else
          {
            v83 = *(_DWORD *)(v22 + 32);
            BYTE2(v83) &= ~0x20u;
            *(_DWORD *)(v22 + 32) = v83;
            MiRemoveLockedPageChargeAndDecRef(v22, DpcRequestSummary, SchedulerAssist, v20);
          }
          if ( v99 == 18 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v99 <= 1u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v99);
              __writecr8(v99);
            }
          }
          v22 = 0LL;
          v81 = 0LL;
          v6 = 0LL;
        }
        goto LABEL_29;
      }
LABEL_124:
      if ( ((ProtoPteAddress ^ v6) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        break;
LABEL_29:
      v31 = MiActOnPte(v101, v80, v7, ProtoPteAddress, v102, a5, &v88, &v86);
      if ( v31 )
      {
        if ( v31 == 274 )
        {
          v25 = MiCopyOnWrite((__int64)(v7 << 25) >> 16, v7, (__int64)&v87);
          v77 = v25;
          v7 -= 8LL;
          v26 = 1;
        }
        else if ( v31 == -1073741791 )
        {
          v43 = v79;
          v44 = (__int64)(v7 << 25) >> 16;
          if ( v79 )
          {
            SchedulerAssist = 0LL;
          }
          else
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v43 = ProcessorFlushList;
            v79 = ProcessorFlushList;
            SchedulerAssist = 0LL;
            *(_DWORD *)(ProcessorFlushList + 16) = 0;
            *(_DWORD *)(ProcessorFlushList + 20) = 10;
            *(_QWORD *)ProcessorFlushList = v82;
            *(_BYTE *)(ProcessorFlushList + 24) = ((_DWORD)v82[23] & 0x800) != 0;
            if ( ((_DWORD)v82[23] & 0xF) != 0 || v82 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v46 = ((_DWORD)v82[23] & 0xF) == 0;
            }
            else
            {
              *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
              v46 = 0;
            }
            *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
            *(_DWORD *)(ProcessorFlushList + 8) = v46;
            *(_WORD *)(ProcessorFlushList + 25) = 0;
            *(_DWORD *)(ProcessorFlushList + 28) = 0;
            *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
            *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
          }
          v47 = 1LL;
          if ( *(_DWORD *)(v43 + 8) != 1 )
          {
            v65 = *(_DWORD *)(v43 + 16);
            if ( (v65 & 4) == 0 && v44 >= 0xFFFFF68000000000uLL && v44 <= 0xFFFFF6FFFFFFFFFFuLL )
              *(_DWORD *)(v43 + 16) = v65 | 4;
          }
LABEL_84:
          for ( i = 0; ; i = 1 )
          {
            v49 = *(unsigned int *)(v43 + 28);
            if ( (_DWORD)v49 )
            {
              if ( (*(_DWORD *)(v43 + 16) & 2) == 0 )
              {
                v20 = v43 + 8LL * (unsigned int)(v49 - 1);
                v50 = *(_QWORD *)(v20 + 40);
                if ( (v50 & 0xC00) == 0 )
                {
                  SchedulerAssist = *(_QWORD *)(v20 + 40) & 0x3FFLL;
                  if ( (v50 & 0xFFFFFFFFFFFFF000uLL) + ((SchedulerAssist + 1) << 12) == v44
                    && v47 + SchedulerAssist > SchedulerAssist
                    && v47 + SchedulerAssist <= 0x3FF )
                  {
                    *(_QWORD *)(v43 + 32) += v47;
                    *(_QWORD *)(v20 + 40) = (v50 + v47) ^ ((v50 + v47) ^ v50) & 0xFFFFFFFFFFFFFC00uLL;
                    goto LABEL_153;
                  }
                  v20 = v43 + 8 * ((unsigned int)(v49 - 1) + 5LL);
                  v51 = *(_QWORD *)v20;
                  SchedulerAssist = v44 + (v47 << 12);
                  if ( (*(_QWORD *)v20 & 0xFFFFFFFFFFFFF000uLL) == SchedulerAssist )
                  {
                    v66 = *(_QWORD *)v20 & 0x3FFLL;
                    if ( v47 + v66 <= 0x3FF && v47 + v66 > v66 )
                    {
                      *(_QWORD *)(v79 + 32) += v47;
                      *(_QWORD *)v20 = (v51 - (v47 << 12) + v47) ^ ((v51 - (v47 << 12)) ^ (v51 - (v47 << 12) + v47)) & 0xFFFFFFFFFFFFFC00uLL;
                      goto LABEL_153;
                    }
                  }
                  v43 = v79;
                  SchedulerAssist = 0LL;
                }
              }
            }
            if ( (_DWORD)v49 != *(_DWORD *)(v43 + 12) )
              break;
            if ( i )
            {
              if ( !*(_BYTE *)(v43 + 25) )
                *(_BYTE *)(v43 + 25) = 1;
              goto LABEL_153;
            }
            if ( *(_BYTE *)(v43 + 25) )
              goto LABEL_153;
            qsort((void *)(v43 + 40), v49, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v79);
            v43 = v79;
            SchedulerAssist = 0LL;
          }
          while ( v47 )
          {
            v61 = 1024LL;
            if ( (unsigned __int64)(v47 - 1) <= 0x3FF )
              v61 = v47;
            *(_QWORD *)(v43 + 8 * v49 + 40) = v44 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v61 - 1) & 0x3FF;
            v62 = *(_DWORD *)(v43 + 28);
            *(_QWORD *)(v43 + 32) += v61;
            v49 = (unsigned int)(v62 + 1);
            v44 += v61 << 12;
            *(_DWORD *)(v43 + 28) = v49;
            v47 -= v61;
            if ( v47 && (_DWORD)v49 == *(_DWORD *)(v43 + 12) )
              goto LABEL_84;
          }
LABEL_153:
          v25 = 0;
        }
        else
        {
          ProtoLeafValid = v31;
        }
      }
      DpcRequestSummary = v86;
      if ( v86 )
      {
        if ( v22 )
        {
          MiUnlockProtoPoolPage(v22, v99, SchedulerAssist, v20);
          DpcRequestSummary = v86;
          v22 = 0LL;
          v81 = 0LL;
          v6 = 0LL;
        }
        MiReleasePageFileInfo(v88, DpcRequestSummary, 1);
      }
      v7 += 8LL;
      v32 = v7;
      if ( v26 )
      {
        v33 = v77;
LABEL_66:
        if ( v22 )
        {
LABEL_67:
          MiUnlockProtoPoolPage(v22, v99, SchedulerAssist, v20);
          v81 = 0LL;
          v6 = 0LL;
        }
        if ( v79 )
        {
          MiFlushTbList(v79, DpcRequestSummary, SchedulerAssist);
          MiReleaseProcessorFlushList();
          v79 = 0LL;
        }
        p_Blink = (__int64)v82;
        if ( v84 )
        {
          MiUnlockPageTable(v82, v84);
          v84 = 0LL;
        }
        MiUnlockWorkingSetShared(v82, v76);
        if ( v33 < 0 )
        {
          if ( v33 == -1073740748 )
          {
            if ( ((_DWORD)v82[23] & 0xF) == 0 )
            {
              CurrentThread = KeGetCurrentThread();
              v72 = CurrentThread->ApcState.Process;
              v73 = (struct _KTHREAD *)v72[1].ActiveGroupPadding[0];
              if ( v73 )
              {
                if ( v73 != CurrentThread )
                {
                  LOCK_ADDRESS_SPACE(CurrentThread, CurrentThread->ApcState.Process);
                  UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, v72);
                }
              }
            }
          }
          else if ( v33 == -1073741801
                 && KeGetCurrentIrql() < 2u
                 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
                 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
          {
            if ( v87 )
            {
              MiReplenishSlabAllocator(v87, 1LL, 0x20000LL);
            }
            else
            {
              CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
              v75 = 3LL;
              if ( CurrentSlabIdentity == -1 )
                v75 = 1LL;
              MiWaitForFreePage(*((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)v82 + 87)), v75);
            }
          }
        }
        goto LABEL_75;
      }
      DpcRequestSummary = v79;
      v33 = v25;
      SchedulerAssist = (unsigned int)ProtoLeafValid;
      v81 = v22;
      if ( v25 < 0 )
        goto LABEL_66;
LABEL_33:
      if ( v32 > v100 || (v32 & 0xFFF) == 0 )
        goto LABEL_66;
      if ( (v32 & 0x78) == 0 && ((_DWORD)v82[23] & 0xFu) <= 5 )
      {
        if ( ((_DWORD)v82[23] & 0xF) == 1 )
          v54 = (__int64 *)&unk_140E38500;
        else
          v54 = (__int64 *)(v82 + 24);
        v55 = *v54;
        MmInternal = (unsigned __int64)KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          MmInternal = *(unsigned int *)(MmInternal + 324);
        if ( (*(_DWORD *)(v55 + (MmInternal << 6)) & 0x40000000) != 0 )
          goto LABEL_66;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v20 = 0LL;
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
            v38 = 1;
            goto LABEL_97;
          }
          goto LABEL_43;
        }
LABEL_41:
        if ( DpcWatchdogCount > 7 )
        {
          if ( (_DWORD)SchedulerAssist )
            goto LABEL_43;
          goto LABEL_107;
        }
        goto LABEL_62;
      }
      if ( !CurrentPrcb->NestingLevel )
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v38 = 2;
          goto LABEL_97;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v38 = 3;
          goto LABEL_97;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v38 = 4;
          goto LABEL_97;
        }
        goto LABEL_41;
      }
      v20 = 1LL;
      if ( DpcWatchdogCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v38 = 7;
          goto LABEL_97;
        }
LABEL_43:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v38 = 5;
          goto LABEL_97;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v38 = 6;
          goto LABEL_97;
        }
LABEL_107:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        v53 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int64)v53->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw((const void *)SchedulerAssist);
          v63 = *(_DWORD *)SchedulerAssist;
          do
          {
            DpcRequestSummary = v63;
            LODWORD(DpcRequestSummary) = v63 & 0xFFDFFFFF;
            v64 = v63;
            v63 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v63 & 0xFFDFFFFF, v63);
          }
          while ( v64 != v63 );
          if ( (v63 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
        _enable();
        v38 = 0;
LABEL_97:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v38, DpcWatchdogCount, DpcTimeCount, v20);
        if ( v38 )
          goto LABEL_66;
      }
LABEL_62:
      v23 = v80;
      if ( v22 )
      {
        if ( (*(_QWORD *)v22 & 0xFFFFFFFFFFELL) == 0 )
          goto LABEL_11;
        goto LABEL_67;
      }
    }
    if ( v22 )
    {
      MiUnlockProtoPoolPage(v22, v99, SchedulerAssist, v20);
      v6 = 0LL;
    }
    v81 = MiLockProtoPoolPage(ProtoPteAddress, &v99);
    v22 = v81;
    if ( v81 )
    {
      v6 = ProtoPteAddress;
      goto LABEL_29;
    }
    if ( v79 )
    {
      MiFlushTbList(v79, v58, v59);
      MiReleaseProcessorFlushList();
      v79 = 0LL;
    }
    p_Blink = (__int64)v82;
    if ( v84 )
    {
      MiUnlockPageTable(v82, v84);
      v84 = 0LL;
    }
    MiUnlockWorkingSetShared(v82, v76);
    MmAccessFault(2uLL, ProtoPteAddress);
LABEL_75:
    MiLockWorkingSetShared(p_Blink);
    v5 = ProtoLeafValid;
    v8 = v100;
  }
  MiUnlockWorkingSetShared(p_Blink, v76);
  return v5;
}
