/*
 * XREFs of SepRmDestroyCapTable @ 0x140796214
 * Callers:
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x1406096BC (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlInitWeakEnumerationHashTable @ 0x140356C60 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140357000 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140357120 (RtlRemoveEntryHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14043F0A0 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1404813D0 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
