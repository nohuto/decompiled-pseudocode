/*
 * XREFs of SshpSessionManagerInterruptTimeToSystemTime @ 0x1407579F8
 * Callers:
 *     SshSessionManagerTracePostSleepNotification @ 0x140A6DE14 (SshSessionManagerTracePostSleepNotification.c)
 * Callees:
 *     SSHSupportQueryInterruptTime @ 0x1404B0668 (SSHSupportQueryInterruptTime.c)
 *     CmSiQuerySystemTime @ 0x1404B324C (CmSiQuerySystemTime.c)
 */

__int64 SshpSessionManagerInterruptTimeToSystemTime()
{
  _QWORD *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  SSHSupportQueryInterruptTime();
  CmSiQuerySystemTime(&v5);
  result = v2 - v1;
  v4 = -v2;
  if ( v2 >= 0 )
    v4 = result;
  *v0 = v5 + v4;
  return result;
}
