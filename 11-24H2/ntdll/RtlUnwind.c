/*
 * XREFs of RtlUnwind @ 0x1800D75E0
 * Callers:
 *     _local_unwind @ 0x180121FB0 (_local_unwind.c)
 *     __longjmp_internal @ 0x180167260 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D76F0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D7C70 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __int64 v4; // rdi
  char v5; // r10
  int v9; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  unsigned int ContextRecord; // [rsp+30h] [rbp+0h] BYREF

  v4 = 0LL;
  v5 = (*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3;
  ContextRecord = 0;
  if ( v5 == 1 )
    v4 = 2048LL;
  v9 = 0;
  if ( v5 == 1 )
    v9 = 64;
  v11 = v9 + 1048587;
  RtlGetExtendedContextLength2((unsigned int)(v9 + 1048587), &ContextRecord, (unsigned int)v4);
  v12 = ContextRecord + 15LL;
  if ( v12 <= ContextRecord )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&ContextRecord, v11, &ContextRecord, v4);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextRecord, 0LL);
}
