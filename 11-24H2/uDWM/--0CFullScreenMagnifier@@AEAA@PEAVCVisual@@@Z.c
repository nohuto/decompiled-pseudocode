/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x180085ED4
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180085E18 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct CVisual *a2)
{
  CMILRefCountBase *v2; // rdx
  __int64 v3; // r8

  CBaseObject::CBaseObject(this);
  *(_OWORD *)(v3 + 52) = xmmword_180107A90;
  *(_QWORD *)v3 = &CFullScreenMagnifier::`vftable';
  *(_QWORD *)(v3 + 24) = 0x3FF0000000000000LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 16) = v2;
  *(_OWORD *)(v3 + 152) = xmmword_180107A90;
  *(_OWORD *)(v3 + 68) = xmmword_180107AA0;
  *(_OWORD *)(v3 + 168) = xmmword_180107AA0;
  *(_OWORD *)(v3 + 84) = xmmword_180107AB0;
  *(_OWORD *)(v3 + 184) = xmmword_180107AB0;
  *(_OWORD *)(v3 + 100) = xmmword_180107AC0;
  *(_OWORD *)(v3 + 200) = xmmword_180107AC0;
  *(_OWORD *)(v3 + 116) = xmmword_180107AD0;
  *(_OWORD *)(v3 + 216) = xmmword_180107AD0;
  *(_OWORD *)(v3 + 132) = xmmword_180107AE0;
  *(_DWORD *)(v3 + 148) = 1065353216;
  *(_OWORD *)(v3 + 232) = xmmword_180107AE0;
  *(_DWORD *)(v3 + 248) = 1065353216;
  if ( v2 )
    CMILRefCountBase::AddRef(v2);
  return (CFullScreenMagnifier *)v3;
}
