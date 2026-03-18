/*
 * XREFs of ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1401D0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1401D0FDC (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 */

void __fastcall CInputQueueProp::Delete(CInputQueueProp *this)
{
  CInputQueueProp::InvalidateInputQueues(this);
  Win32FreePool(this);
}
