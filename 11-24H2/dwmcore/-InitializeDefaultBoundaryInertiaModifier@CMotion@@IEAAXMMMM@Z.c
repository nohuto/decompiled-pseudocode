/*
 * XREFs of ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x1802AD8E8
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x18021CDA0 (-AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x18021FA4C (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMotion::InitializeDefaultBoundaryInertiaModifier(CMotion *this, float a2, float a3, float a4, int a5)
{
  int v5; // edx
  int v7; // xmm0_4
  int v8; // eax
  bool v9; // zf
  __int64 (__fastcall ***v10)(_QWORD); // rbx
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = a5;
  v8 = (*((float *)this + 22) >= a2) + 2;
  if ( a2 < *((float *)this + 15) )
    v8 = *((float *)this + 22) >= a2;
  v9 = *((_DWORD *)this + 9) == 2;
  *((_DWORD *)this + 24) = v8;
  LOBYTE(v5) = v9;
  CScalarForce::Initialize(*((_QWORD *)this + 1), v5, a2, a3, v7);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  v11 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 1);
  v10 = v11;
  *((_DWORD *)this + 8) = 1114636288;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
  v11 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v10;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v11);
}
