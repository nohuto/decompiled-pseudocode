/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x14027B9B0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B53C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x14027C1B8 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, char a2)
{
  struct _KTHREAD *v4; // r9
  unsigned int v5; // r8d
  int i; // r10d
  __int64 v7; // rcx

  BLTQUEUE::DisableHwVSyncWorker(this);
  v4 = *this;
  v5 = 0;
  for ( i = *((_DWORD *)this + 64); v5 < *(_DWORD *)v4; ++v5 )
  {
    if ( v5 != i )
    {
      v7 = *((_QWORD *)v4 + 1) + 2968LL * v5;
      if ( *(_QWORD *)(v7 + 648) )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 612));
    }
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    *this,
    8 - (unsigned int)(a2 != 0),
    *((unsigned int *)this + 64),
    10000000LL * (unsigned int)dword_14015DA0C);
}
