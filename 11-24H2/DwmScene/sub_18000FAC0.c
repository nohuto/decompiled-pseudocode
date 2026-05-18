/*
 * XREFs of sub_18000FAC0 @ 0x18000FAC0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

FARPROC __fastcall sub_18000FAC0(__int64 a1, __int64 a2, unsigned int a3)
{
  HMODULE ModuleHandleW; // rax
  FARPROC result; // rax

  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  result = GetProcAddress(ModuleHandleW, "RaiseFailFastException");
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, __int64, _QWORD))result)(a1, a2, a3);
  return result;
}
