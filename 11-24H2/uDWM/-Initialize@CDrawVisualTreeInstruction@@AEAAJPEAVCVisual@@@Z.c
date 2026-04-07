/*
 * XREFs of ?Initialize@CDrawVisualTreeInstruction@@AEAAJPEAVCVisual@@@Z @ 0x18003F5CC
 * Callers:
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18003E5F4 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CDrawVisualTreeInstruction::Initialize(CDrawVisualTreeInstruction *this, struct CVisual *a2)
{
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  return 0LL;
}
