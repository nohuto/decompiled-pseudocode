/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x140188DB0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     RIMRemoveInputOfType @ 0x1400CA660 (RIMRemoveInputOfType.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this)
{
  __int64 v2; // rcx

  if ( isInputVirtualizationEnabled((__int64)this) && IsInputThread(v2) )
    CIVChannel::Uninitialize((CIVChannel *)(this + 158));
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    RIMRemoveInputOfType(this[1], 60);
}
