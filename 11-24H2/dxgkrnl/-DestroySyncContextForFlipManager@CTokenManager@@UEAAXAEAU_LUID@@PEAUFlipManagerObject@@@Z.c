/*
 * XREFs of ?DestroySyncContextForFlipManager@CTokenManager@@UEAAXAEAU_LUID@@PEAUFlipManagerObject@@@Z @ 0x14009A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x14009A6BC (-DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA.c)
 */

void __fastcall CTokenManager::DestroySyncContextForFlipManager(
        CTokenManager *this,
        struct _LUID *a2,
        struct FlipManagerObject *a3)
{
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  CAdapterCollection::DestroySyncContextForFlipManager((CTokenManager *)((char *)this + 112), a2, a3, &v4);
  if ( v4 )
    *((_BYTE *)this + 92) = 1;
}
