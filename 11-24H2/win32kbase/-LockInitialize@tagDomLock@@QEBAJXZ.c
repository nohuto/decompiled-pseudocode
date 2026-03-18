/*
 * XREFs of ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x140139F20
 * Callers:
 *     ?InitDomainLocks@@YAJXZ @ 0x140139D40 (-InitDomainLocks@@YAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tagDomLock::LockInitialize(tagDomLock *this)
{
  struct _ERESOURCE *Pool2; // rax

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)this = Pool2;
  if ( Pool2 )
    return ExInitializeResourceLite(Pool2);
  else
    return -1073741801;
}
