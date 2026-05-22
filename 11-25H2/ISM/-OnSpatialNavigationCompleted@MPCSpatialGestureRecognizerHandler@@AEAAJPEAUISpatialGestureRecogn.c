/*
 * XREFs of ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x1800C5A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C3CC0 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x1800C531C (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs *a3)
{
  const WCHAR *v4; // rcx

  *(_DWORD *)(*((_QWORD *)this + 13) + 856LL) = 2;
  if ( *((_DWORD *)this + 42) == 1 )
  {
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::GestureRecognizer_GestureDetected_(v4, L"ScrollCompleted");
    }
  }
  else
  {
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ZoomCompleted");
  }
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
