/*
 * XREFs of ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801BA300
 * Callers:
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801B8720 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x1801B9F30 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801BA258 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1801BBF00 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulation::_UpdateCaptureState(CManipulation *this, unsigned __int8 a2)
{
  if ( *((_DWORD *)this + 115) != 2 )
    *((_DWORD *)this + 115) = a2;
}
