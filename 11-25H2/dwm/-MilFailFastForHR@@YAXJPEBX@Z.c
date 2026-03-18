/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1400048E4
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x1400048D4 (ModuleFailFastForHRESULT.c)
 *     ?CollectDWMCursorTelemetry@@YAXXZ @ 0x14000E450 (-CollectDWMCursorTelemetry@@YAXXZ.c)
 *     ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x1400108A0 (-WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140003A2C (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x140005D98 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
