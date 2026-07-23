/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x1403EA0B8
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     RtlEnumerateEntryHashTable @ 0x1403EA220 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1403EA340 (RtlRemoveEntryHashTable.c)
 *     RtlInitWeakEnumerationHashTable @ 0x1403EA3B0 (RtlInitWeakEnumerationHashTable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

struct _LIST_ENTRY *SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rbx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  _DWORD *v4; // rcx
  KIRQL v5; // r14
  _BYTE *v6; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rax
  unsigned int *v8; // rdi
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-30h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  RtlInitWeakEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v7 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v8 = (unsigned int *)v7;
    if ( !v7 )
      break;
    if ( LOBYTE(v7[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v7, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v8[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v4 = (_DWORD *)*((_QWORD *)v2 + 2);
        v5 = v3;
        *((_QWORD *)v2 + 1) = 0LL;
        if ( v4 )
        {
          AuthzBasepFreeSecurityAttributesList(v4);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusive(v2, v5);
      }
      v6 = (_BYTE *)(*(_QWORD *)(SeLuidToIndexMapping + 24) + ((unsigned __int64)v8[10] >> 3));
      *v6 &= ~(1 << (v8[10] & 7));
      ExFreePoolWithTag(v8, 0);
    }
  }
  --v0->NumEnumerators;
  result = Enumerator.HashEntry.Linkage.Flink;
  if ( (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink != &Enumerator )
  {
    Blink = Enumerator.HashEntry.Linkage.Blink;
    if ( (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink->Blink != &Enumerator
      || Enumerator.HashEntry.Linkage.Blink->Flink != (struct _LIST_ENTRY *)&Enumerator )
    {
      __fastfail(3u);
    }
    Enumerator.HashEntry.Linkage.Blink->Flink = Enumerator.HashEntry.Linkage.Flink;
    result->Blink = Blink;
    result = Enumerator.ChainHead;
    if ( result->Flink == result )
      --v0->NonEmptyBuckets;
  }
  return result;
}
