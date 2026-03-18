/*
 * XREFs of NtUserUnregisterClass @ 0x1402A15F0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _UnregisterClass @ 0x14023A7F8 (_UnregisterClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserUnregisterClass(ULONG64 a1, __int64 a2, void *a3)
{
  int v6; // ecx
  unsigned __int64 v7; // r9
  ULONG64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  Src = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = v7 + (unsigned __int16)v6 + 2LL;
    if ( v8 <= v7 || v8 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v6 > (unsigned __int16)HIWORD(*(_DWORD *)a1) || (v6 & 1) != 0 )
    {
      if ( (v6 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10825);
      ExRaiseAccessViolation();
    }
  }
  v10 = UnregisterClass(v7, a2, &Src);
  if ( v10 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, &Src, 0x18uLL);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
