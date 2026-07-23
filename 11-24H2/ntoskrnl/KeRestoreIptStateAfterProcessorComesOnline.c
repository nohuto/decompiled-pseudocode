/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x1404AEB24
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404B3A68 (KiRestoreIptState.c)
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
