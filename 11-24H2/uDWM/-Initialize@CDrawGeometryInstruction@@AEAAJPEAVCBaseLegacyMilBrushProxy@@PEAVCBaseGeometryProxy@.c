/*
 * XREFs of ?Initialize@CDrawGeometryInstruction@@AEAAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@@Z @ 0x18001F8F0
 * Callers:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001F770 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawGeometryInstruction::Initialize(
        CDrawGeometryInstruction *this,
        struct CBaseLegacyMilBrushProxy *a2,
        struct CBaseGeometryProxy *a3)
{
  CBaseObject *v5; // rcx
  CBaseObject *v7; // rcx

  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v5 )
    CBaseObject::Release(v5);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v7 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  return 0LL;
}
