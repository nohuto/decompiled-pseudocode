/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180166810 (ZwSetInformationVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[5]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+37h] BYREF

  v5[3] = 0LL;
  v4[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6[1] = a2;
  v6[0] = a1 & 0xFFF;
  v5[1] = &v3;
  v5[4] = 0LL;
  v5[2] = v6;
  v4[1] = 4096LL;
  v5[0] = 1LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, _QWORD *, int, _DWORD))ZwSetInformationVirtualMemory)(
           -1LL,
           2LL,
           1LL,
           v4,
           v5,
           40,
           0);
}
