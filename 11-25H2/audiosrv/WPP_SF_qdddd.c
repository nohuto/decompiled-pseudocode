/*
 * XREFs of WPP_SF_qdddd @ 0x1800F5E28
 * Callers:
 *     _lambda_e56d8910bbf57adb71c0704c39bb5897_::operator() @ 0x1800F4550 (_lambda_e56d8910bbf57adb71c0704c39bb5897_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdddd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v6; // [rsp+B0h] [rbp+28h] BYREF
  va_list va1; // [rsp+B0h] [rbp+28h]
  va_list va2; // [rsp+B8h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_315cf95596543faf822237737ca2f47c_Traceguids,
           13LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2);
}
