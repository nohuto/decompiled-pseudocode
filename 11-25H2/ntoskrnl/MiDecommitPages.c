/*
 * XREFs of MiDecommitPages @ 0x140381AE0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14020852C (MmStoreDecommitVirtualMemory.c)
 *     MiMapImageScpCfgPages @ 0x1402A69D0 (MiMapImageScpCfgPages.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB6890 (MmReturnChargesToLockPagedPool.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402B2120 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140382A54 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140382C60 (MiDecommitHandleProtoFormatPte.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiReturnPagedPoolLockCharge @ 0x140383A0C (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitLargePte @ 0x1404C9F9C (MiDecommitLargePte.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDecommitPages(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  unsigned __int64 DpcRequestSummary; // rdx
  _KPROCESS *Process; // rcx
  _KPROCESS **v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 KernelWaitTime; // rdx
  int v17; // r8d
  unsigned int v18; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  int v20; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  int v24; // ebx
  unsigned __int64 v26; // rbx
  unsigned __int64 i; // rdx
  _QWORD *v28; // rcx
  struct _KPRCB *v29; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 *v31; // rcx
  __int64 v32; // rcx
  unsigned int *MmInternal; // rax
  __int64 v34; // rax
  __int64 *ProcessorFlushList; // rax
  __int64 v36; // r8
  BOOL v37; // ecx
  __int64 v38; // rax
  unsigned __int32 v39; // eax
  unsigned __int32 v40; // ett
  __int64 v41; // r9
  unsigned __int64 v42; // rcx
  _BYTE v43[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v44; // [rsp+70h] [rbp-90h]
  _KPROCESS *v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+88h] [rbp-78h]
  char v48; // [rsp+8Ch] [rbp-74h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v51; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v52; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-48h]
  unsigned int v54; // [rsp+C0h] [rbp-40h]
  unsigned int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h]
  char v58; // [rsp+FCh] [rbp-4h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  unsigned __int64 v60; // [rsp+118h] [rbp+18h]
  unsigned __int64 v61; // [rsp+120h] [rbp+20h]
  unsigned int v62; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]

  memset_0(v43, 0, 0xE0uLL);
  MiDecommitInitializePacket((unsigned int)v43, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v51 <= v52 )
  {
    Process = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
    do
    {
      if ( v48 == 17 || (v14 = (_KPROCESS **)v53, (v53 & 0xFFF) == 0) )
      {
        MiDecommitPagesTail((__int64)v43, DpcRequestSummary);
        if ( !(unsigned int)MiDecommitLockNewPageTable(v43) )
          break;
        v14 = (_KPROCESS **)v53;
        Process = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
      }
      v15 = (unsigned __int64)*v14;
      KernelWaitTime = v53;
      if ( v53 >= 0xFFFFF6FB7DBED000uLL && v53 <= 0xFFFFF6FB7DBED7F8uLL && (v15 & 1) != 0 )
      {
        LOBYTE(Process) = (v15 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v15 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v38 = *(_QWORD *)(KernelWaitTime + 8 * ((v53 >> 3) & 0x1FF));
              if ( (v38 & 0x20) != 0 )
                v15 |= 0x20uLL;
              Process = (_KPROCESS *)v15;
              v15 |= 0x42uLL;
              if ( (v38 & 0x42) == 0 )
                v15 = (unsigned __int64)Process;
            }
          }
        }
      }
      if ( !v15 )
      {
        if ( !v47 )
        {
          v26 = v61;
          if ( v54 )
            v26 = 1LL;
          if ( v51 > v60 )
          {
            Process = v45;
            v45->ProfileListHead.Flink = (struct _LIST_ENTRY *)((char *)v45->ProfileListHead.Flink + v57);
          }
          if ( v59 )
          {
            MiIncreaseUsedPtes(Process, v50, (unsigned int)v26, 0LL);
            for ( i = 0LL; i < v26; *v28 = v59 )
              v28 = (_QWORD *)(v53 + 8 * i++);
          }
        }
        goto LABEL_17;
      }
      if ( (v15 & 1) == 0 )
      {
        if ( (v15 & 0x400) != 0 )
        {
          MiDecommitHandleProtoFormatPte(v43, v15);
        }
        else if ( (v15 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiDecommitHandleTransitionPte(v43, v15) )
            goto LABEL_32;
        }
        else
        {
          MiDecommitHandlePageFileFormatPte(v43, v15);
        }
        goto LABEL_17;
      }
      if ( (v58 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(v43, v15);
        goto LABEL_17;
      }
      if ( !v44 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        v36 = v46;
        KernelWaitTime = (unsigned __int64)ProcessorFlushList;
        v44 = ProcessorFlushList;
        *((_DWORD *)ProcessorFlushList + 4) = 0;
        *((_DWORD *)ProcessorFlushList + 5) = 1;
        *ProcessorFlushList = v36;
        *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v36 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(v36 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v36 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v37 = (*(_DWORD *)(v36 + 184) & 0xF) == 0;
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
      if ( (v15 & 0x80u) != 0LL && v54 )
        goto LABEL_50;
      if ( v54 )
      {
        v17 = 2;
        goto LABEL_14;
      }
      if ( v61 != 1 )
LABEL_50:
        v17 = 0;
      else
        v17 = 1;
LABEL_14:
      if ( v56 )
      {
        if ( v17 == 2 )
        {
LABEL_16:
          MiDecommitAddToList(v43, v49);
          goto LABEL_17;
        }
        v42 = v63;
        if ( !v63 )
          v42 = v53;
        v63 = v42;
        v64 = (__int64)(v53 + 8 * v61 - v42) >> 3;
      }
      if ( v17 )
        goto LABEL_16;
      MiDecommitLargePte(v43, KernelWaitTime);
LABEL_17:
      v51 += 8 * v57;
      v18 = 0;
      v49 = (__int64)(v51 << 25) >> 16;
      DpcRequestSummary = v51;
      if ( v62 <= 1 )
      {
        v18 = 2 - v62;
        v41 = 2 - v62;
        do
        {
          DpcRequestSummary = ((DpcRequestSummary >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v41;
        }
        while ( v41 );
      }
      v53 = DpcRequestSummary;
      v54 = v18;
      if ( (v51 & 0x78) == 0 && (*(_DWORD *)(v46 + 184) & 0xFu) <= 5 )
      {
        v31 = (*(_DWORD *)(v46 + 184) & 0xF) == 1 ? (__int64 *)&unk_140E38500 : (__int64 *)(v46 + 192);
        v32 = *v31;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v34 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)(v32 + (v34 << 6)) & 0x40000000) != 0 )
          goto LABEL_71;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = 0;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v20 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v24 = 1;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
LABEL_24:
        if ( DpcWatchdogCount > 7 )
        {
          if ( v20 )
            goto LABEL_26;
          goto LABEL_58;
        }
        goto LABEL_32;
      }
      if ( !CurrentPrcb->NestingLevel )
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v24 = 2;
          goto LABEL_29;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v24 = 3;
          goto LABEL_29;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v24 = 4;
          goto LABEL_29;
        }
        goto LABEL_24;
      }
      if ( DpcWatchdogCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v24 = 7;
          goto LABEL_29;
        }
LABEL_26:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v24 = 5;
          goto LABEL_29;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v24 = 6;
          goto LABEL_29;
        }
LABEL_58:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        v29 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v29->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v39 = *SchedulerAssist;
          do
          {
            DpcRequestSummary = v39;
            LODWORD(DpcRequestSummary) = v39 & 0xFFDFFFFF;
            v40 = v39;
            v39 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v39 & 0xFFDFFFFF, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
        _enable();
        v24 = 0;
LABEL_29:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v24, DpcWatchdogCount, DpcTimeCount);
        if ( !v24 )
          goto LABEL_32;
LABEL_71:
        MiDecommitPagesTail((__int64)v43, DpcRequestSummary);
      }
LABEL_32:
      Process = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
    }
    while ( v51 <= v52 );
  }
  MiDecommitPagesTail((__int64)v43, DpcRequestSummary);
  return v55;
}
