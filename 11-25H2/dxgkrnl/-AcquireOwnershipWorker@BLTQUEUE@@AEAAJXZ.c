/*
 * XREFs of ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14027A11C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

__int64 __fastcall BLTQUEUE::AcquireOwnershipWorker(BLTQUEUE *this)
{
  KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 78) + 40LL) + 56LL));
  *((_DWORD *)this + 250) |= 1u;
  *((_BYTE *)this + 600) = 0;
  BLTQUEUE::FinishCommand(this, 0);
  return 0LL;
}
