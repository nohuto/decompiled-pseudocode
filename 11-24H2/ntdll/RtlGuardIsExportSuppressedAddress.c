/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x180003BFC
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180003C34 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801467D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800ECD50 (RtlpGetTargetRvaFlag.c)
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
