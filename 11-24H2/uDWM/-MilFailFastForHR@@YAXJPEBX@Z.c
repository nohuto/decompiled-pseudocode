/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1800890F4
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x180096744 (ModuleFailFastForHRESULT.c)
 *     ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x1800F4B60 (-WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x180089170 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
