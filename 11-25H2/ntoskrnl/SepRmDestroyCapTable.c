/*
 * XREFs of SepRmDestroyCapTable @ 0x140786E44
 * Callers:
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x1405FD1CC (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1403EA220 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1403EA340 (RtlRemoveEntryHashTable.c)
 *     RtlInitWeakEnumerationHashTable @ 0x1403EA3B0 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14043E110 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140480710 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitWeakEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndWeakEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
