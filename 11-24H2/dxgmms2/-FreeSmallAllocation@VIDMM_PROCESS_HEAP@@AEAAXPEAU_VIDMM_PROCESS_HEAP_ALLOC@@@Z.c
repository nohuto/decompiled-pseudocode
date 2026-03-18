/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400A2FE8
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A2C30 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400A2E64 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D09A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, char *Entry)
{
  struct _VIDMM_PROCESS_HEAP_BLOCK **v2; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  void *v7; // rcx
  struct _VIDMM_PROCESS_HEAP_BLOCK **v8; // r14
  struct _VIDMM_PROCESS_HEAP_BLOCK *v9; // rax
  struct _VIDMM_PROCESS_HEAP_BLOCK **v10; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v12; // r8
  _QWORD *v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = (struct _VIDMM_PROCESS_HEAP_BLOCK **)(Entry + 8);
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *((_QWORD *)Entry + 7);
    v5[4] = *((_QWORD *)Entry + 2);
    v5[5] = *v2;
    WdLogGlobalForLineNumber = 1022;
  }
  if ( Entry[72] )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 21LL, this, Entry, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  DXGFASTMUTEX::Acquire((VIDMM_PROCESS_HEAP *)((char *)this + 16));
  v7 = (void *)*((_QWORD *)Entry + 4);
  v8 = v2;
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)Entry + 4) = 0LL;
    v8 = (struct _VIDMM_PROCESS_HEAP_BLOCK **)(Entry + 8);
  }
  v9 = *v2;
  v10 = v8;
  if ( *((_DWORD *)v9 + 6) != 1 )
  {
    if ( !*((_QWORD *)v9 + 7) )
    {
      if ( !*((_QWORD *)v9 + 11) )
      {
        v18 = *((_QWORD *)Entry + 2) + *((_QWORD *)v9 + 4);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64 *, char *, __int64))VirtualMemoryInterface + 2))(
          -1LL,
          &v18,
          Entry + 56,
          0x4000LL);
        goto LABEL_13;
      }
      v10 = (struct _VIDMM_PROCESS_HEAP_BLOCK **)(Entry + 8);
    }
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, char *, __int64, __int64))(*(_QWORD *)this + 112LL))(
      this,
      Entry,
      4LL,
      v6);
  }
LABEL_13:
  VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)*v8 + 9), *((struct _VIDMM_POOL_BLOCK **)Entry + 3));
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)Entry + 7);
  v13 = (_QWORD *)*((_QWORD *)this + 1);
  v14 = *((_DWORD *)*v8 + 20);
  v15 = *((_QWORD *)Entry + 7);
  if ( v14 == 1 )
  {
    v13[20] -= v15;
  }
  else if ( v14 == 2 )
  {
    v13[22] -= v15;
  }
  else
  {
    v13[24] -= v15;
  }
  --*(_DWORD *)(*((_QWORD *)Entry + 1) + 24LL);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v16 = (__int64)*v10;
    if ( (unsigned int)(*((_DWORD *)*v10 + 20) - 3) > 3 )
      v17 = *(_QWORD *)(v16 + 32);
    else
      v17 = *(_QWORD *)(v16 + 88);
    McTemplateK0qxxx_EtwWriteTransfer(
      v16,
      &EventDestroyProcessAllocationDetails,
      v12,
      *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
      (char)Entry,
      *((_QWORD *)Entry + 7),
      v17);
    v10 = (struct _VIDMM_PROCESS_HEAP_BLOCK **)(Entry + 8);
  }
  if ( !*((_DWORD *)*v10 + 6) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = *v10;
      WdLogGlobalForLineNumber = 1135;
    }
    VIDMM_PROCESS_HEAP::FreeBlock(this, *v10);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), Entry);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 2);
}
