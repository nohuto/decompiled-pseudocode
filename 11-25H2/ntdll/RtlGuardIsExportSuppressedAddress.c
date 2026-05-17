/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x180009774
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlGuardIsExportSuppressedAddress(__int64 a1)
{
  char result; // al
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)RtlpGetTargetRvaFlag(a1, &v2) )
    return 0;
  result = 1;
  if ( (v2 & 1) != 0 || (v2 & 2) == 0 )
    return 0;
  return result;
}
