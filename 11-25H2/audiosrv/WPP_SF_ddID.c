/*
 * XREFs of WPP_SF_ddID @ 0x1800EB408
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800895AC (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ddID(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
           27LL,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1);
}
