/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x1409DB8E0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  _QWORD *v2; // rax
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
