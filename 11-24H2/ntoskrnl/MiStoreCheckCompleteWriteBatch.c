/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x14046FE3C
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiStoreDrainWriteSupports @ 0x140470054 (MiStoreDrainWriteSupports.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
