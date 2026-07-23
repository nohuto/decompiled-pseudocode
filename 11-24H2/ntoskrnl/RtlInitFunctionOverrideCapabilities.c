/*
 * XREFs of RtlInitFunctionOverrideCapabilities @ 0x140787CF4
 * Callers:
 *     MiInitializeFunctionOverrides @ 0x140C51B2C (MiInitializeFunctionOverrides.c)
 * Callees:
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D5E8 (RtlpInitFunctionOverrideCapabilities.c)
 */

char __fastcall RtlInitFunctionOverrideCapabilities(_BYTE *a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rdi
  __int64 v6; // rcx

  result = RtlpInitFunctionOverrideCapabilities();
  if ( a2 )
  {
    v5 = a2 - (_QWORD)a1;
    v6 = 90LL;
    do
    {
      result = a1[v5];
      *a1++ &= result;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
