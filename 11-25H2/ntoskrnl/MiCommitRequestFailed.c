/*
 * XREFs of MiCommitRequestFailed @ 0x140AA6F90
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationProcess @ 0x14072F85C (KeRequestTerminationProcess.c)
 *     MiLogCommitRequestFailed @ 0x140AA6FF0 (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  MiLogCommitRequestFailed(a1, a3, a4);
  if ( CurrentThread->ApcStateIndex != 1
    && (CurrentThread->MiscFlags & 0x400) == 0
    && (*(_DWORD *)(a1 + 500) & 0x100) != 0 )
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 1);
  }
}
