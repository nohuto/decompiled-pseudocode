/*
 * XREFs of ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x14009A658
 * Callers:
 *     ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x14009A690 (-Release@CCompositionFrameCollection@@UEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x14002EC40 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 */

CCompositionFrameCollection *__fastcall CCompositionFrameCollection::`scalar deleting destructor'(
        CCompositionFrameCollection *this)
{
  *(_QWORD *)this = &CCompositionFrameCollection::`vftable';
  CCompositionFrameCollection::DiscardAllCompositionFrames(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
