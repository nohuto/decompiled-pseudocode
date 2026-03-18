/*
 * XREFs of MmVerifyCallbackFunction @ 0x140AA9564
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405B0B20 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F64C4 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(__int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
