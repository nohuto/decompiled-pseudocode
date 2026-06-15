/*
 * XREFs of WPP_SF_q @ 0x18003CE90
 * Callers:
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18000C2E0 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_q(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, 0xBu, va, 8LL, 0LL);
}
