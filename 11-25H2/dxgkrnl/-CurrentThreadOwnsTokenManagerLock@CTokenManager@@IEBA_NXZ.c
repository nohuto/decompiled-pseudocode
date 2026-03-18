/*
 * XREFs of ?CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ @ 0x1400980A0
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x140097DD0 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTokenManager::CurrentThreadOwnsTokenManagerLock(struct _KTHREAD **this)
{
  return KeGetCurrentThread() == this[13];
}
