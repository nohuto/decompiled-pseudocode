/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1400A2FC0
 * Callers:
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1400A2DD0 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x14010CBC4 (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  __int64 v1; // rbp
  PMDL *v2; // rdi
  PMDL v4; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v1 = *((_QWORD *)this + 70);
  v2 = (PMDL *)((char *)this + 552);
  if ( v1 )
  {
    v4 = *v2;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, PMDL))VirtualMemoryInterface + 6))(v1, v4);
    *((_QWORD *)this + 70) = 0LL;
  }
  if ( *v2 )
  {
    MmFreePagesFromMdl(*v2);
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
}
