/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18010DBCC
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x1800CCA2C (ModuleFailFastForHRESULT.c)
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18010DBA0 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilFailFastForHR(int a1, void *a2)
{
  ULONG_PTR v2; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.ExceptionAddress = a2;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
