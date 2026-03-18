/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x1404DC40C
 * Callers:
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 */

bool __fastcall CcIsFileObjectDirectMapped(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = 0;
  KeRcuReadLock(a1);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v4 = 1LL;
      v2 = (*(_DWORD *)(v7 + 152) & 0x40000000) != 0;
    }
  }
  KeRcuReadUnlock(v4, v3, v5);
  return v2;
}
