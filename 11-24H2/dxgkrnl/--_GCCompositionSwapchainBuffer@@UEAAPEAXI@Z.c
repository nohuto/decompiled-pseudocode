/*
 * XREFs of ??_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z @ 0x1400A16B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14001F5B8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CCompositionSwapchainBuffer *__fastcall CCompositionSwapchainBuffer::`scalar deleting destructor'(
        CCompositionSwapchainBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionSwapchainBuffer::`vftable';
  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
