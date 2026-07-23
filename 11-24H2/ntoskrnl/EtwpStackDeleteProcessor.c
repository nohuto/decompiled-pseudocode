/*
 * XREFs of EtwpStackDeleteProcessor @ 0x14064DFC0
 * Callers:
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140A7D8D0 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
