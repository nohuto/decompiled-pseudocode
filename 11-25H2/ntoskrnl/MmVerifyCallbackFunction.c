/*
 * XREFs of MmVerifyCallbackFunction @ 0x140AA4504
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405AD190 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3D14 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(__int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
