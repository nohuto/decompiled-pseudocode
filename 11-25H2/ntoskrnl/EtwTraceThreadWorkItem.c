/*
 * XREFs of EtwTraceThreadWorkItem @ 0x1404D5840
 * Callers:
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     ExIsSafeWorkItem @ 0x140505950 (ExIsSafeWorkItem.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

struct _KTHREAD *(__fastcall *__fastcall EtwTraceThreadWorkItem(
        struct _KTHREAD *(__fastcall *a1)(PIO_WORKITEM IoWorkItem, __int64 a2, ULONG a3),
        __int16 a2))(PIO_WORKITEM IoWorkItem, __int64 a2, ULONG a3)
{
  struct _KTHREAD *(__fastcall *result)(PIO_WORKITEM, __int64, ULONG); // rax
  struct _KTHREAD *(__fastcall *v4)(PIO_WORKITEM, __int64, ULONG); // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *(__fastcall **v5)(PIO_WORKITEM, __int64, ULONG); // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  result = IopProcessWorkItem;
  v4 = a1;
  if ( a1 != IopProcessWorkItem )
  {
    result = (struct _KTHREAD *(__fastcall *)(PIO_WORKITEM, __int64, ULONG))ExIsSafeWorkItem();
    if ( !(_DWORD)result )
    {
      v7 = 0;
      v5 = &v4;
      v6 = 8;
      return (struct _KTHREAD *(__fastcall *)(PIO_WORKITEM, __int64, ULONG))EtwTraceKernelEvent(
                                                                              (int)&v5,
                                                                              1,
                                                                              0x48000000u,
                                                                              a2,
                                                                              291510530);
    }
  }
  return result;
}
