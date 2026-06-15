/*
 * XREFs of WPP_SF_gdl @ 0x18011E304
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18011CA10 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_gdl(__int64 a1, __int64 a2, __int64 a3, double a4, ...)
{
  double v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
           37LL,
           &v5,
           8LL,
           (__int64 *)va,
           4LL,
           va1);
}
