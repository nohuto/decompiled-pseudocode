/*
 * XREFs of ??1?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C6880
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$1 @ 0x1806CD584 (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_1806CD584.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x1806CD663 (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 *     _UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers_::_1_::dtor$0 @ 0x1806CD6B4 (_UndockedSearchAppExperienceManager--RegisterTouchKeyboardEventHandlers_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x1806DDDF7 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1806E5000 (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::~ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(a1);
}
