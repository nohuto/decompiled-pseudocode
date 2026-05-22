/*
 * XREFs of ?OnSpatialManipulationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@3456@@Z @ 0x1800C3840
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C1E8C (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *a3)
{
  __int64 result; // rax

  *(_DWORD *)(*((_QWORD *)this + 13) + 856LL) = 2;
  ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"PathCompleted");
  result = 0LL;
  *((_BYTE *)this + 172) = 0;
  return result;
}
