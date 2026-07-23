/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1403C056C
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiStoreDrainWriteSupports @ 0x140489210 (MiStoreDrainWriteSupports.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // r14
  KIRQL v4; // r15
  unsigned int v5; // edi
  __int64 v6; // rbp
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rsi
  PSLIST_ENTRY v9; // rcx

  result = *(unsigned int *)(a1 + 1204);
  if ( (_DWORD)result != -1 && !*(_DWORD *)(a1 + 1228) )
  {
    v3 = (_DWORD *)(a1 + 1704);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
    if ( !*(_DWORD *)(a1 + 1356) )
    {
      v5 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      if ( *(_DWORD *)(v6 + 2004) )
      {
        do
        {
          v7 = (_SLIST_HEADER *)(*(_QWORD *)(v6 + 1296) + 16LL * v5);
          if ( LOWORD(v7->Alignment) )
          {
            v8 = RtlpInterlockedFlushSList(v7);
            while ( v8 )
            {
              v9 = v8;
              v8 = v8->Next;
              ExFreePoolWithTag(v9, 0);
            }
          }
          ++v5;
        }
        while ( v5 < *(_DWORD *)(v6 + 2004) );
      }
    }
    MiReleaseSpinLockExclusive(v3, v4);
    return MiStoreDrainWriteSupports(a1);
  }
  return result;
}
