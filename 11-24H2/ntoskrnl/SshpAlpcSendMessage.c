/*
 * XREFs of SshpAlpcSendMessage @ 0x1407683A8
 * Callers:
 *     SshpAlpcOpenGracePeriodWorker @ 0x140767F80 (SshpAlpcOpenGracePeriodWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall SshpAlpcSendMessage(__int64 a1, int a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE SendMessageA[48]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+80h] [rbp-80h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes; // [rsp+90h] [rbp-70h] BYREF

  v5 = PortHandle;
  if ( PortHandle )
  {
    *(_OWORD *)&SendMessageA[32] = 0LL;
    *(_DWORD *)&SendMessageA[40] = a2;
    memset(SendMessageA, 0, 32);
    v10 = 0LL;
    *(_DWORD *)SendMessageA = 3670032;
    memmove(&v10, a4, a3);
    if ( a5 )
    {
      memset_0(&ReceiveMessageAttributes, 0, 0xA0uLL);
      BufferLength = 56LL;
      Timeout.QuadPart = -10000000LL;
      return ZwAlpcSendWaitReceivePort(
               v5,
               0x20000u,
               (PPORT_MESSAGE)SendMessageA,
               0LL,
               (PPORT_MESSAGE)SendMessageA,
               &BufferLength,
               &ReceiveMessageAttributes,
               &Timeout);
    }
    else
    {
      return ZwAlpcSendWaitReceivePort(v5, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
