/*
 * XREFs of ?Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z @ 0x1800740D0
 * Callers:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001F698 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CPushTransformInstruction::Initialize(
        CPushTransformInstruction *this,
        struct CBaseTransformProxy *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  return 0LL;
}
