/*
 * XREFs of RtlUnwind @ 0x180075300
 * Callers:
 *     _local_unwind @ 0x180123A90 (_local_unwind.c)
 *     __longjmp_internal @ 0x1801687F0 (__longjmp_internal.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 *     RtlInitializeExtendedContext2 @ 0x1800768C0 (RtlInitializeExtendedContext2.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __int64 v4; // rax
  ULONG64 v9; // rdi
  ULONG v10; // r13d
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF

  v4 = 0LL;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    v9 = 2048LL;
    v10 = 1048651;
    if ( !MEMORY[0x7FFE03D8] )
      goto LABEL_7;
    v11 = 2048LL;
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v11 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL;
    v12 = RtlpGetEntireXStateAreaLength(v11) + 800;
  }
  else
  {
    v9 = 0LL;
    v10 = 1048587;
    v12 = 1264;
  }
  v4 = (unsigned int)(v12 + 15);
LABEL_7:
  v13 = (unsigned int)v4;
  v14 = v4 + 15;
  if ( v14 <= v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextEx, v10, &ContextEx, v9);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextEx, 0LL);
}
