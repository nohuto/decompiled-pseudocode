/*
 * XREFs of ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x140006DEC
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E2E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___ @ 0x1400563E4 (wil--details--lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___--_lambda_call__lambda_41bc.c)
 * Callees:
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x1400071DC (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

void __fastcall CConnectionInstance::RemoveConnections(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        unsigned __int64 a3)
{
  if ( *((_DWORD *)this + 1) )
  {
    *((_DWORD *)this + 1) = 0;
    if ( *((_DWORD *)this + 4) )
    {
      if ( *((_DWORD *)this + 4) == 1 )
        CConnectionInstance::RemoveCaptureConnection(this, a2, a3);
    }
    else
    {
      CConnectionInstance::RemoveRenderConnection(this, a2, a3);
    }
  }
}
