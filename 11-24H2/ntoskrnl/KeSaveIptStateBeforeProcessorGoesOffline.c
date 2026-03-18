/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0514
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x1404BD15C (KiSaveIptState.c)
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
