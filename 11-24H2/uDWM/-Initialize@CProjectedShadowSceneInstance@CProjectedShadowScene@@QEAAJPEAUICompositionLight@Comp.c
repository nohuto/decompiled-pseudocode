/*
 * XREFs of ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800482B0
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180047D64 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800CAED8 (-ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Compositio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // rbx
  __int64 *v7; // r14
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64); // rdi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[1])(v6);
  v7 = (__int64 *)(a1 + 88);
  v8 = **v6;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 88));
  v9 = v8(v6, &GUID_a2e6330e_8a60_5a38_bb85_b44ea901677c, a1 + 88);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *v7;
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v7 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 96));
    v14 = v13(v12, a1 + 96);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 80LL))(*(_QWORD *)(a1 + 96), a2);
      v15 = v14;
      if ( v14 >= 0 )
      {
        v14 = WindowsInternal::UI::ConfigureProjectedShadowScene(*(_QWORD *)(a1 + 96), a3);
        v15 = v14;
        if ( v14 >= 0 )
        {
          v15 = 0;
          goto LABEL_15;
        }
        v16 = 206LL;
      }
      else
      {
        v16 = 205LL;
      }
    }
    else
    {
      v16 = 204LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v14,
      v17);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    return v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v9,
    v17);
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
  return v10;
}
