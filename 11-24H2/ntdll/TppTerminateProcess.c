/*
 * XREFs of TppTerminateProcess @ 0x18015C7E0
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015C914 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015C9AC (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppTerminateProcess(unsigned int **a1)
{
  return ZwTerminateProcess(-1LL, **a1);
}
