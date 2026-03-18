/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A3BA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1400A3228 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(VIDMM_PROCESS_HEAP *this, struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 *v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int AllocationInfo; // ebx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v9; // eax
  unsigned int v11; // [rsp+70h] [rbp+28h] BYREF
  int v12; // [rsp+78h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+80h] [rbp+38h] BYREF
  void *v14; // [rsp+88h] [rbp+40h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 1);
  v14 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v5 = *v2;
  v12 = 0;
  if ( PsGetCurrentProcess() != v5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6) + 24) = a2;
    WdLogGlobalForLineNumber = 1405;
  }
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo((unsigned __int64)this, a2, &v13, &v14, &v11, &v12);
  if ( AllocationInfo >= 0 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v9 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, unsigned int))VirtualMemoryInterface)(
           -1LL,
           &v14,
           0LL,
           &v13,
           0x1000000,
           v11);
    AllocationInfo = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(4LL, v9);
      WdLogGlobalForLineNumber = 1420;
    }
  }
  if ( AllocationInfo == -1071775472 && (byte_140081241 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  if ( v12 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct VIDMM_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
  return (unsigned int)AllocationInfo;
}
