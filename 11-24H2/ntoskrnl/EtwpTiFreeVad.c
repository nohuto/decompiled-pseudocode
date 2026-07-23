/*
 * XREFs of EtwpTiFreeVad @ 0x1409F4C24
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409F49C0 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiFreeVad(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
