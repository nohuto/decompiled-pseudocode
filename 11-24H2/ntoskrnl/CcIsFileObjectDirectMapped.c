/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x1404D5E2C
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 */

bool __fastcall CcIsFileObjectDirectMapped(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  KeRcuReadLock();
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 )
      v2 = (*(_DWORD *)(v4 + 152) & 0x40000000) != 0;
  }
  KeRcuReadUnlock();
  return v2;
}
