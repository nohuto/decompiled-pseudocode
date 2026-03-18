/*
 * XREFs of std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___ @ 0x180269D54
 * Callers:
 *     _anonymous_namespace_::State::_State @ 0x180269E5C (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x180269DA8 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 */

void __fastcall std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___(
        _QWORD *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    anonymous_namespace_::FramesReport::_FramesReport(*a1);
    operator delete(v1);
  }
}
