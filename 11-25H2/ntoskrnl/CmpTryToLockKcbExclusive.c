/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x1409E2C50
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  __int64 *v2; // rax
  char result; // al

  v2 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(a1 + 48, (ULONG_PTR)v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    result = 1;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return result;
}
