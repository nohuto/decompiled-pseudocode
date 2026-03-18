/*
 * XREFs of AddDmaBufferToPool @ 0x1400B8988
 * Callers:
 *     VidMmResizeBuffersInPool @ 0x140097C80 (VidMmResizeBuffersInPool.c)
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 *     VidMmInitDmaPool @ 0x1400B87A0 (VidMmInitDmaPool.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140038248 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140038544 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140038E5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140043CA8 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140092B04 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall AddDmaBufferToPool(_QWORD *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  int OneAllocation; // ebp
  unsigned int *v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_GLOBAL_ALLOC *v11; // r8
  struct VIDMM_ALLOC **v12; // rdi
  struct VIDMM_DEVICE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _VIDSCH_SYNC_OBJECT **v17; // r13
  VIDMM_GLOBAL *v18; // rcx
  int Resident; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rdi
  VIDMM_MAPPED_VA_RANGE *v28; // rax
  VIDMM_MAPPED_VA_RANGE *v29; // r15
  _QWORD *v30; // r8
  __int64 v31; // rdi
  struct _ERESOURCE *v32; // rcx
  unsigned int **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  struct VIDMM_ALLOC *v38; // rdx
  struct VIDMM_GLOBAL_ALLOC *v39; // r8
  void *v40; // rcx
  __int64 v41; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r8
  void *ContiguousNodeMemory; // rax
  struct _ERESOURCE *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  unsigned __int64 v55; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-50h] BYREF
  struct VIDMM_MULTI_ALLOC *v57; // [rsp+B0h] [rbp-48h] BYREF
  unsigned __int8 v58; // [rsp+100h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+108h] [rbp+10h]
  unsigned int v60; // [rsp+118h] [rbp+20h]

  v60 = a4;
  LODWORD(NumberOfBytes) = a2;
  v4 = a4;
  v5 = a2;
  LODWORD(v6) = a3;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 429;
  }
  if ( *((_DWORD *)a1 + 19) <= (unsigned int)dword_140081A18
    || (v51 = a1[1]) != 0
    && ((v52 = *(_QWORD *)(v51 + 24), *(_DWORD *)(v52 + 464) == 2)
     || (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 408LL) & 4) != 0)
    || qword_140081A00 <= qword_1400819F8 && qword_1400819D0 <= qword_1400819C8 && qword_1400819A0 <= qword_140081998 )
  {
    if ( (*((_BYTE *)a1 + 28) & 1) == 0 && !(_DWORD)v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 456;
      DxgkLogInternalTriageEvent(v41, 0x40000LL);
      return 3221225485LL;
    }
    v9 = (unsigned int *)operator new(160LL, 0x32326956u, 64LL);
    if ( !v9 )
    {
      _InterlockedAdd(&dword_1400816D0, 1u);
      WdLogSingleEntry0(6LL);
      v54 = 468;
      goto LABEL_71;
    }
    if ( !*((_DWORD *)a1 + 8) )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 2400LL);
      v9[18] = 2;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v5, 0LL, v47, 0LL, 1028, 0x80000000);
      *((_QWORD *)v9 + 8) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
      {
        _InterlockedAdd(&dword_1400816E4, 1u);
        WdLogSingleEntry0(6LL);
        v46 = 614;
        goto LABEL_52;
      }
      *((PHYSICAL_ADDRESS *)v9 + 10) = MmGetPhysicalAddress(ContiguousNodeMemory);
LABEL_15:
      if ( (_DWORD)v6 )
      {
        v20 = 3;
        if ( (unsigned int)v6 > 3 )
          v20 = v6;
        v6 = v20;
        v21 = 8LL * v20;
        if ( !is_mul_ok(v20, 8uLL) )
          v21 = -1LL;
        v22 = operator new[](v21, 0x33326956u, 64LL);
        *((_QWORD *)v9 + 12) = v22;
        if ( !v22 )
        {
          _InterlockedAdd(&dword_1400816F0, 1u);
          WdLogSingleEntry0(6LL);
          v46 = 641;
          goto LABEL_52;
        }
        v23 = 24 * v6;
        if ( !is_mul_ok(v6, 0x18uLL) )
          v23 = -1LL;
        v24 = operator new[](v23, 0x34326956u, 64LL);
        *((_QWORD *)v9 + 13) = v24;
        if ( !v24 )
        {
          _InterlockedAdd(&dword_1400816E8, 1u);
          WdLogSingleEntry0(6LL);
          v46 = 654;
          goto LABEL_52;
        }
      }
      if ( !v4 )
        goto LABEL_25;
      v43 = 24LL * v4;
      if ( !is_mul_ok(v4, 0x18uLL) )
        v43 = -1LL;
      v44 = operator new[](v43, 0x35326956u, 256LL);
      *((_QWORD *)v9 + 14) = v44;
      if ( v44 )
      {
LABEL_25:
        v25 = *((_DWORD *)a1 + 18);
        if ( !v25 || (v26 = operator new[](v25, 0x32336956u, 64LL), (*((_QWORD *)v9 + 15) = v26) != 0LL) )
        {
          v9[9] = v5;
          v9[10] = v6;
          v9[11] = v4;
          *((_QWORD *)v9 + 16) = a1;
          *((_QWORD *)v9 + 19) = 0LL;
          if ( (*((_DWORD *)a1 + 7) & 0x10) != 0 )
          {
            if ( *(_BYTE *)(a1[2] + 431LL) )
            {
              *((_QWORD *)v9 + 11) = *(_QWORD *)(*((_QWORD *)v9 + 7) + 160LL);
            }
            else
            {
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          *(VIDMM_PROCESS **)(a1[1] + 8LL),
                                          *(_DWORD *)(*(_QWORD *)(*a1 + 24LL) + 240LL),
                                          *((_DWORD *)a1 + 6));
              if ( !VirtualAddressAllocator )
              {
LABEL_53:
                OneAllocation = -1073741801;
                goto LABEL_39;
              }
              v28 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                               VirtualAddressAllocator,
                                               *((_QWORD **)v9 + 7),
                                               0LL,
                                               1,
                                               (unsigned int)v5,
                                               0LL,
                                               *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 2952LL),
                                               *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 2960LL),
                                               0x1000u,
                                               (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*(_DWORD *)(*a1 + 32LL) < 0x6000u) | 0x12LL),
                                               0LL,
                                               *((_DWORD *)a1 + 6),
                                               0LL,
                                               1,
                                               0);
              v29 = v28;
              if ( !v28 )
                goto LABEL_39;
              *((_QWORD *)v9 + 11) = *((_QWORD *)v28 + 13);
              OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                (VIDMM_GLOBAL *)*a1,
                                VirtualAddressAllocator,
                                *(struct VIDMM_PAGING_QUEUE **)(32LL * *((unsigned int *)a1 + 6)
                                                              + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 7) + 8LL) + 72LL)),
                                v28,
                                KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)*a1 + 8LL),
                                (const struct _DXGK_ADL *)&unk_14005AAC8,
                                0LL,
                                0LL);
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v29, VirtualAddressAllocator);
              if ( OneAllocation < 0 )
                goto LABEL_39;
            }
          }
          *((_DWORD *)a1 + 7) &= ~8u;
          *((_DWORD *)a1 + 28) += v9[9];
          v30 = (_QWORD *)a1[1];
          *((_DWORD *)a1 + 29) += 24 * v9[10];
          *((_DWORD *)a1 + 30) += 24 * v9[11];
          if ( v30 )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(v30[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v30 + 24LL) + 240LL));
            VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v31);
            *(_QWORD *)(v31 + 136) += v9[9];
            ++*(_DWORD *)(v31 + 128);
            *(_DWORD *)(v31 + 144) += 24 * v9[10];
            *(_DWORD *)(v31 + 148) += 24 * v9[11];
            VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v31);
          }
          _InterlockedAdd64(&qword_140081A00, v9[9]);
          _InterlockedAdd64(&qword_1400819D0, 24LL * v9[10]);
          _InterlockedAdd64(&qword_1400819A0, 24LL * v9[11]);
          v32 = Resource;
          ++*((_DWORD *)a1 + 19);
          ExAcquireResourceSharedLite(v32, 1u);
          v33 = (unsigned int **)(a1 + 10);
          v34 = a1[10];
          if ( *(_QWORD **)(v34 + 8) != a1 + 10 )
            __fastfail(3u);
          v49 = Resource;
          *(_QWORD *)v9 = v34;
          *((_QWORD *)v9 + 1) = v33;
          *(_QWORD *)(v34 + 8) = v9;
          *v33 = v9;
          ExReleaseResourceLite(v49);
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v50) + 24) = v9;
            WdLogGlobalForLineNumber = 818;
          }
          if ( (byte_140081241 & 1) != 0 )
            McTemplateK0pppxxxp_EtwWriteTransfer(
              v9[11],
              &EventAddDmaBuffer,
              v9[9],
              a1[2],
              *(_QWORD *)(*a1 + 24LL),
              v9,
              v9[9],
              v9[10],
              v9[11],
              *((_QWORD *)v9 + 6));
          return (unsigned int)OneAllocation;
        }
        _InterlockedAdd(&dword_14008174C, 1u);
        WdLogSingleEntry0(6LL);
        v46 = 683;
      }
      else
      {
        _InterlockedAdd(&dword_1400816EC, 1u);
        WdLogSingleEntry0(6LL);
        v46 = 670;
      }
LABEL_52:
      WdLogGlobalForLineNumber = v46;
      DxgkLogInternalTriageEvent(v45, 262145LL);
      goto LABEL_53;
    }
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(*a1, a1[1], *((unsigned int *)a1 + 6));
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1400816D8, 1u);
      WdLogSingleEntry0(6LL);
      v36 = 531;
    }
    else
    {
      v10 = (VIDMM_GLOBAL *)*a1;
      v11 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v9 + 6);
      v12 = (struct VIDMM_ALLOC **)(v9 + 14);
      v13 = (struct VIDMM_DEVICE *)a1[1];
      v58 = 0;
      OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(v10, v13, v11, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)v9 + 7, &v58);
      if ( OneAllocation >= 0 )
      {
        if ( (*((_DWORD *)*v12 + 7) & 3) != 0 )
        {
LABEL_14:
          LODWORD(v5) = NumberOfBytes;
          v4 = v60;
          goto LABEL_15;
        }
        if ( (*((_BYTE *)a1 + 28) & 1) != 0 )
        {
          VIDMM_GLOBAL::AllocatePagingBufferResources((VIDMM_GLOBAL *)*a1, *v12);
          goto LABEL_14;
        }
        v14 = *((_QWORD *)*v12 + 1);
        v15 = 32LL * *((unsigned int *)a1 + 6);
        v57 = *v12;
        v16 = *(_QWORD *)(v14 + 72);
        v55 = 0LL;
        v17 = *(struct _VIDSCH_SYNC_OBJECT ***)(v15 + v16);
        v18 = (VIDMM_GLOBAL *)*a1;
        v56 = 0LL;
        Resident = VIDMM_GLOBAL::MakeResident(v18, (struct VIDMM_PAGING_QUEUE *)v17, &v57, 1uLL, 3u, &v55, &v56);
        OneAllocation = Resident;
        if ( Resident == 259 )
        {
          VIDMM_GLOBAL::WaitForFence((VIDMM_GLOBAL *)*a1, v17[11], v55);
          OneAllocation = 0;
          goto LABEL_14;
        }
        if ( Resident >= 0 )
          goto LABEL_14;
        WdLogSingleEntry1(1LL, *v12);
        v37 = 0x40000LL;
        WdLogGlobalForLineNumber = 583;
LABEL_38:
        DxgkLogInternalTriageEvent(v35, v37);
LABEL_39:
        operator delete(*((void **)v9 + 15));
        operator delete(*((void **)v9 + 14));
        operator delete(*((void **)v9 + 13));
        operator delete(*((void **)v9 + 12));
        v38 = (struct VIDMM_ALLOC *)*((_QWORD *)v9 + 7);
        if ( v38 )
          VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)*a1, v38, 0LL, 0, 0, 0LL);
        v39 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v9 + 6);
        if ( v39 )
          VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)*a1, (struct VIDMM_DEVICE *)a1[1], v39, 1);
        v40 = (void *)*((_QWORD *)v9 + 8);
        if ( v40 )
          MmFreeContiguousMemorySpecifyCache(v40, (unsigned int)NumberOfBytes, (MEMORY_CACHING_TYPE)v9[18]);
        operator delete(v9);
        return (unsigned int)OneAllocation;
      }
      _InterlockedAdd(&dword_1400816DC, 1u);
      WdLogSingleEntry0(6LL);
      v36 = 551;
    }
    WdLogGlobalForLineNumber = v36;
    v37 = 262145LL;
    goto LABEL_38;
  }
  _InterlockedAdd(&dword_140081774, 1u);
  WdLogSingleEntry0(6LL);
  v54 = 445;
LABEL_71:
  WdLogGlobalForLineNumber = v54;
  DxgkLogInternalTriageEvent(v53, 262145LL);
  return 3221225495LL;
}
