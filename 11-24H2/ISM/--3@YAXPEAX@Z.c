/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18009DC44
 * Callers:
 *     _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x18005D3D0 (_lambda_31685d6d76905a19580e009ac071d915_--_lambda_invoker_cdecl_.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062490 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180086720 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18009D770 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800CDB00 (-FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800E02DC (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010C1E8 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010C214 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x18010C240 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010CEE0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ??_GAlpcSection@@UEAAPEAXI@Z @ 0x18010CF20 (--_GAlpcSection@@UEAAPEAXI@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x18010CF80 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010CFC0 (--_ESipcServer@@EEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x18010D97C (-Clear@-$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1801103A4 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x180110470 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
