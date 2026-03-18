/*
 * XREFs of NtUserEvent @ 0x1C01CEE10
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C000E9F0 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int64 Src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  EnterCrit(0LL, 0LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v3, v2, v4);
  v7 = 0LL;
  if ( !CurrentProcessWow64Process )
    v7 = 3LL;
  if ( (v7 & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *(unsigned __int16 *)(Src + 6);
  v9 = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v7, v6);
  ProbeForRead((volatile void *)(Src + 8), v8, v9 != 0 ? 1 : 4);
  v10 = xxxCsEvent((void *)Src, v8);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v10;
}
