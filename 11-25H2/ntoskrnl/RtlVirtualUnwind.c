/*
 * XREFs of RtlVirtualUnwind @ 0x140472BC0
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __cdecl RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF

  v10[2] = ContextPointers;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    ControlPc,
    &FunctionEntry->BeginAddress,
    (__int64)ContextRecord,
    0LL,
    HandlerData,
    EstablisherFrame,
    &v9,
    (__int64)v10);
  return v9;
}
