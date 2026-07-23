/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x18012F8C8
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18001B350 (EtwpEventWriteFull.c)
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     EtwEventUnregister @ 0x1800F2790 (EtwEventUnregister.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  NTSTATUS result; // eax
  REGHANDLE RegHandle; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v3[2]; // [rsp+58h] [rbp-20h] BYREF
  int v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = a1;
  v3[1] = 4LL;
  v3[0] = &v4;
  RegHandle = 0LL;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwpEventWriteFull(RegHandle, &AppModelGenericLibraryLoadFailureNoTermination, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)v3);
    return EtwEventUnregister(RegHandle);
  }
  return result;
}
