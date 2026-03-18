/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x140148598
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1401486A0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CleanupDomainLocks(__int64 a1)
{
  __int64 v1; // rbx

  v1 = W32GetUserSessionState(a1) + 42336;
  tagDomLock::LockUnInitialize((tagDomLock *)v1);
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 8));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 16));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 32));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 40));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 48));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 56));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 64));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 72));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 80));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 88));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 96));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 104));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 112));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 128));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 120));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 136));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 144));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 152));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 160));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 168));
  tagDomLock::LockUnInitialize((tagDomLock *)(v1 + 176));
}
