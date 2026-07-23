/*
 * XREFs of EtwpStackDeleteProcessor @ 0x140643974
 * Callers:
 *     EtwInitializeProcessor @ 0x14079720C (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140A7F1E0 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall EtwpStackDeleteProcessor(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx

  v1 = a1 + 24;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v3 = result;
    if ( !result )
      break;
    KeFreeCalloutStack(*((PVOID *)&result[1].Next + 1));
    ExFreePoolWithTag(v3, 0);
  }
  return result;
}
