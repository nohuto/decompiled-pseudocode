/*
 * XREFs of RtlRaiseException @ 0x1405E5EE0
 * Callers:
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404CCED0 (HvlpSetRegister64.c)
 *     RaiseException @ 0x140500100 (RaiseException.c)
 *     _raise_exc_ex @ 0x140500210 (_raise_exc_ex.c)
 *     HvlpGetRegister128 @ 0x140588A80 (HvlpGetRegister128.c)
 *     KiStallBugcheckThread @ 0x1405C3E08 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405E8884 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x14046B960 (RtlVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x1404FA2A0 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1406AA230 (ZwRaiseException.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

void __cdecl RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  void *v6; // rsp
  NTSTATUS v7; // ebx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rax
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v13; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextLength) = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2(v2 + 1048587, (PULONG)&ContextLength, 0LL);
  v3 = (unsigned int)ContextLength + 15LL;
  if ( v3 <= (unsigned int)ContextLength )
    v3 = 0xFFFFFFFFFFFFFF0LL;
  v4 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = alloca(v4);
  v6 = alloca(v4);
  v7 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v2 + 1048587, &ContextLength, 0LL);
  RtlpCaptureContext2();
  v8 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, 0LL);
  if ( !v8 )
LABEL_6:
    RtlRaiseStatus(v7);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v13, v8, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v13;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v7 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ContextLength, 0);
    goto LABEL_6;
  }
}
