/*
 * XREFs of RtlpValidateContextFlags @ 0x1403E76B0
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403E6858 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpSanitizeContextFlags @ 0x1403E6DD0 (RtlpSanitizeContextFlags.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     RtlpCopyExtendedContext @ 0x1403E7370 (RtlpCopyExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1408FD85C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x1408FE830 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E6274 (RtlpWow64SanitizeContextFlags.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1405EA8B8 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlpValidateContextFlags(__int64 a1, __int64 a2)
{
  return RtlpValidateContextFlags2(a1, a2, 0xFFFFF780000003D8uLL);
}
