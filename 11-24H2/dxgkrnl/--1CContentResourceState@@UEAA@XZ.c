/*
 * XREFs of ??1CContentResourceState@@UEAA@XZ @ 0x140054024
 * Callers:
 *     ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x140053FE0 (--_ECContentResourceState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1400195A8 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1400540DC (--1CFlipResourceState@@MEAA@XZ.c)
 */

void __fastcall CContentResourceState::~CContentResourceState(CContentResourceState *this)
{
  CFlipPropertySetBase *v2; // rcx
  CPoolBufferResource *v3; // rcx

  *(_QWORD *)this = &CContentResourceState::`vftable';
  v2 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CFlipPropertySetBase::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
    *((_BYTE *)this + 64) |= 1u;
  }
  v3 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CPoolBufferResource::RemoveUsageReference(v3);
    CFlipResource::Release(*((CFlipResource **)this + 6));
    *((_QWORD *)this + 6) = 0LL;
    *((_BYTE *)this + 64) |= 1u;
  }
  CFlipResourceState::~CFlipResourceState(this);
}
