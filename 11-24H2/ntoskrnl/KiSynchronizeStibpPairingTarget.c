/*
 * XREFs of KiSynchronizeStibpPairingTarget @ 0x1403F9830
 * Callers:
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 * Callees:
 *     <none>
 */

__int16 KiSynchronizeStibpPairingTarget()
{
  struct _KPRCB *CurrentPrcb; // r8
  _KPRCB *PairPrcb; // r9
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned int v3; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  PairPrcb = CurrentPrcb->PairPrcb;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
  {
    BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
    if ( (BpbKernelSpecCtrl & 3) == 0 )
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl | 2;
LABEL_4:
    LOWORD(v3) = CurrentPrcb->BpbCurrentSpecCtrl;
    if ( (v3 & 3) == 0 )
    {
      CurrentPrcb->BpbCurrentSpecCtrl = v3 | 2;
      v3 = (unsigned __int16)v3 | 2;
      __writemsr(0x48u, v3);
    }
    goto LABEL_6;
  }
  LOWORD(v3) = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( (v3 & 3) == 0 )
  {
    LOWORD(v3) = v3 | 2;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v3;
  }
  if ( (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
    goto LABEL_4;
LABEL_6:
  _InterlockedAnd16(&PairPrcb->PairRegister, 0xFFEEu);
  _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  return v3;
}
