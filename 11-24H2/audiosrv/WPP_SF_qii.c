/*
 * XREFs of WPP_SF_qii @ 0x1800FAF0C
 * Callers:
 *     _lambda_e71555c2ea4eb41c7555c95167e5b0eb_::operator() @ 0x1800F98FC (_lambda_e71555c2ea4eb41c7555c95167e5b0eb_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qii(__int64 a1, __int64 a2, __int64 a3, ...)
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
           &WPP_401f86b9cc1d325f8e48092f944d556b_Traceguids,
           10LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2);
}
