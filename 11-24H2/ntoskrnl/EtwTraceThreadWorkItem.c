/*
 * XREFs of EtwTraceThreadWorkItem @ 0x140207BD0
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     ExIsSafeWorkItem @ 0x1405080D0 (ExIsSafeWorkItem.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 (__fastcall *__fastcall EtwTraceThreadWorkItem(
        __int64 (__fastcall *a1)(PIO_WORKITEM IoWorkItem),
        unsigned __int16 a2))(PIO_WORKITEM IoWorkItem)
{
  __int64 (__fastcall *result)(PIO_WORKITEM); // rax
  __int64 (__fastcall *v4)(PIO_WORKITEM); // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall **v5)(PIO_WORKITEM); // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  result = IopProcessWorkItem;
  v4 = a1;
  if ( a1 != IopProcessWorkItem )
  {
    result = (__int64 (__fastcall *)(PIO_WORKITEM))ExIsSafeWorkItem();
    if ( !(_DWORD)result )
    {
      v7 = 0;
      v5 = &v4;
      v6 = 8;
      return (__int64 (__fastcall *)(PIO_WORKITEM))EtwTraceKernelEvent((unsigned int)&v5, 1, 1207959552, a2, 291510530);
    }
  }
  return result;
}
