/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18009DA74
 * Callers:
 *     _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x18005D5C0 (_lambda_31685d6d76905a19580e009ac071d915_--_lambda_invoker_cdecl_.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180086420 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18009D5A0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800CB490 (-FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800DD3A0 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010A2D8 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010A304 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x18010A330 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010AFD0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ??_GAlpcSection@@UEAAPEAXI@Z @ 0x18010B010 (--_GAlpcSection@@UEAAPEAXI@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010B048 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x18010B070 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010B0B0 (--_ESipcServer@@EEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x18010BA6C (-Clear@-$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18010E494 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18010E560 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
