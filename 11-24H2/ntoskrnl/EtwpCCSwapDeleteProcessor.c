/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x140652624
 * Callers:
 *     EtwDeleteProcessor @ 0x1407A63E0 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A65DC (EtwInitializeProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 408);
  v2 = 5LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
