/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0578
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x1404BE0A4 (KiSaveIptState.c)
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
