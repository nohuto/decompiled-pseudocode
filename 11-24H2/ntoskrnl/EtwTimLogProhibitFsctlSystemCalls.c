/*
 * XREFs of EtwTimLogProhibitFsctlSystemCalls @ 0x140A63D9C
 * Callers:
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitFsctlSystemCalls(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r8
  char v5; // [rsp+20h] [rbp-18h]

  result = *(unsigned int *)(a2 + 2008);
  if ( (result & 4) != 0 )
  {
    v5 = 0;
    v4 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
    if ( a1 != 1 )
      v4 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(3LL, a1, v4, a2, v5);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2008), 0xFFFFFFFB);
  }
  return result;
}
