/*
 * XREFs of AcquireDebugPrivilege @ 0x18015B3A0
 * Callers:
 *     GetProcessIptTrace @ 0x18015B3D4 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015B4E0 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
