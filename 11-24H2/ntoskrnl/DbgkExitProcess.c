/*
 * XREFs of DbgkExitProcess @ 0x140704E58
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitProcess(int a1)
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
    Process[3].ReadyListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    v5[12] = a1;
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 4;
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process);
  }
  return result;
}
