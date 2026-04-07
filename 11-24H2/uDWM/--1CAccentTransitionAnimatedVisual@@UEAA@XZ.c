/*
 * XREFs of ??1CAccentTransitionAnimatedVisual@@UEAA@XZ @ 0x1800A1DA8
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x1800A1E00 (--_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccentTransitionAnimatedVisual::~CAccentTransitionAnimatedVisual(
        CAccentTransitionAnimatedVisual *this)
{
  CBaseObject *v1; // rbx
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  v1 = (CAccentTransitionAnimatedVisual *)((char *)this + 8);
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  *(_QWORD *)v1 = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  if ( v2 )
    CBaseObject::Release(v2);
  CBaseObject::~CBaseObject(v1);
}
