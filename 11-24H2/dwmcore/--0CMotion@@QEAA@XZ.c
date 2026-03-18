/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x1801E0BF8
 * Callers:
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801E0960 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801E0A00 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1801E0CD8 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ??0CSpringAccelerator@@QEAA@XZ @ 0x1801E0D28 (--0CSpringAccelerator@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  CSpringAccelerator *v2; // rax
  CSpringAccelerator *v3; // rdi
  __int64 v4; // rcx
  CScalarForce *v5; // rax
  CScalarForce *v6; // rdi
  __int64 v7; // rcx

  *(_QWORD *)this = &CMotion::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = (CSpringAccelerator *)operator new(0x28uLL);
  if ( v2 )
    v3 = CSpringAccelerator::CSpringAccelerator(v2);
  else
    v3 = 0LL;
  if ( *((CSpringAccelerator **)this + 2) != v3 )
  {
    if ( v3 )
      (**(void (__fastcall ***)(CSpringAccelerator *))v3)(v3);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (CScalarForce *)operator new(0x70uLL);
  if ( v5 )
    v6 = CScalarForce::CScalarForce(v5, *((struct IAccelerator **)this + 2));
  else
    v6 = 0LL;
  if ( *((CScalarForce **)this + 1) != v6 )
  {
    if ( v6 )
      (**(void (__fastcall ***)(CScalarForce *))v6)(v6);
    v7 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return this;
}
