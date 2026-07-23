/*
 * XREFs of KiSynchronizeSecurityDomainTarget @ 0x1405C6940
 * Callers:
 *     KeSynchronizeSecurityDomain @ 0x1404A1ABC (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *KiSynchronizeSecurityDomainTarget()
{
  struct _KTHREAD *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
  if ( (CurrentPrcb->PrcbPad12a[2] & 4) != 0 )
  {
    result = *(struct _KTHREAD **)&result->ApcState.Process[4].ProcessLock;
    if ( result != (struct _KTHREAD *)CurrentPrcb->TrappedSecurityDomain )
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  return result;
}
