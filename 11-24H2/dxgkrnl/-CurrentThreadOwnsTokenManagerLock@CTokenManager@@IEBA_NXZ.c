/*
 * XREFs of ?CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ @ 0x14009A2D0
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14009A000 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTokenManager::CurrentThreadOwnsTokenManagerLock(struct _KTHREAD **this)
{
  return KeGetCurrentThread() == this[13];
}
