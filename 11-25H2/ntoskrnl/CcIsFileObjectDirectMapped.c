/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x1404DCD1C
 * Callers:
 *     CcCanIWriteStreamEx @ 0x1403A62E0 (CcCanIWriteStreamEx.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
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
