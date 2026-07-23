/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404C9708
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x1404B82CC (KiSaveIptState.c)
 */

void KeSaveIptStateBeforeProcessorGoesOffline()
{
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    ExtendedState = KeGetCurrentPrcb()->ExtendedState;
    if ( ExtendedState )
      KiSaveIptState((unsigned __int64 *)((char *)&ExtendedState->LegacyState.ControlWord + (unsigned int)KeXStateLength));
  }
}
