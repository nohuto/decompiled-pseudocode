/*
 * XREFs of EtwTimLogProhibitWin32kSystemCalls @ 0x14091EC70
 * Callers:
 *     PsConvertToGuiThread @ 0x14091E000 (PsConvertToGuiThread.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 */

void __fastcall EtwTimLogProhibitWin32kSystemCalls(int a1, __int64 a2)
{
  __int64 *v3; // r8

  if ( (*(_DWORD *)(a2 + 1872) & 0x2000) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_WIN32K_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_WIN32K_SYSTEM_CALLS;
    EtwpTimLogMitigationForProcess(2, a1, (const EVENT_DESCRIPTOR *)v3, a2, 0);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1872), 0xFFFFDFFF);
  }
}
