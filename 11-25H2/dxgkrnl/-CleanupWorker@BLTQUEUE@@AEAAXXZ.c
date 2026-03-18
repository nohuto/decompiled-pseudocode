/*
 * XREFs of ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14027AC74
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14027BDBC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::CleanupWorker(BLTQUEUE *this)
{
  BLTQUEUE::ResetInternal(this);
  *((_BYTE *)this + 604) = 0;
  BLTQUEUE::FinishCommand(this, 0);
  PsTerminateSystemThread(0);
}
