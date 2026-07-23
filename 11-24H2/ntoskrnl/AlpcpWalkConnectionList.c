/*
 * XREFs of AlpcpWalkConnectionList @ 0x14088F994
 * Callers:
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 * Callees:
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 */

__int64 __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *i; // rsi
  __int64 result; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    AlpcpLockBlobExclusive(i - 3);
    result = AlpcpUnlockBlobUncachedExclusive(i - 3);
  }
  return result;
}
