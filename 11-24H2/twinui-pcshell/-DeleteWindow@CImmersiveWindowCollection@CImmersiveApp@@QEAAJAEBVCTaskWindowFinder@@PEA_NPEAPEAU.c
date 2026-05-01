/*
 * XREFs of ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800A0A34
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180303320 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180033268 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180033338 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180033F04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800353D8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180035A40 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180035E24 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180037AAC (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800A042C (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1800A0C78 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800A2144 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18021F9B4 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18030600C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        bool *a3,
        struct ITaskWindow **a4)
{
  __int64 v8; // rbx
  int TaskWindow; // ebx
  unsigned __int64 v10; // r14
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  __int64 v12; // rax
  struct ITaskWindow *v13; // rcx
  struct IUnknown *v14; // rcx
  struct IUnknown *v16; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v18[42]; // [rsp+30h] [rbp-D0h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v8 = *((_QWORD *)this + 19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"DeleteWindow");
  v18[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  CImmersiveAppTelemetry::DeleteWindow::StartActivity(
    (CImmersiveAppTelemetry::DeleteWindow *)v18,
    *(const unsigned __int16 **)(v8 + 576));
  v16 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v16 = 0LL;
  TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(this, a2, &v17);
  v10 = v17;
  if ( TaskWindow >= 0 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(*((_QWORD *)this + 20) + 8 * v17);
    TaskWindow = (**v11)(v11, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v16);
  }
  if ( TaskWindow >= 0 )
  {
    if ( *((_QWORD *)this + 16)
      && (SHIsSameObject(v16, *((struct IUnknown **)this + 15))
       || !v10
       && *((_QWORD *)this + 21) > 1uLL
       && SHIsSameObject(*(struct IUnknown **)(*((_QWORD *)this + 20) + 8LL), *((struct IUnknown **)this + 15))) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, v10);
    ((void (__fastcall *)(struct IUnknown *, _QWORD))v16->lpVtbl[7].Release)(v16, 0LL);
    v12 = *((_QWORD *)this + 21);
    if ( !v10 )
    {
      *a3 = 1;
      *((_BYTE *)this + 192) = 0;
      if ( v12 )
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 20));
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, 0LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
        {
          CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(this, 0LL);
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
        }
        *((_DWORD *)this + 49) = 0;
      }
      CImmersiveApp::CImmersiveWindowCollection::HideFrame(this);
    }
    v13 = (struct ITaskWindow *)v16;
    if ( v16 )
    {
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->AddRef)(v16);
      v13 = (struct ITaskWindow *)v16;
    }
    *a4 = v13;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, TaskWindow);
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  }
  v18[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return (unsigned int)TaskWindow;
}
