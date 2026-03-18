/*
 * XREFs of EtwpTiFreeVad @ 0x1409FEC64
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FEA00 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiFreeVad(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
