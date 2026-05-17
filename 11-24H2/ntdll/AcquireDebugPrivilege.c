/*
 * XREFs of AcquireDebugPrivilege @ 0x18015CFE0
 * Callers:
 *     GetProcessIptTrace @ 0x18015D014 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015D120 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
