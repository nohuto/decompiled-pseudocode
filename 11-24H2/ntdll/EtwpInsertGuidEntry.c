/*
 * XREFs of EtwpInsertGuidEntry @ 0x18010C374
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x18010C304 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall EtwpInsertGuidEntry(unsigned __int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  bool v5; // bl
  int v6; // esi
  __int64 v7; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock, a2, a3);
  v4 = EtwpGuidEntryTable;
  v5 = 0;
  if ( (qword_1801D2278 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v4 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v4 = 0LL;
  }
  v6 = qword_1801D2278 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( memcmp((const void *)(a1 + 24), (const void *)(v4 + 24), 0x10uLL) >= 0 )
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            break;
          }
          v7 ^= v4;
        }
        if ( !v7 )
          goto LABEL_11;
      }
      else
      {
        v7 = *(_QWORD *)v4;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= v4;
        }
        if ( !v7 )
          break;
      }
      v4 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&EtwpGuidEntryTable, v4, v5, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
