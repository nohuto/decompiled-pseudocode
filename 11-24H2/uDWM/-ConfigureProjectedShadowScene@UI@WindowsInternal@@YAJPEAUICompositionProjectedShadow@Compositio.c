/*
 * XREFs of ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800CAED8
 * Callers:
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800482B0 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::UI::ConfigureProjectedShadowScene(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2)
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = **a1;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v12);
  v6 = v4(a1, &GUID_e47220ba_196b_5514_98d5_a6b286fb3264, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 19LL;
LABEL_20:
    v9 = (unsigned int)v6;
    goto LABEL_21;
  }
  if ( !a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 24LL;
      goto LABEL_20;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 25LL;
      goto LABEL_20;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 26LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[14])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 27LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[12])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 28LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[7])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 29LL;
      goto LABEL_20;
    }
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 33LL;
      goto LABEL_20;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 34LL;
      goto LABEL_20;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 35LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[14])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 36LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[12])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 37LL;
      goto LABEL_20;
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[7])(a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 38LL;
      goto LABEL_20;
    }
LABEL_32:
    v7 = 0;
    goto LABEL_33;
  }
  v7 = -2147024809;
  v9 = 2147942487LL;
  v8 = 42LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\restricted\\shell\\inc\\ProjectedShadowSceneHelpers.h",
    (const char *)v9);
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v7;
}
