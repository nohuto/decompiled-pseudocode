/*
 * XREFs of EtwpFreePlaceholderList @ 0x140464C3C
 * Callers:
 *     EtwpFreeCompression @ 0x1404649D8 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1404B6DB4 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1448);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1448) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
