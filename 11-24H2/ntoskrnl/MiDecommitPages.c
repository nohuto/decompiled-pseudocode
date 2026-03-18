/*
 * XREFs of MiDecommitPages @ 0x140288300
 * Callers:
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiMapImageScpCfgPages @ 0x140264810 (MiMapImageScpCfgPages.c)
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     MmStoreDecommitVirtualMemory @ 0x140397A6C (MmStoreDecommitVirtualMemory.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiDecommitRegion @ 0x1408DC180 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140ABABD0 (MmReturnChargesToLockPagedPool.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140286EA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140289270 (MiDecommitHandlePageFileFormatPte.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140289580 (MiDecommitHandleProtoFormatPte.c)
 *     MiDecommitInitializePacket @ 0x1402899B0 (MiDecommitInitializePacket.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiDecommitLargePte @ 0x1404C7F24 (MiDecommitLargePte.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiDecommitPages(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  _KPROCESS *Process; // rcx
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 KernelWaitTime; // rdx
  int v16; // r8d
  unsigned int v17; // r8d
  unsigned __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // r9
  int UserWaitTime_high; // edx
  unsigned int v22; // edi
  unsigned int v23; // esi
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v25; // ebx
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 i; // rdx
  _QWORD *v30; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v32; // r8
  BOOL v33; // ecx
  signed __int32 *v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rcx
  unsigned int *MmInternal; // rax
  __int64 v38; // rax
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int64 v41; // r9
  unsigned __int64 v42; // rcx
  _BYTE v43[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
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
    while ( 1 )
    {
      if ( v48 == 17 || (v13 = (unsigned __int64 *)v53, (v53 & 0xFFF) == 0) )
      {
        MiDecommitPagesTail(v43);
        if ( !(unsigned int)MiDecommitLockNewPageTable(v43) )
          goto LABEL_35;
        v13 = (unsigned __int64 *)v53;
      }
      v14 = *v13;
      KernelWaitTime = v53;
      if ( v53 >= 0xFFFFF6FB7DBED000uLL && v53 <= 0xFFFFF6FB7DBED7F8uLL && (v14 & 1) != 0 )
      {
        LOBYTE(Process) = (v14 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v14 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v27 = *(_QWORD *)(KernelWaitTime + 8 * ((v53 >> 3) & 0x1FF));
              if ( (v27 & 0x20) != 0 )
                v14 |= 0x20uLL;
              Process = (_KPROCESS *)v14;
              v14 |= 0x42uLL;
              if ( (v27 & 0x42) == 0 )
                v14 = (unsigned __int64)Process;
            }
          }
        }
      }
      if ( !v14 )
      {
        if ( !v47 )
        {
          v28 = v61;
          if ( v54 )
            v28 = 1LL;
          if ( v51 > v60 )
          {
            Process = v45;
            v45->ProfileListHead.Flink = (struct _LIST_ENTRY *)((char *)v45->ProfileListHead.Flink + v57);
          }
          if ( v59 )
          {
            MiIncreaseUsedPtes(Process, v50, (unsigned int)v28, 0LL);
            for ( i = 0LL; i < v28; *v30 = v59 )
              v30 = (_QWORD *)(v53 + 8 * i++);
          }
        }
        goto LABEL_19;
      }
      if ( (v14 & 1) == 0 )
      {
        if ( (v14 & 0x400) != 0 )
        {
          MiDecommitHandleProtoFormatPte(v43, v14);
        }
        else if ( (v14 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiDecommitHandleTransitionPte((__int64)v43, v14) )
            goto LABEL_34;
        }
        else
        {
          MiDecommitHandlePageFileFormatPte(v43, v14);
        }
        goto LABEL_19;
      }
      if ( (v58 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge((__int64)v43, v14);
        goto LABEL_19;
      }
      if ( !v44 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(Process, KernelWaitTime);
        v32 = v46;
        v44 = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 1;
        *(_QWORD *)ProcessorFlushList = v32;
        *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v32 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(v32 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v32 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v33 = (*(_DWORD *)(v32 + 184) & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v33 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v33;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
      if ( (v14 & 0x80u) != 0LL && v54 )
        break;
      if ( v54 )
      {
        v16 = 2;
      }
      else
      {
        if ( v61 != 1 )
          break;
        v16 = 1;
      }
LABEL_16:
      if ( v56 )
      {
        if ( v16 == 2 )
        {
LABEL_18:
          MiDecommitAddToList(v43, v49);
          goto LABEL_19;
        }
        v42 = v63;
        if ( !v63 )
          v42 = v53;
        v63 = v42;
        v64 = (__int64)(v53 + 8 * v61 - v42) >> 3;
      }
      if ( v16 )
        goto LABEL_18;
      MiDecommitLargePte(v43);
LABEL_19:
      v51 += 8 * v57;
      v17 = 0;
      v49 = (__int64)(v51 << 25) >> 16;
      v18 = v51;
      if ( v62 <= 1 )
      {
        v17 = 2 - v62;
        v41 = 2 - v62;
        do
        {
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v41;
        }
        while ( v41 );
      }
      v53 = v18;
      v54 = v17;
      if ( (v51 & 0x78) == 0 && (*(_DWORD *)(v46 + 184) & 0xFu) <= 5 )
      {
        v35 = (*(_DWORD *)(v46 + 184) & 0xF) == 1 ? (__int64 *)&unk_140E38740 : (__int64 *)(v46 + 192);
        v36 = *v35;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v38 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)(v36 + (v38 << 6)) & 0x40000000) != 0 )
          goto LABEL_85;
      }
      Process = (_KPROCESS *)KeGetCurrentPrcb();
      v19 = 0;
      v20 = 0LL;
      UserWaitTime_high = HIDWORD(Process[31].UserWaitTime);
      v22 = *(_DWORD *)&Process[73].Spare3[1];
      v23 = HIDWORD(Process[75].Padding[0]);
      if ( (UserWaitTime_high & 1) != 0 )
      {
        v19 = 1;
        if ( v23 > 7 )
        {
          if ( BYTE1(Process[31].UserWaitTime) )
          {
            v25 = 1;
            goto LABEL_31;
          }
          goto LABEL_28;
        }
LABEL_26:
        if ( v22 > 7 )
        {
          if ( v19 )
            goto LABEL_28;
          goto LABEL_73;
        }
        goto LABEL_34;
      }
      if ( !LOBYTE(Process->ProfileListHead.Blink) )
      {
        if ( (UserWaitTime_high & 0x1E) != 0 )
        {
          v25 = 2;
          goto LABEL_31;
        }
        if ( BYTE1(Process[31].UserWaitTime) )
        {
          v25 = 3;
          goto LABEL_31;
        }
        Blink = Process->Header.WaitListHead.Blink;
        if ( Blink && Blink != Process->Header.WaitListHead.Flink )
        {
          v25 = 4;
          goto LABEL_31;
        }
        goto LABEL_26;
      }
      v20 = 1LL;
      if ( v22 > 7 )
      {
        if ( BYTE1(Process[31].UserWaitTime) )
        {
          v25 = 7;
          goto LABEL_31;
        }
LABEL_28:
        if ( (UserWaitTime_high & 0x1E) != 0 )
        {
          v25 = 5;
          goto LABEL_31;
        }
        if ( Process->Header.WaitListHead.Flink != Process->ProfileListHead.Flink )
        {
          v25 = 6;
          goto LABEL_31;
        }
LABEL_73:
        _disable();
        *(_DWORD *)&Process[73].Spare3[1] = 0;
        HIDWORD(Process[75].Padding[0]) = 0;
        Process = (_KPROCESS *)KeGetCurrentPrcb();
        v34 = (signed __int32 *)Process[80].ThreadListHead.Blink;
        if ( v34 )
        {
          _m_prefetchw(v34);
          v39 = *v34;
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange(v34, v39 & 0xFFDFFFFF, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)Process);
        }
        _enable();
        v25 = 0;
LABEL_31:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v25, v22, v23, v20);
        if ( !v25 )
          goto LABEL_34;
LABEL_85:
        MiDecommitPagesTail(v43);
      }
LABEL_34:
      if ( v51 > v52 )
        goto LABEL_35;
    }
    v16 = 0;
    goto LABEL_16;
  }
LABEL_35:
  MiDecommitPagesTail(v43);
  return v55;
}
