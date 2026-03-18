/*
 * XREFs of ?WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ @ 0x180139388
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801390F0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::WakeMTForMidmanipulationUpdateIfNecessary(CManipulationManager *this)
{
  if ( dword_180405170 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
}
