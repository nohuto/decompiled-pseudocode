/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x1404B49F4
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404B9AF8 (KiRestoreIptState.c)
 */

struct _KPRCB *KeRestoreIptStateAfterProcessorComesOnline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiRestoreIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
