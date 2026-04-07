/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800B77A0
 * Callers:
 *     ?CreateCursorVisual@CWindowList@@QEAAJXZ @ 0x1800EEC24 (-CreateCursorVisual@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??0CVisualProxy@@QEAA@XZ @ 0x1800259D8 (--0CVisualProxy@@QEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ?Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800B791C (-Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z @ 0x1800B798C (-SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCursorVisual::Create(struct IDwmChannel **a1, unsigned __int64 a2, struct CCursorVisual **a3)
{
  CMILRefCountBase *v6; // rax
  CMILRefCountBase *v7; // rbx
  CCursorVisualProxy *v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  CBaseObject *v13; // rax
  CVisual *v14; // rdi
  int v16[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v18; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CMILRefCountBase *)DefaultHeap::AllocClear(0x20uLL);
  v7 = v6;
  v18 = v6;
  if ( !v6 )
  {
    *(_QWORD *)v16 = 0LL;
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 24LL;
    goto LABEL_8;
  }
  *(_OWORD *)v6 = 0LL;
  *((_OWORD *)v6 + 1) = 0LL;
  CVisualProxy::CVisualProxy(v6);
  *(_QWORD *)v7 = &CRedirectVisualProxy::`vftable';
  *(_QWORD *)v16 = v7;
  CMILRefCountBase::AddRef(v7);
  v9 = CCursorVisualProxy::Initialize(v8, a1[3]);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 25LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
      (const char *)v11);
    goto LABEL_9;
  }
  CCursorVisualProxy::SetCursorId(v7, a2);
  v13 = (CBaseObject *)DefaultHeap::AllocClear(0x90uLL);
  v14 = v13;
  v18 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, 0x90uLL);
    CVisual::CVisual(v14);
    *(_QWORD *)v14 = &CCursorVisual::`vftable';
    v18 = v14;
    CMILRefCountBase::AddRef(v14);
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v14 + 2) = v7;
    v18 = 0LL;
    *a3 = v14;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
    v10 = 0;
  }
  else
  {
    v18 = 0LL;
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
  }
LABEL_9:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v16);
  return v10;
}
