/*
 * XREFs of ?InternalAddRef@?$ComPtr@VSharedData@CRoundedRectangleShape@@@WRL@Microsoft@@IEBAXXZ @ 0x1801CFD40
 * Callers:
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x18001CF80 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CRoundedRectangleShape::SharedData>::InternalAddRef(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  volatile signed __int32 *v5; // rcx
  void (*v6)(void); // rax
  int v7; // et0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *a1;
  if ( v5 )
  {
    v6 = **(void (***)(void))v5;
    if ( (char *)v6 == (char *)CMILRefCountImpl::AddReference )
    {
      v7 = _InterlockedAdd(v5, 1u);
      if ( (v7 < 0) ^ __OFSUB__(v6, CMILRefCountImpl::AddReference) | (v7 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          a5);
    }
    else
    {
      v6();
    }
  }
}
