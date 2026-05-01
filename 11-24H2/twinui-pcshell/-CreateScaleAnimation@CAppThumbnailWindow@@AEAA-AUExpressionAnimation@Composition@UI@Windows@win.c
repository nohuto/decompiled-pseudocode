/*
 * XREFs of ?CreateScaleAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@AEBUhstring@6@@Z @ 0x1804A6A48
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804AB400 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A675C (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A9858 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x1804A9A94 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CAppThumbnailWindow::CreateScaleAnimation(__int64 a1, _QWORD *a2, __int64 *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v7[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v9; // [rsp+78h] [rbp+28h]
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF

  v9 = a2;
  v7[0] = *a3;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 **)(a1 + 384),
    a2,
    v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"operation");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v7,
    a1 + 464);
  v5 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v5 )
  {
    v10 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v10);
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v7,
    &v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a2;
}
