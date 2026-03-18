/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x14009D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x14001F678 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::`scalar deleting destructor'(CCompositionBuffer *this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
