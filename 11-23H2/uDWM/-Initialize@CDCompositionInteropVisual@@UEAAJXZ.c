/*
 * XREFs of ?Initialize@CDCompositionInteropVisual@@UEAAJXZ @ 0x180032F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180036D24 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180038D00 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x18003A0D0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDCompositionInteropVisual::Initialize(CDCompositionInteropVisual *this)
{
  int v2; // eax
  int ProxyFromShared; // ebx
  __int64 v4; // rbx
  char *v5; // rsi
  CBaseObject *v6; // rcx
  __int64 v7; // r14
  char *v8; // rbx
  CBaseObject *v9; // rcx
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HANDLE, GUID *, char *); // rsi
  _QWORD *v16; // r14
  __int64 v17; // rcx
  int v18; // esi
  __int64 (__fastcall *v19)(__int64, HANDLE, GUID *, char *); // rsi
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  HANDLE v24; // rcx
  bool v25; // cc
  __int64 v26; // rdx
  HANDLE v27; // rcx
  bool v28; // cc
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-10h]
  int v31; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HANDLE v33; // [rsp+58h] [rbp+28h] BYREF
  HANDLE hObject; // [rsp+60h] [rbp+30h] BYREF

  v33 = 0LL;
  v2 = DCompositionCreateSharedVisualHandle(&v33);
  ProxyFromShared = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)v2,
      v30);
    v24 = v33;
    v25 = (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_28:
    if ( v25 )
      CloseHandle(v24);
    return (unsigned int)ProxyFromShared;
  }
  hObject = 0LL;
  ProxyFromShared = DCompositionCreateSharedVisualHandle(&hObject);
  if ( ProxyFromShared < 0 )
  {
    v26 = 27LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)ProxyFromShared,
      v30);
    v27 = hObject;
    v28 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_35:
    if ( v28 )
      CloseHandle(v27);
    v24 = v33;
    v25 = (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_28;
  }
  ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                      v33,
                      (char *)this + 16);
  if ( ProxyFromShared < 0 )
  {
    v26 = 30LL;
    goto LABEL_33;
  }
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v5 = (char *)this + 264;
  v6 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v6 )
  {
    *(_QWORD *)v5 = 0LL;
    CBaseObject::Release(v6);
  }
  ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(v4, hObject, (char *)this + 264);
  if ( ProxyFromShared < 0 )
  {
    v26 = 31LL;
    goto LABEL_33;
  }
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v8 = (char *)this + 272;
  v9 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v9 )
  {
    *(_QWORD *)v8 = 0LL;
    CBaseObject::Release(v9);
  }
  v10 = CCompositor::CreateProxy<CVisualProxy>(v7, (char *)this + 272);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)v10,
      v30);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v33);
    return v11;
  }
  if ( *(_QWORD *)v8 )
    v12 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 24LL);
  else
    v12 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)v5 + 16LL) + 16LL)
                                                           + 448LL))(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 16LL) + 16LL),
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v5 + 16LL) + 24LL),
          v12);
  ProxyFromShared = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualtargetproxy.cpp",
      (const char *)(unsigned int)v13,
      v30);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)ProxyFromShared,
      v31);
    v27 = hObject;
    v28 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_35;
  }
  v14 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v15 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, char *))(*(_QWORD *)v14 + 232LL);
  v16 = (_QWORD *)((char *)this + 248);
  v17 = *((_QWORD *)this + 31);
  if ( v17 )
  {
    *v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v15(v14, v33, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 248);
  if ( v18 < 0 )
  {
    v29 = 41LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)v18,
      v30);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v33);
    return (unsigned int)v18;
  }
  v19 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, char *))(*(_QWORD *)v14 + 232LL);
  v20 = *((_QWORD *)this + 32);
  if ( v20 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v18 = v19(v14, hObject, &GUID_e8de1639_4331_4b26_bc5f_6a321d347a85, (char *)this + 256);
  if ( v18 < 0 )
  {
    v29 = 42LL;
    goto LABEL_47;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v16 + 24LL))(*v16, *((_QWORD *)this + 32));
  v22 = v21;
  if ( v21 >= 0 )
  {
    ProxyFromShared = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
    if ( ProxyFromShared >= 0 )
    {
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v33);
      return 0LL;
    }
    v26 = 44LL;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
    (const char *)(unsigned int)v21,
    v30);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(v33);
  return v22;
}
