/*
 * XREFs of TppTerminateProcess @ 0x18015ABA0
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015ACD4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015AD6C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
