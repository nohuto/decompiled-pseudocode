/*
 * XREFs of ??1?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180064ADC
 * Callers:
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$4 @ 0x1801D0160 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$4.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$4 @ 0x1801D13BE (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$4.c)
 *     _LightDismissProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801D1B80 (_LightDismissProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$17 @ 0x1801D2634 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$17.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x1801D264D (_DWMInputRouter--DWMInputRouter_--_1_--dtor$18.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$19 @ 0x1801D2666 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$19.c)
 *     _ShellGesturesRecognizer::ShellGesturesRecognizer_::_1_::dtor$4 @ 0x1801D27D9 (_ShellGesturesRecognizer--ShellGesturesRecognizer_--_1_--dtor$4.c)
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$12 @ 0x1801D2AE0 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$12.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$1 @ 0x1801D39DE (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$1.c)
 *     _DelegatedInkCanvasProcessor::OnInput_::_1_::dtor$2 @ 0x1801D46F6 (_DelegatedInkCanvasProcessor--OnInput_--_1_--dtor$2.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$1 @ 0x1801D4B36 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$4 @ 0x1801D61BE (_LampArrayDevice--ProcessLampState_--_1_--dtor$4.c)
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$3 @ 0x1801D6E91 (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$3.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$0 @ 0x1801D78AD (_DragNDropProcessor--OnInput_--_1_--dtor$0.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$0 @ 0x1801D7CB0 (_EdgyProcessor--OnInputDrag_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
