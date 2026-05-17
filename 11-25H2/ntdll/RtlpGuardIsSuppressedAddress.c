/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800ED500
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
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
