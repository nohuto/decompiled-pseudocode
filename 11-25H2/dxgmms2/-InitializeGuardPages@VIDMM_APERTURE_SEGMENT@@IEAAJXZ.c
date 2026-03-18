/*
 * XREFs of ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x14010CBC4
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010CAB0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1400A2FC0 (-FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::InitializeGuardPages(PHYSICAL_ADDRESS *this)
{
  PMDL PagesForMdl; // rax
  PMDL v3; // rbx
  __int64 v4; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 i; // rcx

  PagesForMdl = MmAllocatePagesForMdl(0LL, this[22], 0LL, 0x1000uLL);
  this[69].QuadPart = (LONGLONG)PagesForMdl;
  v3 = PagesForMdl;
  if ( !PagesForMdl )
  {
    _InterlockedIncrement(&dword_140081734);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 228;
    DxgkLogInternalTriageEvent(v4, 262145LL);
    return 3221225495LL;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v7 = (*((__int64 (__fastcall **)(PMDL, _QWORD, __int64))VirtualMemoryInterface + 5))(v3, 0LL, 2LL);
  this[70].QuadPart = v7;
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_140081734);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 245;
    DxgkLogInternalTriageEvent(v8, 262145LL);
    VIDMM_APERTURE_SEGMENT::FreeGuardPages((VIDMM_APERTURE_SEGMENT *)this);
    return 3221225495LL;
  }
  this[71].QuadPart = *(_QWORD *)(this[69].QuadPart + 48) << 12;
  v9 = (_DWORD *)v7;
  for ( i = 1024LL; i; --i )
    *v9++ = 1685217607;
  return 0LL;
}
