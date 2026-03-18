/*
 * XREFs of NtUserEvent @ 0x140294DD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1402DBB18 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(ULONG64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  ULONG64 v6; // rdx
  unsigned int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int16 v12; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  v4 = -PsGetCurrentProcessWow64Process(v2, v1, v3);
  v6 = a1;
  if ( ((v4 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v7 = *(unsigned __int16 *)(a1 + 6);
  v12 = *(_WORD *)(a1 + 6);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v6, v5);
  ProbeForRead((volatile void *)(a1 + 8), v7, CurrentProcessWow64Process != 0 ? 1 : 4);
  v9 = xxxCsEvent(a1, v12);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
