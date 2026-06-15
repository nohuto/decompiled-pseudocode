/*
 * XREFs of WPP_SF_i @ 0x180031EA4
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180030150 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_i(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, a2, va, 8LL, 0LL);
}
