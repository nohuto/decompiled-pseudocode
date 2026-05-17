/*
 * XREFs of EtwpInsertGuidEntry @ 0x18010E48C
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x18010E41C (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall EtwpInsertGuidEntry(unsigned __int64 a1)
{
  __int64 v2; // rdi
  bool v3; // bl
  int v4; // esi
  __int64 v5; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock);
  v2 = EtwpGuidEntryTable;
  v3 = 0;
  if ( (qword_1801D42B0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v2 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v2 = 0LL;
  }
  v4 = qword_1801D42B0 & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( memcmp((const void *)(a1 + 24), (const void *)(v2 + 24), 0x10uLL) >= 0 )
      {
        v5 = *(_QWORD *)(v2 + 8);
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_11:
            v3 = 1;
            break;
          }
          v5 ^= v2;
        }
        if ( !v5 )
          goto LABEL_11;
      }
      else
      {
        v5 = *(_QWORD *)v2;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= v2;
        }
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&EtwpGuidEntryTable, v2, v3, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
