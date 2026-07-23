/*
 * XREFs of SepRmDestroyCapTable @ 0x140796324
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepRmDereferenceCapTable @ 0x1404F2D88 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x140607C74 (SepBuildCapPolicyTable.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1403E3040 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1403E3160 (RtlRemoveEntryHashTable.c)
 *     RtlInitWeakEnumerationHashTable @ 0x1403E31D0 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x140434C50 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x14047C690 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
