/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400B7EF4
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914EC (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092750 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B1FC4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400B3E4C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140101738 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x140028550 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1400B6FF4 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _RTL_BALANCED_NODE *v5; // rcx
  struct _RTL_BALANCED_NODE *v6; // rcx
  __int64 v7; // rax
  VIDMM_DEVICE *v8; // rcx
  struct _RTL_BALANCED_NODE *v9; // rdx
  struct _RTL_BALANCED_NODE *p_Right; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v12; // rdi
  struct _RTL_BALANCED_NODE *v13; // rdx
  struct _RTL_BALANCED_NODE *v14; // rax
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdi
  char *v17; // rsi
  unsigned int i; // ebp
  VIDMM_PAGE_DIRECTORY **v19; // rdi

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    v17 = (char *)this + 88;
    if ( (byte_140081242 & 0x40) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL),
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL) + 80LL),
        *(_QWORD *)(*(_QWORD *)v17 + 24LL));
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)v17 + 6944LL); ++i )
    {
      v19 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v19 && *v19 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v19, this, 0LL);
        *v19 = 0LL;
      }
    }
  }
  v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5->Children[0];
        if ( !v5->Children[0] )
          break;
        p_Right = v5;
LABEL_26:
        p_Right->Children[0] = 0LL;
        v5 = v9;
      }
      p_Right = (struct _RTL_BALANCED_NODE *)&v5->Right;
      v9 = v5->Children[1];
      if ( v9 )
        goto LABEL_26;
      ParentValue = v5->ParentValue;
      FreeVadAvl(v5, 0LL);
      v12 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v5 = (struct _RTL_BALANCED_NODE *)v12;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v6 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = v6->Children[0];
        if ( !v6->Children[0] )
          break;
        v14 = v6;
LABEL_28:
        v14->Children[0] = 0LL;
        v6 = v13;
      }
      v14 = (struct _RTL_BALANCED_NODE *)&v6->Right;
      v13 = v6->Children[1];
      if ( v13 )
        goto LABEL_28;
      v15 = v6->ParentValue;
      FreeVadAvl(v6, 0LL);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v6 = (struct _RTL_BALANCED_NODE *)v16;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 96) & 2) == 0 )
    {
      v8 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v8 )
        VIDMM_DEVICE::`scalar deleting destructor'(v8);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
