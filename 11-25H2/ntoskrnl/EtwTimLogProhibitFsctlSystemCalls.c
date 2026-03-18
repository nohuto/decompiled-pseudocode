/*
 * XREFs of EtwTimLogProhibitFsctlSystemCalls @ 0x140A6B900
 * Callers:
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 */

void __fastcall EtwTimLogProhibitFsctlSystemCalls(int a1, __int64 a2)
{
  __int64 *v3; // r8

  if ( (*(_DWORD *)(a2 + 2008) & 4) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
    EtwpTimLogMitigationForProcess(3, a1, (const EVENT_DESCRIPTOR *)v3, a2, 0);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2008), 0xFFFFFFFB);
  }
}
