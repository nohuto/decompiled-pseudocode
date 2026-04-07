/*
 * XREFs of ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x1800A1D48
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1AA4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CAccentTransitionAnimatedVisual *__fastcall CAccentTransitionAnimatedVisual::CAccentTransitionAnimatedVisual(
        CAccentTransitionAnimatedVisual *this,
        struct CAccent *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int128 v6; // xmm1
  CAccentTransitionAnimatedVisual *v7; // r9

  CBaseObject::CBaseObject((CAccentTransitionAnimatedVisual *)((char *)this + 8));
  *(_DWORD *)(v3 + 32) = v2;
  *v4 = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  *(_QWORD *)v3 = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *(_OWORD *)(v3 + 40) = *(_OWORD *)(v5 + 536);
  v6 = *(_OWORD *)(v5 + 536);
  *(_QWORD *)(v3 + 24) = v5;
  *(_OWORD *)(v3 + 56) = v6;
  CMILRefCountBase::AddRef((CMILRefCountBase *)v5);
  return v7;
}
