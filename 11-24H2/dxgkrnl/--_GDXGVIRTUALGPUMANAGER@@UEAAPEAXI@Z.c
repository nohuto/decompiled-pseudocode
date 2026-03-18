/*
 * XREFs of ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x14007A950
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x14020D08C (-DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

DXGVIRTUALGPUMANAGER *__fastcall DXGVIRTUALGPUMANAGER::`scalar deleting destructor'(
        DXGVIRTUALGPUMANAGER *this,
        char a2)
{
  *(_QWORD *)this = &DXGVIRTUALGPUMANAGER::`vftable';
  DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
