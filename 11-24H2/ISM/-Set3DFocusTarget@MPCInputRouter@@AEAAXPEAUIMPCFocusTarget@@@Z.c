/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800FE8F8
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FE9E4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FECE4 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800BB174 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800FDFAC (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800FEADC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCFocusTarget *a2)
{
  struct IMPCFocusTarget **v4; // rbx
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  struct IMPCFocusTarget *v7; // rsi
  struct IMPCFocusTarget *v8; // rbp
  ISMTracing *v9; // rcx
  struct IMPCFocusTarget *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct IMPCFocusTarget **)((char *)this + 648);
  if ( *((struct IMPCFocusTarget **)this + 81) != a2 )
  {
    v5 = (struct IMPCFocusTarget **)((char *)this + 656);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 82, (_QWORD *)this + 81);
    if ( *v4 != a2 )
    {
      v10 = a2;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v10);
      v10 = *v4;
      *v4 = a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(Instance, *v5, *v4);
    MPCInputRouter::Update3DFocusWNF(this);
    v7 = *v4;
    v8 = *v5;
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_Set3DFocusTarget_(v9, v8, v7);
    }
  }
  if ( *v4
    && *((_BYTE *)this + 744)
    && *((_QWORD *)this + 94) == (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)*v4 + 56LL))(*v4) )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 80, v4);
  }
}
