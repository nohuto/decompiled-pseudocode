/*
 * XREFs of ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1802C9070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CD3DResourceManager::UnusableNotification(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  CD3DResourceManager::DestroyResource(this, a2);
}
