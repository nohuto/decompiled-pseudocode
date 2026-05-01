/*
 * XREFs of ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x180401CA8
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804027C0 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180403228 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x180403870 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x180403C60 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180404820 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x180405430 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$6 @ 0x1806E7C29 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationViewChanged_--_1_.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$1 @ 0x1806E7CB3 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecutionDataForAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData_::_1_::dtor$1 @ 0x1806E7D4A (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateSnapSignalData_--_1_-.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged_::_1_::dtor$4 @ 0x1806E7DA8 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--WindowSnapStateCh_ea_1806E7DA8.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$0 @ 0x1806E7E71 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--ReportTitleChange_-.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged_::_1_::dtor$0 @ 0x1806E7FCF (_Windows--Internal--Shell--TaskFlow--DataEngine--UserPresenceListener--OnIdleStateChanged_--_1_-.c)
 * Callees:
 *     <none>
 */

void __fastcall ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker(ListenerTelemetrySignalTracker *this)
{
  if ( !*(_BYTE *)this )
  {
    if ( *((_BYTE *)this + 1) )
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    else
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_unknownFailureCounter);
  }
}
