/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BF898
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400FF030 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x140090500 (VidMmAllocateVirtualMemoryFromPartition.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400BFB9C (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400BFC24 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400BFCF4 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5B58 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C67BC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C68DC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C6A4C (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(__int64 a1, unsigned int a2, char a3)
{
  int v3; // r14d
  unsigned __int64 v4; // r9
  unsigned int v7; // edi
  char v8; // r15
  struct VIDMM_RECYCLE_RANGE *v9; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v10; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v11; // r12
  VIDMM_RECYCLE_HEAP_MGR *v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // esi
  void *CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int VirtualMemoryFromPartition; // eax
  NTSTATUS v19; // eax
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+50h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-8h] BYREF
  bool v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+48h]

  v28 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 48);
  v23 = 0LL;
  v24 = v4;
  v7 = 0;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 4013;
  if ( *(_BYTE *)(a1 + 153) )
  {
    v7 = -1071775472;
LABEL_30:
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
LABEL_21:
    if ( !v3 )
      return v7;
LABEL_25:
    VIDMM_RECYCLE_MULTIRANGE::Unmap((VIDMM_RECYCLE_MULTIRANGE *)a1);
    return v7;
  }
  v8 = 0;
  v9 = *(struct VIDMM_RECYCLE_RANGE **)(a1 + 64);
  v10 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(a1 + 80) + 32LL);
  v11 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v10 + 1);
  do
  {
    if ( *((_DWORD *)v9 + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v10, v9);
      v27 = 0;
      v21 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v9, &v27);
      if ( v21 < 0 )
      {
        WdLogSingleEntry3(
          3LL,
          v9,
          v21,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL) + 8LL));
        WdLogGlobalForLineNumber = 4051;
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v11, v9);
        v8 = 1;
      }
    }
    if ( v9 == *(struct VIDMM_RECYCLE_RANGE **)(a1 + 72) )
      break;
    v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v9 + 15);
    v13 = *((_QWORD *)v9 + 9);
    v9 = 0LL;
    v10 = (VIDMM_RECYCLE_HEAP_MGR *)(v13 + 72);
    if ( v12 != v10 )
      v9 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v12 - 120);
  }
  while ( !v8 );
  v14 = **(_DWORD **)(*(_QWORD *)(a1 + 80) + 32LL);
  if ( (unsigned int)(v14 - 3) > 3 )
  {
    v23 = *(void **)(a1 + 48);
    v15 = 4;
    if ( v14 != 2 )
      v15 = 1028;
  }
  else
  {
    v15 = 1028;
    if ( v14 != 3 )
      v15 = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map((VIDMM_RECYCLE_MULTIRANGE *)a1, 0LL, v24, 1);
    if ( *(_BYTE *)(a1 + 152) && (v22 = *(_QWORD *)(a1 + 160)) != 0 )
    {
      v3 = 1;
      v23 = (void *)(*(_QWORD *)(a1 + 168) + v22);
    }
    else
    {
      v7 = -1071775472;
    }
    if ( (v7 & 0x80000000) != 0 )
    {
LABEL_20:
      if ( v7 != -1071775472 )
        goto LABEL_21;
      goto LABEL_30;
    }
  }
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle == (void *)-1LL )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    VirtualMemoryFromPartition = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface)(
                                   -1LL,
                                   &v23,
                                   0LL,
                                   &v24,
                                   0x80000,
                                   v15);
  }
  else
  {
    VirtualMemoryFromPartition = VidMmAllocateVirtualMemoryFromPartition(
                                   (__int64)CurrentPartitionHandle,
                                   (__int64)&v23,
                                   (__int64)&v24,
                                   0x80000u,
                                   v15);
  }
  v7 = VirtualMemoryFromPartition;
  if ( VirtualMemoryFromPartition < 0 )
  {
    WdLogSingleEntry1(2LL, VirtualMemoryFromPartition);
    WdLogGlobalForLineNumber = 4122;
    goto LABEL_20;
  }
  VidMmiSetPriorityForMemoryPages(v23, v24, v28);
  if ( !a3 )
    goto LABEL_21;
  if ( v3 )
    goto LABEL_25;
  BaseAddress = v23;
  NumberOfBytesToUnlock = v24;
  v19 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
  WdLogSingleEntry3(4LL, BaseAddress, NumberOfBytesToUnlock, v19);
  WdLogGlobalForLineNumber = 4147;
  return v7;
}
