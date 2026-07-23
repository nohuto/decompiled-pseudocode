/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800E7950
 * Callers:
 *     AVrfpSnapDllImports @ 0x1800E7724 (AVrfpSnapDllImports.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800E7980 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180144B80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800E7AD8 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  if ( (unsigned __int8)RtlpGetTargetRvaFlag(a1) )
    return 0;
  else
    return 0;
}
