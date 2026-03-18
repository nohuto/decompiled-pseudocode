/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x140A76C0C
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x140A13140 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 */

void __fastcall EtwTimLogProhibitDynamicCode(int a1, __int64 a2)
{
  __int64 *v3; // r8

  if ( (*(_DWORD *)(a2 + 1872) & 0x800) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
    EtwpTimLogMitigationForProcess(0, a1, (const EVENT_DESCRIPTOR *)v3, a2, 1);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1872), 0xFFFFF7FF);
  }
}
