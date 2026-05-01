/*
 * XREFs of WPP_SF_qL @ 0x1803C6520
 * Callers:
 *     ?SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180070B90 (-SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1803BF7E8 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qL(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, va1, 4LL, 0LL);
}
