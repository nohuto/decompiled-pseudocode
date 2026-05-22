/*
 * XREFs of ??1?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006469C
 * Callers:
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$4 @ 0x1801C8CD0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$4.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$4 @ 0x1801C9F1E (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x1801CA636 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$18.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$19 @ 0x1801CA64F (_DWMInputRouter--DWMInputRouter_--_1_--dtor$19.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x1801CA668 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _LightDismissProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801CACD0 (_LightDismissProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _ShellGesturesRecognizer::ShellGesturesRecognizer_::_1_::dtor$4 @ 0x1801CB339 (_ShellGesturesRecognizer--ShellGesturesRecognizer_--_1_--dtor$4.c)
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$12 @ 0x1801CB640 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$12.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$1 @ 0x1801CC729 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$1.c)
 *     _DelegatedInkCanvasProcessor::OnInput_::_1_::dtor$2 @ 0x1801CD453 (_DelegatedInkCanvasProcessor--OnInput_--_1_--dtor$2.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$1 @ 0x1801CD893 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$3 @ 0x1801CEAFF (_LampArrayDevice--ProcessLampState_--_1_--dtor$3.c)
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$3 @ 0x1801CF61C (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$3.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$0 @ 0x1801D0065 (_DragNDropProcessor--OnInput_--_1_--dtor$0.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$0 @ 0x1801D0468 (_EdgyProcessor--OnInputDrag_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::~vector<Microsoft::BamoImpl::BamoPrincipalImpl *>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
