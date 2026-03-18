/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914E4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400BBDF4 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x14001D0F0 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400A9D98 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1400BC304 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this)
{
  __int64 v2; // rcx
  struct _RTL_BALANCED_NODE *v3; // rcx
  struct _RTL_BALANCED_NODE *v4; // rcx
  __int64 v5; // rax
  VIDMM_DEVICE *v6; // rcx
  struct _RTL_BALANCED_NODE *v7; // rdx
  struct _RTL_BALANCED_NODE *p_Right; // rax
  ULONG_PTR ParentValue; // rbx
  unsigned __int64 v10; // rbx
  struct _RTL_BALANCED_NODE *v11; // rdx
  struct _RTL_BALANCED_NODE *v12; // rax
  ULONG_PTR v13; // rbx
  unsigned __int64 v14; // rbx
  char *v15; // rsi
  unsigned int i; // ebp
  VIDMM_PAGE_DIRECTORY **v17; // rbx
  __int64 v18; // rbx
  __int64 ProcessID; // rax
  __int64 v20; // rcx
  __int64 v21; // r8

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    v15 = (char *)this + 88;
    if ( (byte_140081242 & 0x40) != 0 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)v15 + 24LL);
      ProcessID = DXGPROCESS::GetProcessID(*(DXGPROCESS **)(v2 + 32));
      McTemplateK0ppp_EtwWriteTransfer(v20, &DestroyGpuVirtualAddressAllocator, v21, this, ProcessID, v18);
    }
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)v15 + 6944LL); ++i )
    {
      v17 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v17 && *v17 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v17, this, 0LL);
        *v17 = 0LL;
      }
    }
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v3->Children[0];
        if ( !v3->Children[0] )
          break;
        p_Right = v3;
LABEL_26:
        p_Right->Children[0] = 0LL;
        v3 = v7;
      }
      p_Right = (struct _RTL_BALANCED_NODE *)&v3->Right;
      v7 = v3->Children[1];
      if ( v7 )
        goto LABEL_26;
      ParentValue = v3->ParentValue;
      FreeVadAvl(v3, 0LL);
      v10 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v10 )
        break;
      v3 = (struct _RTL_BALANCED_NODE *)v10;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v4->Children[0];
        if ( !v4->Children[0] )
          break;
        v12 = v4;
LABEL_28:
        v12->Children[0] = 0LL;
        v4 = v11;
      }
      v12 = (struct _RTL_BALANCED_NODE *)&v4->Right;
      v11 = v4->Children[1];
      if ( v11 )
        goto LABEL_28;
      v13 = v4->ParentValue;
      FreeVadAvl(v4, 0LL);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v14;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 96) & 2) == 0 )
    {
      v6 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v6 )
        VIDMM_DEVICE::`scalar deleting destructor'(v6);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
