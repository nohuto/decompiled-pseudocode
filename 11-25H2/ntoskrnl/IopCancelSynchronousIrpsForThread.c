/*
 * XREFs of IopCancelSynchronousIrpsForThread @ 0x140A98AD4
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x140A989F0 (NtCancelSynchronousIoFile.c)
 * Callees:
 *     IopCancelApcRequired @ 0x140349078 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopCancelIrpsInThreadList @ 0x1408BDA64 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelSynchronousIrpsForThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v5[96]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v6; // [rsp+80h] [rbp-38h]
  struct _KEVENT Event; // [rsp+88h] [rbp-30h] BYREF
  char v8; // [rsp+A0h] [rbp-18h]

  result = IopCancelApcRequired(a1, 0LL, a2);
  if ( (_DWORD)result )
  {
    memset_0(v5, 0, 0x88uLL);
    v6 = a2;
    v8 = 1;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    return IopCancelIrpsInThreadList(a1, (__int64)v5);
  }
  return result;
}
