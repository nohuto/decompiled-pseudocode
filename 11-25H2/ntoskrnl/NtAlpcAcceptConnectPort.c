/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x1409F5AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  char v13; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 0;
  v10 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2, a4, a5, a6, a7, a8, a9, 0LL, 0LL, v13);
  KeLeaveCriticalRegion();
  return v10;
}
