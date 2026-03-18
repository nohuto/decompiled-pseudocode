/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_GPUP@@UEAAPEAXI@Z @ 0x14007A440
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU_GPUP *__fastcall DXGK_VIRTUAL_GPU_GPUP::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_GPUP *this,
        char a2)
{
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
