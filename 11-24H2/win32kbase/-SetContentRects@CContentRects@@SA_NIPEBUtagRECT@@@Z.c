/*
 * XREFs of ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4
 * Callers:
 *     NtUserSetSystemContentRects @ 0x1401BDBD0 (NtUserSetSystemContentRects.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x1401587A0 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1401A96C8 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x140218818 (-BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ.c)
 */

bool __fastcall CContentRects::SetContentRects(__int64 a1, const struct tagRECT *a2)
{
  unsigned int v3; // ebp
  CPushLock *Instance; // rax
  bool v5; // bl
  CPushLock *v6; // rdi
  __int64 v7; // rcx
  CContentRects *v8; // rax
  IVContentRectsSync *v9; // rcx

  v3 = a1;
  Instance = CContentRects::GetInstance(a1);
  v5 = 0;
  v6 = Instance;
  if ( Instance )
  {
    CPushLock::AcquireLockExclusive(Instance);
    v8 = CContentRects::GetInstance(v7);
    v5 = CContentRects::Set(v8, v3, a2);
    CPushLock::ReleaseLock(v6);
    IVContentRectsSync::BroadcastUpdateToAllContainers(v9);
  }
  return v5;
}
