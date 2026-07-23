/*
 * XREFs of MmVerifyCallbackFunction @ 0x140AA4614
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405ADA90 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(__int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
