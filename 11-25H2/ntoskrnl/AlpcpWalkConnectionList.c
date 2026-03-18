/*
 * XREFs of AlpcpWalkConnectionList @ 0x14098C700
 * Callers:
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 * Callees:
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 */

__int64 __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *i; // rsi
  __int64 result; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    AlpcpLockBlobExclusive((__int64)(i - 3));
    result = AlpcpUnlockBlobUncachedExclusive((__int64)(i - 3));
  }
  return result;
}
