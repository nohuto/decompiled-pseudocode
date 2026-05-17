/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800ECD20
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180003C34 (RtlGuardGrantSuppressedCallAccess.c)
 *     AVrfpSnapDllImports @ 0x1800ECAF4 (AVrfpSnapDllImports.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801467D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ECD50 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(__int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
