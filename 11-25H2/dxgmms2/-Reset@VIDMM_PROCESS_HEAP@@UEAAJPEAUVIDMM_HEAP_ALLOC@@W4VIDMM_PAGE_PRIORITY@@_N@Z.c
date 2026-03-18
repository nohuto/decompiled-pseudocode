/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400A2100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1400A19A8 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400CDF2C (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        _QWORD *a1,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned int a3,
        char a4)
{
  __int64 *v4; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int AllocationInfo; // eax
  int v12; // r14d
  unsigned int v13; // ebx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v15; // eax
  __int64 v17; // r15
  _QWORD *v18; // rax
  void *v19; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+58h] [rbp-8h] BYREF
  int v23; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+38h] BYREF

  v4 = (__int64 *)a1[1];
  v19 = 0LL;
  v20 = 0LL;
  v24 = 0;
  v9 = *v4;
  v23 = 0;
  if ( PsGetCurrentProcess() != v9 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = a2;
    WdLogGlobalForLineNumber = 1311;
  }
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo((unsigned __int64)a1, a2, &v20, &v19, &v24, &v23);
  v12 = v23;
  v13 = AllocationInfo;
  if ( AllocationInfo < 0 )
    goto LABEL_8;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v15 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, unsigned int))VirtualMemoryInterface)(
          -1LL,
          &v19,
          0LL,
          &v20,
          0x80000,
          v24);
  v13 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 1326;
LABEL_8:
    if ( v13 == -1071775472 && (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    goto LABEL_11;
  }
  VidMmiSetPriorityForMemoryPages(v19, v20, a3);
  if ( a4 )
  {
    if ( v12 )
      goto LABEL_12;
    BaseAddress = v19;
    NumberOfBytesToUnlock = v20;
    v17 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v18[3] = BaseAddress;
      v18[4] = NumberOfBytesToUnlock;
      v18[5] = v17;
      WdLogGlobalForLineNumber = 1350;
    }
  }
LABEL_11:
  if ( v12 )
LABEL_12:
    (*(void (__fastcall **)(_QWORD *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*a1 + 64LL))(a1, a2);
  return v13;
}
