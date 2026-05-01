/*
 * XREFs of ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067DFEC
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800661EC (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1802A2504 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A2564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18067DADC (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForAllThemes(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3)
{
  unsigned int ContrastForParams; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rdx
  const wchar_t *v12; // r8
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // r9
  int v15; // eax
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, (__int64)a2);
  if ( ContrastForParams )
  {
    v9 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
           a2,
           *((unsigned __int16 *)this + 8));
    if ( v9 < 0 )
    {
      v10 = 210LL;
      goto LABEL_5;
    }
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    v8 = *(_QWORD *)a2;
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v9 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(v8 + 112))(
             a2,
             *((unsigned __int16 *)this + 8));
      if ( v9 < 0 )
      {
        v10 = 181LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *))(v8 + 136))(
             a2,
             L"unplated");
      if ( v9 < 0 )
      {
        v10 = 185LL;
        goto LABEL_5;
      }
      v9 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
             a2,
             *((unsigned __int16 *)this + 4));
      if ( v9 < 0 )
      {
        v10 = 186LL;
        goto LABEL_5;
      }
    }
    if ( *((_DWORD *)this + 11) )
    {
      v12 = L"light";
      if ( *((_DWORD *)this + 11) != 1 )
        v12 = L"dark";
      (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const wchar_t *))(*(_QWORD *)a2 + 144LL))(
        a2,
        L"Theme",
        v12);
    }
  }
  v9 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL))(
         a2,
         ContrastForParams);
  if ( v9 < 0 )
  {
    v10 = 213LL;
    goto LABEL_5;
  }
  v13 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v15 = v14(a2, v13);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
