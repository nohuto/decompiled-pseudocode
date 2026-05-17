/*
 * XREFs of TppTerminateProcess @ 0x18015DD40
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015DE74 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015DF0C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppTerminateProcess(unsigned int **a1)
{
  return ZwTerminateProcess(-1LL, **a1);
}
