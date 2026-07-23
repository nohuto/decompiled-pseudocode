/*
 * XREFs of MiDecommitPages @ 0x140297F00
 * Callers:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MmStoreDecommitVirtualMemory @ 0x1402F62C8 (MmStoreDecommitVirtualMemory.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB5BF0 (MmReturnChargesToLockPagedPool.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140296AA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140298E70 (MiDecommitHandlePageFileFormatPte.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140299180 (MiDecommitHandleProtoFormatPte.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDecommitPages(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  _KPROCESS *Process; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 KernelWaitTime; // rdx
  int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdx
  int UserWaitTime_high; // edx
  unsigned int v21; // edi
  unsigned int v22; // esi
  struct _LIST_ENTRY *Blink; // rax
  int v24; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 i; // rdx
  _QWORD *v29; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v31; // r8
  BOOL v32; // ecx
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned int *MmInternal; // rax
  __int64 v36; // rax
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  _BYTE v41[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  _KPROCESS *v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+88h] [rbp-78h]
  char v46; // [rsp+8Ch] [rbp-74h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v51; // [rsp+B8h] [rbp-48h]
  unsigned int v52; // [rsp+C0h] [rbp-40h]
  unsigned int v53; // [rsp+E4h] [rbp-1Ch]
  int v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  char v56; // [rsp+FCh] [rbp-4h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  unsigned __int64 v58; // [rsp+118h] [rbp+18h]
  unsigned __int64 v59; // [rsp+120h] [rbp+20h]
  unsigned int v60; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]

  memset_0(v41, 0, 0xE0uLL);
  MiDecommitInitializePacket((unsigned int)v41, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v49 <= v50 )
  {
    while ( 1 )
    {
      if ( v46 == 17 || (v14 = (unsigned __int64 *)v51, (v51 & 0xFFF) == 0) )
      {
        MiDecommitPagesTail((__int64)v41);
        if ( !(unsigned int)MiDecommitLockNewPageTable(v41) )
          goto LABEL_35;
        v14 = (unsigned __int64 *)v51;
      }
      v15 = *v14;
      KernelWaitTime = v51;
      if ( v51 >= 0xFFFFF6FB7DBED000uLL && v51 <= 0xFFFFF6FB7DBED7F8uLL && (v15 & 1) != 0 )
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
              v26 = *(_QWORD *)(KernelWaitTime + 8 * ((v51 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v15 |= 0x20uLL;
              Process = (_KPROCESS *)v15;
              v15 |= 0x42uLL;
              if ( (v26 & 0x42) == 0 )
                v15 = (unsigned __int64)Process;
            }
          }
        }
      }
      if ( !v15 )
      {
        if ( !v45 )
        {
          v27 = v59;
          if ( v52 )
            v27 = 1LL;
          if ( v49 > v58 )
          {
            Process = v43;
            v43->ProfileListHead.Flink = (struct _LIST_ENTRY *)((char *)v43->ProfileListHead.Flink + v55);
          }
          if ( v57 )
          {
            MiIncreaseUsedPtes(Process, v48, (unsigned int)v27);
            for ( i = 0LL; i < v27; *v29 = v57 )
              v29 = (_QWORD *)(v51 + 8 * i++);
          }
        }
        goto LABEL_19;
      }
      if ( (v15 & 1) == 0 )
      {
        if ( (v15 & 0x400) != 0 )
        {
          MiDecommitHandleProtoFormatPte(v41, v15);
        }
        else if ( (v15 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiDecommitHandleTransitionPte((__int64)v41, v15) )
            goto LABEL_34;
        }
        else
        {
          MiDecommitHandlePageFileFormatPte(v41, v15);
        }
        goto LABEL_19;
      }
      if ( (v56 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge((__int64)v41, v15);
        goto LABEL_19;
      }
      if ( !v42 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(Process, KernelWaitTime, v13);
        v31 = v44;
        v42 = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 1;
        *(_QWORD *)ProcessorFlushList = v31;
        *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v31 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(v31 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v31 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v32 = (*(_DWORD *)(v31 + 184) & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v32 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v32;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
      if ( (v15 & 0x80u) != 0LL && v52 )
        break;
      if ( v52 )
      {
        v17 = 2;
      }
      else
      {
        if ( v59 != 1 )
          break;
        v17 = 1;
      }
LABEL_16:
      if ( v54 )
      {
        if ( v17 == 2 )
        {
LABEL_18:
          MiDecommitAddToList(v41, v47);
          goto LABEL_19;
        }
        v40 = v61;
        if ( !v61 )
          v40 = v51;
        v61 = v40;
        v62 = (__int64)(v51 + 8 * v59 - v40) >> 3;
      }
      if ( v17 )
        goto LABEL_18;
      MiDecommitLargePte(v41);
LABEL_19:
      v49 += 8 * v55;
      v18 = 0;
      v47 = (__int64)(v49 << 25) >> 16;
      v19 = v49;
      if ( v60 <= 1 )
      {
        v18 = 2 - v60;
        v39 = 2 - v60;
        do
        {
          v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v39;
        }
        while ( v39 );
      }
      v51 = v19;
      v52 = v18;
      if ( (v49 & 0x78) == 0 && (*(_DWORD *)(v44 + 184) & 0xFu) <= 5 )
      {
        v33 = (*(_DWORD *)(v44 + 184) & 0xF) == 1 ? (__int64 *)&unk_140E38880 : (__int64 *)(v44 + 192);
        v34 = *v33;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v36 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)(v34 + (v36 << 6)) & 0x40000000) != 0 )
          goto LABEL_85;
      }
      Process = (_KPROCESS *)KeGetCurrentPrcb();
      v13 = 0LL;
      UserWaitTime_high = HIDWORD(Process[31].UserWaitTime);
      v21 = *(_DWORD *)&Process[73].Spare3[1];
      v22 = HIDWORD(Process[75].Padding[0]);
      if ( (UserWaitTime_high & 1) != 0 )
      {
        v13 = 1LL;
        if ( v22 > 7 )
        {
          if ( BYTE1(Process[31].UserWaitTime) )
          {
            v24 = 1;
            goto LABEL_31;
          }
          goto LABEL_28;
        }
LABEL_26:
        if ( v21 > 7 )
        {
          if ( (_DWORD)v13 )
            goto LABEL_28;
          goto LABEL_73;
        }
        goto LABEL_34;
      }
      if ( !LOBYTE(Process->ProfileListHead.Blink) )
      {
        if ( (UserWaitTime_high & 0x1E) != 0 )
        {
          v24 = 2;
          goto LABEL_31;
        }
        if ( BYTE1(Process[31].UserWaitTime) )
        {
          v24 = 3;
          goto LABEL_31;
        }
        Blink = Process->Header.WaitListHead.Blink;
        if ( Blink && Blink != Process->Header.WaitListHead.Flink )
        {
          v24 = 4;
          goto LABEL_31;
        }
        goto LABEL_26;
      }
      if ( v21 > 7 )
      {
        if ( BYTE1(Process[31].UserWaitTime) )
        {
          v24 = 7;
          goto LABEL_31;
        }
LABEL_28:
        if ( (UserWaitTime_high & 0x1E) != 0 )
        {
          v24 = 5;
          goto LABEL_31;
        }
        if ( Process->Header.WaitListHead.Flink != Process->ProfileListHead.Flink )
        {
          v24 = 6;
          goto LABEL_31;
        }
LABEL_73:
        _disable();
        *(_DWORD *)&Process[73].Spare3[1] = 0;
        HIDWORD(Process[75].Padding[0]) = 0;
        Process = (_KPROCESS *)KeGetCurrentPrcb();
        v13 = (__int64)Process[80].ThreadListHead.Blink;
        if ( v13 )
        {
          _m_prefetchw((const void *)v13);
          v37 = *(_DWORD *)v13;
          do
          {
            v38 = v37;
            v37 = _InterlockedCompareExchange((volatile signed __int32 *)v13, v37 & 0xFFDFFFFF, v37);
          }
          while ( v38 != v37 );
          if ( (v37 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)Process);
        }
        _enable();
        v24 = 0;
LABEL_31:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v24, v21, v22);
        if ( !v24 )
          goto LABEL_34;
LABEL_85:
        MiDecommitPagesTail((__int64)v41);
      }
LABEL_34:
      if ( v49 > v50 )
        goto LABEL_35;
    }
    v17 = 0;
    goto LABEL_16;
  }
LABEL_35:
  MiDecommitPagesTail((__int64)v41);
  return v53;
}
