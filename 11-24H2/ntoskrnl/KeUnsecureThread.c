/*
 * XREFs of KeUnsecureThread @ 0x1405B7CB0
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x140710658 (VslTerminateSecureThread.c)
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
