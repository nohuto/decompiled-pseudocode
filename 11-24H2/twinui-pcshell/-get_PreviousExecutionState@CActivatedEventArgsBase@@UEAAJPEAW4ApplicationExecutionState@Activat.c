/*
 * XREFs of ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180677F10
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_PreviousExecutionState(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ApplicationExecutionState *a2)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  *(_DWORD *)a2 = *((_DWORD *)this + 19);
  return 0LL;
}
