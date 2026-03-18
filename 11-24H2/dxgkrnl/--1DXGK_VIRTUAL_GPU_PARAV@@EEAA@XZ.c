/*
 * XREFs of ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x140215DA0
 * Callers:
 *     ??_EDXGK_VIRTUAL_GPU_PARAV@@EEAAPEAXI@Z @ 0x14007AB50 (--_EDXGK_VIRTUAL_GPU_PARAV@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14007AB20 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(DXGK_VIRTUAL_GPU_PARAV *this)
{
  CDriverStoreCopy *v2; // rcx

  *(_QWORD *)this = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 2));
  v2 = (CDriverStoreCopy *)*((_QWORD *)this + 42);
  if ( v2 )
    CDriverStoreCopy::`scalar deleting destructor'(v2);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 29));
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
}
