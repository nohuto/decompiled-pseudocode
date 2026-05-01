/*
 * XREFs of ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x18022E6C4
 * Callers:
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180240440 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180240AC4 (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapLayoutOperation@TaskGroups@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x1802A0688 (-CreateInstance@-$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLa.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x18059271C (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGestures.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180594400 (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManag.c)
 *     ?CreateThumbnailFactoryForSnappedWindows@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@AEBURect@Foundation@Windows@3@@Z @ 0x1806A6FAC (-CreateThumbnailFactoryForSnappedWindows@-$consume_Windows_Internal_Shell_Multitasking_Desktop_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::get_abi<unsigned int const>(_DWORD *a1)
{
  if ( a1[2] )
    return *(_QWORD *)a1;
  else
    return 4LL;
}
