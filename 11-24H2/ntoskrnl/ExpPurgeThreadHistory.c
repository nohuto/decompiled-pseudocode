/*
 * XREFs of ExpPurgeThreadHistory @ 0x1403ADDA4
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall ExpPurgeThreadHistory(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi
  LONG_PTR result; // rax

  v1 = (PVOID *)(a1 + 72);
  v2 = 4LL;
  result = *(_DWORD *)(a1 + 408) & 0xFFFFFFF8 | 4;
  *(_DWORD *)(a1 + 408) = result;
  do
  {
    if ( *v1 )
    {
      result = ObfDereferenceObjectWithTag(*v1, 0x746C6644u);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
