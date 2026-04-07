/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x1800CE04C
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CDEA0 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        void *a2,
        struct CVisual *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, void *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 Buffer[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = (__int64)a3;
  if ( !RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), Buffer) )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL);
    Buffer[0] = (__int64)v6;
    if ( v6 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[1])(v6);
    v26 = 0LL;
    v7 = **v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    v8 = v7(v6, &GUID_f9230343_ced0_4699_866e_302f1e3c602b, &v26);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v8);
LABEL_16:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Buffer);
      return v9;
    }
    v24 = 0LL;
    v10 = v26;
    v11 = *(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v26 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    v12 = v11(v10, a2, &v24);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v12);
LABEL_15:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      goto LABEL_16;
    }
    v25 = 0LL;
    v13 = *((_QWORD *)this + 12);
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v15 = v14(v13, &v25);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 240LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      goto LABEL_15;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 72LL))(v25, v24);
    v9 = v18;
    if ( v18 < 0 )
    {
      v16 = (unsigned int)v18;
      v17 = 241LL;
      goto LABEL_14;
    }
    v22[0] = a3;
    v19 = v24;
    v24 = 0LL;
    v22[1] = v19;
    if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v22, 0x10u, 0LL) )
    {
      v9 = -2147024882;
      v16 = 2147942414LL;
      v17 = 246LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Buffer);
  }
  return 0LL;
}
