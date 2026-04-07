/*
 * XREFs of ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180034D38
 * Callers:
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180034A98 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z @ 0x180034C44 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Composition@UI@Windows@@XZ @ 0x180034BF0 (-GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Compositio.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180034C10 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180035048 (-CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Compos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800F4BA0 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemBackdropVisual::SetState(__int64 a1, int a2, char a3, char a4)
{
  __int64 v6; // rbx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  struct Windows::UI::Composition::ICompositionEffectFactory *CrossfadeEffectFactory; // rax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  unsigned int v17; // edi
  int v19; // eax
  __int64 v20; // rax
  DWORD SysColor; // eax
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 176) = a3;
  v6 = 0LL;
  v25 = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_6;
      SysColor = GetSysColor(5);
      *(_BYTE *)(a1 + 184) = -1;
      *(_WORD *)(a1 + 185) = SysColor;
      *(_BYTE *)(a1 + 187) = BYTE2(SysColor);
      v25 = 0LL;
      v22 = CSystemBackdropVisual::CreateColorBrush(BYTE1(SysColor), *(unsigned int *)(a1 + 184), &v25);
      v12 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
          (const char *)(unsigned int)v22,
          v23);
LABEL_33:
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v25);
        return v12;
      }
      *(_DWORD *)(a1 + 180) = 3;
    }
    else
    {
      v9 = *(unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
      *(_DWORD *)(a1 + 184) = v9;
      v25 = 0LL;
      v11 = CSystemBackdropVisual::CreateColorBrush(v10, v9, &v25);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA7,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
          (const char *)(unsigned int)v11,
          v23);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        return v12;
      }
      *(_DWORD *)(a1 + 180) = 2;
    }
    v6 = v25;
  }
  else
  {
    if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
      AssertW(
        0LL,
        L"CDesktopManager::GetWindowList()->IsTransparencyAllowedBySystem()",
        L"CSystemBackdropVisual::SetState",
        L"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        0x99u);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
    v6 = v20;
    v25 = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    *(_BYTE *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 180) = 1;
  }
LABEL_6:
  if ( a4 && CDesktopManager::IsWindowAnimationEnabled() )
  {
    CrossfadeEffectFactory = CCompositionEffectCache::GetCrossfadeEffectFactory(*((CCompositionEffectCache **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 26));
    v14 = CrossFadeToNewBrush(*(_QWORD *)(a1 + 144), v6, CrossfadeEffectFactory, 250LL);
    v15 = v14;
    if ( v14 >= 0 )
      goto LABEL_9;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v14,
      v23);
    v12 = v15;
    goto LABEL_33;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 56LL))(*(_QWORD *)(a1 + 144), v6);
  v17 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v19,
      v23);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v17;
  }
LABEL_9:
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v16,
      v23);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v17;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
