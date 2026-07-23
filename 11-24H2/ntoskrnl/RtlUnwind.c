/*
 * XREFs of RtlUnwind @ 0x140230F50
 * Callers:
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     __longjmp_internal @ 0x1406A69B0 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

void __cdecl RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  ULONG v7; // edi
  unsigned __int64 v9; // rax
  void *v10; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(ContextLength) = 0;
  v7 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v7 = 1048715;
  RtlGetExtendedContextLength2(v7, (PULONG)&ContextLength, 0LL);
  v9 = (unsigned int)ContextLength + 15LL;
  if ( v9 <= (unsigned int)ContextLength )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v7, &ContextLength, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextLength, 0LL);
}
