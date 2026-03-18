/*
 * XREFs of DbgkExitThread @ 0x1406FB474
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitThread(int a1)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *result; // rax
  int v4; // edx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v5, 0, sizeof(v5));
  Process = KeGetCurrentThread()->ApcState.Process;
  result = KeGetCurrentThread();
  v4 = *((_DWORD *)&result[1].SwapListEntry + 2);
  if ( (v4 & 4) == 0 && Process[1].UserTime && (v4 & 2) != 0 )
  {
    v5[12] = a1;
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 3;
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process);
  }
  return result;
}
