/*
 * XREFs of RtlUnwind @ 0x1800D2950
 * Callers:
 *     _local_unwind @ 0x1801201E0 (_local_unwind.c)
 *     __longjmp_internal @ 0x180165620 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D2A60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  ULONG64 v4; // rdi
  char v5; // r10
  int v9; // eax
  ULONG v11; // esi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  v4 = 0LL;
  v5 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3;
  LODWORD(ContextLength) = 0;
  if ( v5 == 1 )
    v4 = 2048LL;
  v9 = 0;
  if ( v5 == 1 )
    v9 = 64;
  v11 = v9 + 1048587;
  RtlGetExtendedContextLength2(v9 + 1048587, (PULONG)&ContextLength, (unsigned int)v4);
  v12 = (unsigned int)ContextLength + 15LL;
  if ( v12 <= (unsigned int)ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v11, &ContextLength, v4);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextLength, 0LL);
}
