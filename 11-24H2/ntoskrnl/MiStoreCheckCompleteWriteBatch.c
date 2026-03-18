/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1402D001C
 * Callers:
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiStoreDrainWriteSupports @ 0x1402CF620 (MiStoreDrainWriteSupports.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  _DWORD *v2; // r14
  KIRQL v3; // r15
  unsigned int v4; // edi
  __int64 v5; // rbp
  union _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rsi
  PSLIST_ENTRY v8; // rcx

  if ( *(_DWORD *)(a1 + 1204) != -1 && !*(_DWORD *)(a1 + 1228) )
  {
    v2 = (_DWORD *)(a1 + 1704);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
    if ( !*(_DWORD *)(a1 + 1356) )
    {
      v4 = 0;
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      if ( *(_DWORD *)(v5 + 2004) )
      {
        do
        {
          v6 = (union _SLIST_HEADER *)(*(_QWORD *)(v5 + 1296) + 16LL * v4);
          if ( LOWORD(v6->Alignment) )
          {
            v7 = RtlpInterlockedFlushSList(v6);
            while ( v7 )
            {
              v8 = v7;
              v7 = v7->Next;
              ExFreePoolWithTag(v8, 0);
            }
          }
          ++v4;
        }
        while ( v4 < *(_DWORD *)(v5 + 2004) );
      }
    }
    MiReleaseSpinLockExclusive(v2, v3);
    MiStoreDrainWriteSupports((union _SLIST_HEADER *)a1);
  }
}
