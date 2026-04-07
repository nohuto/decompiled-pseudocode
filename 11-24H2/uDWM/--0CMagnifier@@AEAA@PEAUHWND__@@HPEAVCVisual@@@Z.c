/*
 * XREFs of ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800C80BC
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C823C (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::CMagnifier(CMagnifier *this, HWND a2, __int64 a3, struct CVisual *a4)
{
  CMILRefCountBase *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  int v7; // r8d

  CBaseObject::CBaseObject(this);
  *(_QWORD *)(v5 + 56) = v6;
  *(_QWORD *)v5 = &CMagnifier::`vftable';
  *(_DWORD *)(v5 + 168) = 0;
  *(_BYTE *)(v5 + 64) = v7 != 0;
  *(_OWORD *)(v5 + 68) = g_MilColorTransfIdentity;
  *(_OWORD *)(v5 + 84) = xmmword_180107C10;
  *(_OWORD *)(v5 + 100) = xmmword_180107C20;
  *(_OWORD *)(v5 + 116) = xmmword_180107C30;
  *(_OWORD *)(v5 + 132) = xmmword_180107C40;
  *(_OWORD *)(v5 + 148) = xmmword_180107C50;
  *(_DWORD *)(v5 + 164) = 1065353216;
  *(_QWORD *)(v5 + 16) = v4;
  if ( v4 )
    CMILRefCountBase::AddRef(v4);
  return (CMagnifier *)v5;
}
