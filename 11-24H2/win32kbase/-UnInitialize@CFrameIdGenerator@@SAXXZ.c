/*
 * XREFs of ?UnInitialize@CFrameIdGenerator@@SAXXZ @ 0x140212300
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1401486A0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CFrameIdGenerator::UnInitialize(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  v2 = *(_QWORD *)(UserSessionState + 16728);
  if ( v2 )
  {
    tagDomLock::LockUnInitialize((PVOID *)(v2 + 8));
    GreDeleteFastMutex((char *)v2);
    *(_QWORD *)(UserSessionState + 16728) = 0LL;
  }
}
