/*
 * XREFs of ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180677EC0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_Kind(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ActivationKind *a2)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
