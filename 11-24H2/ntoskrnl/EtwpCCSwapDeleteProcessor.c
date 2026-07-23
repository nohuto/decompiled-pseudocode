/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x140650D24
 * Callers:
 *     EtwDeleteProcessor @ 0x1407A6520 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
