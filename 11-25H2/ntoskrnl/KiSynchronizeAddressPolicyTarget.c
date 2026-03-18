/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x14048D320
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x14048D178 (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14028A690 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( *(_BYTE *)(Process + 352) == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy(1LL, Process);
  }
  return (int)CurrentThread;
}
