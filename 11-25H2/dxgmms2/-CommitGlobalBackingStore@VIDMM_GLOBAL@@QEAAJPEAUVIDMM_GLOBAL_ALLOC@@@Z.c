/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4B28
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x14004BF18 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x14008FDB0 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C68FC (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r13
  int v4; // edx
  int v5; // r14d
  VIDMM_GLOBAL *v6; // rbx
  _DWORD **v7; // r15
  _DWORD *v8; // rdi
  unsigned __int64 v9; // rax
  int v10; // edi
  PVOID *v11; // r12
  void *CurrentPartitionHandle; // rax
  PVOID v13; // rcx
  NTSTATUS inserted; // eax
  int v15; // edx
  bool v16; // zf
  int v17; // eax
  __int64 result; // rax
  PMDL PagesForMdl; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rcx
  void *v24; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  ADAPTER_RENDER *v28; // rcx
  _QWORD v29[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+58h] BYREF
  ULONG_PTR ViewSize; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 7);
  v5 = 0;
  v6 = this;
  if ( (v4 & 0x4000) == 0 )
  {
    v7 = (_DWORD **)((char *)a2 + 376);
    if ( (v4 & 0x80000) == 0 && (**v7 & 0x20008) == 0 )
    {
LABEL_18:
      *((_DWORD *)a2 + 8) |= 0x20u;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)v6 + 5029) + 8LL * (*((_DWORD *)a2 + 6) & 0x3F)) + 1616LL),
        *(_QWORD *)(v2 + 16));
      v17 = *((_DWORD *)a2 + 7);
      if ( (v17 & 0x800000) != 0 )
      {
        v27 = *((_QWORD *)a2 + 27);
        if ( v27 )
        {
          if ( (v17 & 0x1000000) == 0 )
          {
            v29[0] = *(_QWORD *)(*((_QWORD *)a2 + 47) + 48LL);
            v28 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
            v29[1] = v27;
            v5 = ADAPTER_RENDER::DdiSetAllocationBackingStore(
                   v28,
                   (const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *)v29);
          }
        }
      }
LABEL_19:
      result = (unsigned int)v5;
      *((_DWORD *)a2 + 8) ^= ((unsigned __int8)*((_DWORD *)a2 + 8) ^ (unsigned __int8)(*((_DWORD *)a2 + 7) >> 15)) & 8;
      return result;
    }
    v8 = *v7;
    v31 = 0LL;
    if ( (*v8 & 0x400000) != 0 )
    {
      ObfReferenceObject(*((PVOID *)a2 + 26));
    }
    else
    {
      v9 = *(_QWORD *)(v2 + 16);
      v31 = v9;
      v10 = ~(*v8 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v10 |= 0x80000u;
        v31 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v11 = (PVOID *)((char *)a2 + 208);
      CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
      v5 = MmCreateSection((char *)a2 + 208, 0LL, 0LL, &v31, 4, v10, CurrentPartitionHandle, 0LL);
      if ( v5 < 0 )
      {
        _InterlockedIncrement(&dword_140081804);
        WdLogSingleEntry4(6LL, a2, v31);
        WdLogGlobalForLineNumber = 27132;
        DxgkLogInternalTriageEvent(v26, 262145LL);
        v6 = this;
      }
      if ( (**v7 & 0x20000000) != 0 && *v11 )
      {
        ObfReferenceObject(*v11);
        v13 = *v11;
        Handle = 0LL;
        inserted = ObInsertObject(v13, 0LL, 0, 0, 0LL, &Handle);
        v5 = inserted;
        if ( inserted < 0 )
        {
          WdLogSingleEntry2(1LL, a2, inserted);
          v22 = 0x40000LL;
          WdLogGlobalForLineNumber = 27168;
          goto LABEL_27;
        }
        ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
      }
      else if ( v5 < 0 )
      {
LABEL_28:
        v23 = (void *)*((_QWORD *)a2 + 26);
        if ( v23 )
          ObfDereferenceObject(v23);
        goto LABEL_19;
      }
      v7 = (_DWORD **)((char *)a2 + 376);
    }
    v15 = *((_DWORD *)a2 + 7);
    if ( (v15 & 0x8000) != 0 )
    {
      v5 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
             *((VIDMM_PROCESS **)a2 + 48),
             *((_QWORD *)a2 + 26),
             *(_QWORD *)(v2 + 16),
             0,
             4u,
             (void **)a2 + 51,
             (unsigned __int64 *)a2 + 52,
             (void **)a2 + 49);
      if ( v5 < 0 )
      {
        _InterlockedIncrement(&dword_140081808);
        WdLogSingleEntry4(6LL, a2, *((_QWORD *)a2 + 26));
        WdLogGlobalForLineNumber = 27204;
LABEL_26:
        v22 = 262145LL;
LABEL_27:
        DxgkLogInternalTriageEvent(v21, v22);
        goto LABEL_28;
      }
      v16 = (*((_DWORD *)a2 + 7) & 0x800000) == 0;
    }
    else
    {
      if ( (**v7 & 0x20008) != 0 )
      {
LABEL_31:
        v24 = (void *)*((_QWORD *)a2 + 26);
        ViewSize = *(_QWORD *)(v2 + 16);
        v25 = MmMapViewInSystemSpace(v24, (PVOID *)a2 + 27, &ViewSize);
        v5 = v25;
        if ( v25 >= 0 )
        {
          *((_DWORD *)a2 + 7) |= 0x2000000u;
          goto LABEL_18;
        }
        _InterlockedIncrement(&dword_140081808);
        WdLogSingleEntry3(6LL, a2, *((_QWORD *)a2 + 26), v25);
        WdLogGlobalForLineNumber = 27232;
        goto LABEL_26;
      }
      v16 = (v15 & 0x800000) == 0;
    }
    if ( v16 )
      goto LABEL_18;
    goto LABEL_31;
  }
  if ( *((_QWORD *)a2 + 49)
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        0LL,
                        *(_QWORD *)(v2 + 16),
                        (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 47) & 4) != 0)),
                        4u),
        (*((_QWORD *)a2 + 49) = PagesForMdl) != 0LL) )
  {
    *((_DWORD *)a2 + 8) |= 0x20u;
    goto LABEL_18;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 27067;
  DxgkLogInternalTriageEvent(v20, 0x40000LL);
  return 3221225495LL;
}
