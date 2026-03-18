/*
 * XREFs of NVMeDirectiveStreamsAllocateResources @ 0x140027940
 * Callers:
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeDirectiveStreamsAllocateResources(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rdx
  char v7; // al

  LocalCommandReuse(a1, a1 + 1008);
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_BYTE *)(v6 + 4225) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 26;
  *(_BYTE *)(v6 + 4225) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 259;
  *(_QWORD *)(v6 + 4192) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4144) = a3;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
