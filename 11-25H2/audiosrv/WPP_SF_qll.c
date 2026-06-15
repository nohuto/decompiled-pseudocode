/*
 * XREFs of WPP_SF_qll @ 0x18010BB40
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x18010B8D0 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qll(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids,
           33LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2);
}
