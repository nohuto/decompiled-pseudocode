/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x1404876D0
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x140487534 (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 */

int __fastcall KiSynchronizeAddressPolicyTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( *(_BYTE *)(Process + 352) == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy(1LL, Process, a3, a4);
  }
  return (int)CurrentThread;
}
