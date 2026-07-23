/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x180161840
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1801671A0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     EtwpEventWriteFull @ 0x18008EAC0 (EtwpEventWriteFull.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 *     ZwRaiseException @ 0x180166090 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

LONG __fastcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_EXCEPTION_POINTERS *); // rax
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  int Length; // ecx
  unsigned int v8; // eax
  NTSTATUS v9; // eax
  __int16 v10; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG RegHandle; // [rsp+58h] [rbp-A8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v14[3]; // [rsp+110h] [rbp+10h] BYREF
  int v15; // [rsp+128h] [rbp+28h]
  int v16; // [rsp+12Ch] [rbp+2Ch]

  memset_thunk_772440563353939046(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  v10 = 0;
  RegHandle = 0LL;
  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = (PCONTEXT)a2;
  v4 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&Flags);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      v10 = ProcessParameters->ImagePathName.Length >> 1;
      v14[0] = &v10;
      v14[1] = 2LL;
      Length = ProcessParameters->ImagePathName.Length;
      v14[2] = ProcessParameters->ImagePathName.Buffer;
      v15 = Length;
      v16 = 0;
      EtwpEventWriteFull(RegHandle, &FatalUserCallbackException, 0LL, 0, 0, 0LL, 0LL, 2, (__int64)v14);
      EtwNotificationUnregister(RegHandle, 0LL);
    }
    ExceptionRecord.ExceptionAddress = *(void **)(a2 + 248);
    v8 = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = v8;
    ExceptionRecord.ExceptionRecord = a1;
    ExceptionRecord.NumberParameters = 0;
    v9 = ZwRaiseException(&ExceptionRecord, (PCONTEXT)a2, 0);
    RtlRaiseStatus(v9);
  }
  return result;
}
