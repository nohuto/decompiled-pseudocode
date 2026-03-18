/*
 * XREFs of NVMeGetControllerInitiatedTelemetryHeader @ 0x1400283E8
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1400281F0 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x14001F064 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryHeader(__int64 a1, void *a2, __int64 *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  int v9; // [rsp+28h] [rbp-30h]

  memset(a2, 0, 0x200uLL);
  LocalCommandReuse(a1, a1 + 1008);
  v6 = *(_QWORD *)(a1 + 1072);
  LOBYTE(v7) = 8;
  *(_BYTE *)(v6 + 4225) |= 3u;
  *(_WORD *)(v6 + 4212) = 0;
  BuildGetLogPageCommandForTelemetryLog(a1, v6, v7, 0x200u, *a3, v9, 0LL, 1, 1u);
  *(_BYTE *)(v6 + 4225) |= 4u;
  *(_QWORD *)(v6 + 4160) = a2;
  *(_QWORD *)(v6 + 4168) = *a3;
  *(_DWORD *)(v6 + 4208) = 512;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
