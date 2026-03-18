/*
 * XREFs of ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1403D75F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x14002920C (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 */

void __fastcall DxgkCddPushWorkerThreadOfOwner(DXGADAPTER *a1, DXGADAPTER *a2, struct _ETHREAD *a3)
{
  if ( a1 )
    DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a1, a3);
  if ( a2 )
  {
    if ( a1 != a2 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a2, a3);
  }
}
