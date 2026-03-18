/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x14010D0D8
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010CD20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003C274 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004BCA0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  PMDL PagesForMdl; // rax
  PMDL v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int LogicalMemory; // edi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _MDL *v11; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v13; // eax
  void *v14; // rdx

  PagesForMdl = MmAllocatePagesForMdl(0LL, *(PHYSICAL_ADDRESS *)((char *)this + 176), 0LL, 0x10000uLL);
  *((_QWORD *)this + 38) = PagesForMdl;
  v3 = PagesForMdl;
  if ( PagesForMdl )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v8 = (*((__int64 (__fastcall **)(PMDL, _QWORD, __int64))VirtualMemoryInterface + 5))(v3, 0LL, 2LL);
    *((_QWORD *)this + 37) = v8;
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 3);
      if ( *(_BYTE *)(v9 + 40107) )
      {
        if ( *(_BYTE *)(v9 + 40108) )
        {
          LogicalMemory = SysMmAllocateLogicalMemory(
                            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v9 + 24) + 224LL),
                            0x10000LL,
                            *((const void **)this + 38),
                            (void **)this + 66);
          if ( LogicalMemory < 0 )
          {
            _InterlockedIncrement(&dword_140081768);
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 955;
            DxgkLogInternalTriageEvent(v10, 262145LL);
            goto LABEL_12;
          }
        }
        v11 = (struct _MDL *)*((_QWORD *)this + 38);
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 66), 0LL);
        v13 = SysMmMapIommuRange(
                *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
                LogicalAddress,
                v11,
                0);
        LogicalMemory = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v13);
          WdLogGlobalForLineNumber = 968;
          goto LABEL_12;
        }
      }
      return 0LL;
    }
    _InterlockedIncrement(&dword_140081768);
    WdLogSingleEntry0(6LL);
    v5 = 932;
  }
  else
  {
    _InterlockedIncrement(&dword_140081730);
    WdLogSingleEntry0(6LL);
    v5 = 917;
  }
  WdLogGlobalForLineNumber = v5;
  DxgkLogInternalTriageEvent(v4, 262145LL);
  LogicalMemory = -1073741801;
LABEL_12:
  v14 = (void *)*((_QWORD *)this + 66);
  if ( v14 )
  {
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL), v14);
    *((_QWORD *)this + 66) = 0LL;
  }
  return (unsigned int)LogicalMemory;
}
