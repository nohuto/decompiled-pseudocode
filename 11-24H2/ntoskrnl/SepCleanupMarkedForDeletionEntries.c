/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x140356E98
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlInitWeakEnumerationHashTable @ 0x140356C60 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140357000 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140357120 (RtlRemoveEntryHashTable.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140357308 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _LIST_ENTRY *SepCleanupMarkedForDeletionEntries()
{
  struct _RTL_DYNAMIC_HASH_TABLE *v0; // rbx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  KIRQL v8; // r14
  _BYTE *v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rax
  unsigned int *v11; // rdi
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-30h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  RtlInitWeakEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v10 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v11 = (unsigned int *)v10;
    if ( !v10 )
      break;
    if ( LOBYTE(v10[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v10, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v11[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v7 = *((_QWORD *)v2 + 2);
        v8 = v3;
        *((_QWORD *)v2 + 1) = 0LL;
        if ( v7 )
        {
          AuthzBasepFreeSecurityAttributesList(v7, v4, v5, v6);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusive(v2, v8);
      }
      v9 = (_BYTE *)(*(_QWORD *)(SeLuidToIndexMapping + 24) + ((unsigned __int64)v11[10] >> 3));
      *v9 &= ~(1 << (v11[10] & 7));
      ExFreePoolWithTag(v11, 0);
    }
  }
  --v0->NumEnumerators;
  result = Enumerator.HashEntry.Linkage.Flink;
  if ( (struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink != &Enumerator )
  {
    Blink = Enumerator.HashEntry.Linkage.Blink;
    if ( (struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink->Blink != &Enumerator
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
