/*
 * XREFs of ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180088E48
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180047FD0 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x180099828 (-DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180039C90 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectedShadowScene::PositionProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  int v12[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 *v14; // [rsp+40h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    v14 = 0LL;
    v1 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
           (__int64 *)&v14);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 133LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v1,
        v12[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      return v2;
    }
    v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    v6 = *v14;
    *(float *)v12 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 95);
    *(float *)&v12[1] = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v12[2] = 0;
    v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(v6 + 168))(v14, v12);
    v2 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v7,
        v12[0]);
      v8 = (__int64)v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v2;
    }
    v9 = 0;
    if ( v4 >= 0 )
      v9 = v4;
    v10 = 0;
    if ( v5 >= 0 )
      v10 = v5;
    v1 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v14 + 288))(
           v14,
           _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v9), (__m128)COERCE_UNSIGNED_INT((float)v10)).m128_u64[0]);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 141LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  return 0LL;
}
