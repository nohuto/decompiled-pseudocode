/*
 * XREFs of EtwpTiFreeVad @ 0x1409FBEE4
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FBC80 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiFreeVad(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
