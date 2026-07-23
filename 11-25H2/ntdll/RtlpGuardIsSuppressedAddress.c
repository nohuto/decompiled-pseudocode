/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800ED500
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  if ( (unsigned __int8)RtlpGetTargetRvaFlag(a1) )
    return 0;
  else
    return 0;
}
