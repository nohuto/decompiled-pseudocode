/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402829AC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSync@BLTQUEUE@@QEAAXXZ @ 0x1402821B4 (-DisableHwVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14028222C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1402835F4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, char a2)
{
  struct _KTHREAD *v4; // rdi
  unsigned int v5; // ebx
  int i; // ebp

  BLTQUEUE::DisableHwVSyncWorker(this);
  v4 = *this;
  v5 = 0;
  for ( i = *((_DWORD *)this + 64); v5 < *(_DWORD *)v4; ++v5 )
  {
    if ( v5 != i )
      BLTQUEUE::DisableHwVSync((BLTQUEUE *)(*((_QWORD *)v4 + 1) + 3040LL * v5));
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    *this,
    8 - (unsigned int)(a2 != 0),
    *((unsigned int *)this + 64),
    10000000LL * (unsigned int)dword_140160A14);
}
