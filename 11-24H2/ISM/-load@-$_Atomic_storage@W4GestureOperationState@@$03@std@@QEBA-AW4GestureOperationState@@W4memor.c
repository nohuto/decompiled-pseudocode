/*
 * XREFs of ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800959FC
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x180069BF8 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180095948 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x180095978 (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 *     ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x1800959C4 (-CheckGestureState@GestureHandler@@QEBA_NV-$initializer_list@$$CBW4GestureOperationState@@@std@@.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA3D0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ @ 0x1800CEACC (-GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4498 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E47A4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E5230 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E5B58 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FE340 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<enum GestureOperationState,4>::load(unsigned int *a1)
{
  return *a1;
}
