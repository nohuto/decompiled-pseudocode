/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1400574A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A074 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x140057500 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CPoolBufferResource *v2; // rcx
  CFlipPropertySetBase *v3; // rcx
  char v4; // al
  char v5; // al

  v2 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CPoolBufferResource::RemoveUsageReference(v2);
    CFlipResource::Release(*((CFlipResource **)this + 6));
    *((_QWORD *)this + 6) = 0LL;
    *((_BYTE *)this + 64) |= 1u;
  }
  v3 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  v4 = *((_BYTE *)this + 64);
  if ( v3 )
  {
    CFlipPropertySetBase::Release(v3);
    v5 = *((_BYTE *)this + 64);
    *((_QWORD *)this + 5) = 0LL;
    v4 = v5 | 1;
  }
  *((_BYTE *)this + 64) = v4 & 0xFE;
  CFlipResourceState::Remove(this);
}
