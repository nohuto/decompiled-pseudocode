/*
 * XREFs of RtlpValidateContextFlags @ 0x1403D5250
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpSanitizeContextFlags @ 0x1403D4970 (RtlpSanitizeContextFlags.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x14092013C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E0B04 (RtlpWow64SanitizeContextFlags.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1405E7E08 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlpValidateContextFlags(__int64 a1, __int64 a2)
{
  return RtlpValidateContextFlags2(a1, a2, 0xFFFFF780000003D8uLL);
}
