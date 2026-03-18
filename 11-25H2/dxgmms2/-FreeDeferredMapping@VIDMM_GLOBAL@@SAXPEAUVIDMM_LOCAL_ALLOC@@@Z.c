/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010657C
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x140045BC0 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140039A08 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C0A60 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct VIDMM_LOCAL_ALLOC *a1)
{
  __int64 v2; // rsi
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v2 = *(_QWORD *)a1;
  if ( *((_DWORD *)a1 + 7) || *(_DWORD *)(v2 + 128) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 7LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x140106716LL);
  }
  v3 = **(_DWORD **)(v2 + 376);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 16, 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 28) & 0x80000) != 0 )
    {
      v4 = *((_QWORD *)a1 + 2);
      v5 = **((_QWORD **)a1 + 1);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v5, v4);
    }
    else if ( (v3 & 8) == 0 && (v3 & 0x10) == 0 && (v3 & 0x20) == 0 && *(_QWORD *)(v2 + 232) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 224) + 24LL))(*(_QWORD *)(v2 + 224));
      *(_QWORD *)(v2 + 232) = 0LL;
      *((_QWORD *)a1 + 2) = 0LL;
    }
    *((_BYTE *)a1 + 24) |= 2u;
    operator delete(a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 240), 0xFFFFFFFF) == 1 )
  {
    if ( (v3 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 7193;
      }
      MmUnmapViewInSystemSpace(*(PVOID *)(v2 + 216));
      VidMmDereferenceObjectAsync(*(PVOID *)(v2 + 208));
      *(_DWORD *)(v2 + 28) &= ~0x2000000u;
    }
    operator delete(*(void **)(v2 + 376));
    *(_DWORD *)(v2 + 24) |= 0x400000u;
    VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((VIDMM_GLOBAL_ALLOC *)v2);
  }
}
