/*
 * XREFs of ?Destroy@DXGK_DIRTY_BITPLANE@@QEAAXXZ @ 0x14007AD3C
 * Callers:
 *     ??1DXGK_GPUP_ALLOCATION_INFO@@QEAA@XZ @ 0x14007AD20 (--1DXGK_GPUP_ALLOCATION_INFO@@QEAA@XZ.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x140218B10 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGK_DIRTY_BITPLANE::Destroy(DXGK_DIRTY_BITPLANE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *(_DWORD *)this = 0;
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
}
