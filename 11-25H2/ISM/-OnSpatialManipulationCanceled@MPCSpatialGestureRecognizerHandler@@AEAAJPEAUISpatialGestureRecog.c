/*
 * XREFs of ?OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@3456@@Z @ 0x1800C5640
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C3CC0 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    *(_DWORD *)(v3 + 856) = 2;
  ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"PathCanceled");
  result = 0LL;
  *((_BYTE *)this + 172) = 0;
  return result;
}
