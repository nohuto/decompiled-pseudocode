/*
 * XREFs of EtwTraceThreadWorkItem @ 0x14032F1B0
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     ExIsSafeWorkItem @ 0x140505990 (ExIsSafeWorkItem.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

struct _KTHREAD *(__fastcall *__fastcall EtwTraceThreadWorkItem(
        struct _KTHREAD *(__fastcall *a1)(PIO_WORKITEM IoWorkItem),
        __int16 a2))(PIO_WORKITEM IoWorkItem)
{
  struct _KTHREAD *(__fastcall *result)(PIO_WORKITEM); // rax
  struct _KTHREAD *(__fastcall *v4)(PIO_WORKITEM); // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *(__fastcall **v5)(PIO_WORKITEM); // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  result = IopProcessWorkItem;
  v4 = a1;
  if ( a1 != IopProcessWorkItem )
  {
    result = (struct _KTHREAD *(__fastcall *)(PIO_WORKITEM))ExIsSafeWorkItem();
    if ( !(_DWORD)result )
    {
      v7 = 0;
      v5 = &v4;
      v6 = 8;
      return (struct _KTHREAD *(__fastcall *)(PIO_WORKITEM))EtwTraceKernelEvent((int)&v5, 1, 0x48000000u, a2, 291510530);
    }
  }
  return result;
}
