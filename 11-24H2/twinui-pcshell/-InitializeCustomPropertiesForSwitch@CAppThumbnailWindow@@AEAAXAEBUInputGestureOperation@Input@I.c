/*
 * XREFs of ?InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x1804A8700
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804AB400 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?SetHost@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180151E0C (-SetHost@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@Ta.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18049F1B4 (-Position@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?InsertBoolean@?$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@_N@Z @ 0x1804A88D8 (-InsertBoolean@-$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet.c)
 */

void __fastcall CAppThumbnailWindow::InitializeCustomPropertiesForSwitch(
        CAppThumbnailWindow *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2)
{
  char v2; // bl
  __int64 *v4; // rdi
  __int64 v5; // r8
  __int64 v6[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+70h] [rbp+10h] BYREF

  v2 = *((_BYTE *)this + 171);
  v4 = (__int64 *)this;
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"isDraggingRight");
  v4 += 49;
  LOBYTE(v5) = v2;
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet2<winrt::Windows::UI::Composition::CompositionPropertySet>::InsertBoolean(
    v4,
    v6,
    v5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"opacityState");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"scaleFactorSecondApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"scaleFactorFirstApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"flickScaleFactorSecondApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"flickScaleFactorFirstApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"flickScaleFactorRemainingApps");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
    (__int64 *)a2,
    &v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"touchPosAtDirectionChange");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
    (__int64 *)a2,
    &v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"touchPosAtDirectionChangeThreshold");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"scaleFactorAtDirectionChangeThresholdSecondApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"scaleFactorAtDirectionChangeThresholdFirstApp");
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
    v4,
    v6);
}
