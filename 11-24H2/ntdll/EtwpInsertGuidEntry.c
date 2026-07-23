/*
 * XREFs of EtwpInsertGuidEntry @ 0x180106D44
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180106CD4 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

void __fastcall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = 0;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable.Root )
      Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
    else
      Root = 0LL;
  }
  v4 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( memcmp(&Node[1], (const void *)(Root + 24), 0x10uLL) >= 0 )
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_11:
            v3 = 1;
            break;
          }
          v5 ^= Root;
        }
        if ( !v5 )
          goto LABEL_11;
      }
      else
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
