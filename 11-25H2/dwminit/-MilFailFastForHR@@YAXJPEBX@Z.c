/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18000E6BC
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x18000E21C (ModuleFailFastForHRESULT.c)
 *     ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x18000E950 (-WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180003118 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  _DWORD *v3; // rax
  unsigned int v5; // r8d
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v3 = &unk_180014DC0;
  v5 = 0;
  while ( *v3 != a1 )
  {
    ++v5;
    ++v3;
    if ( v5 >= 9 )
      goto LABEL_6;
  }
  TerminateProcessOnMemoryExhaustion(0LL);
LABEL_6:
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
