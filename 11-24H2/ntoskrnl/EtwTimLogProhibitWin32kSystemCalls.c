/*
 * XREFs of EtwTimLogProhibitWin32kSystemCalls @ 0x140935F30
 * Callers:
 *     PsConvertToGuiThread @ 0x140935290 (PsConvertToGuiThread.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitWin32kSystemCalls(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-18h]

  if ( (*(_DWORD *)(a2 + 1872) & 0x2000) != 0 )
  {
    v5 = 0;
    v3 = MITIGATION_AUDIT_PROHIBIT_WIN32K_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_WIN32K_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(2LL, a1, v3, a2, v5);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1872), 0xFFFFDFFF);
  }
  return result;
}
