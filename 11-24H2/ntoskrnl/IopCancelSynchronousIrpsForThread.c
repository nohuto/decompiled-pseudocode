/*
 * XREFs of IopCancelSynchronousIrpsForThread @ 0x140A9E4E4
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x140A9E400 (NtCancelSynchronousIoFile.c)
 * Callees:
 *     IopCancelApcRequired @ 0x14027B464 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopCancelIrpsInThreadList @ 0x14094A824 (IopCancelIrpsInThreadList.c)
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
