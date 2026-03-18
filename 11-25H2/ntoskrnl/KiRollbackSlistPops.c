/*
 * XREFs of KiRollbackSlistPops @ 0x1404C3540
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     PspGetBaseTrapFrame @ 0x140439370 (PspGetBaseTrapFrame.c)
 */

void KiRollbackSlistPops()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 IpiFrame; // rcx
  __int64 CurrentThread; // rcx
  __int64 BaseTrapFrame; // rax
  unsigned __int64 v4; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  IpiFrame = (__int64)CurrentPrcb->IpiFrame;
  if ( (*(_BYTE *)(IpiFrame + 368) & 1) != 0 )
  {
    KiCheckForSListAddress(IpiFrame);
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (*(_DWORD *)(CurrentThread + 116) & 0x400) == 0 )
    {
      BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread, 0LL);
      v4 = *(_QWORD *)(BaseTrapFrame + 360);
      if ( *(_WORD *)(BaseTrapFrame + 368) == 51
        && v4 > qword_140FC64C8
        && v4 <= qword_140FC64B8
        && !*(_BYTE *)(BaseTrapFrame + 43) )
      {
        KeInsertQueueDpc(&CurrentPrcb->SlistRollbackDpc, 0LL, 0LL);
      }
    }
  }
}
