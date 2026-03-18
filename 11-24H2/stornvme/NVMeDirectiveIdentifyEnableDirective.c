/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x140027728
 * Callers:
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al

  LocalCommandReuse(a1, a1 + 1008);
  v2 = *(_QWORD *)(a1 + 1104);
  v3 = *(_BYTE *)(v2 + 4225);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4225) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4192) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
