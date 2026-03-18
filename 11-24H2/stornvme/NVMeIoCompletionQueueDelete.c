/*
 * XREFs of NVMeIoCompletionQueueDelete @ 0x140007A30
 * Callers:
 *     IoQueuesDeletion @ 0x140007DE0 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1400203C4 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1400208C0 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

bool __fastcall NVMeIoCompletionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v4 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v4 + 4096) = 4;
  *(_WORD *)(v4 + 4136) = a2;
  ProcessCommand(a1, a1 + 1016);
  LOBYTE(v5) = 1;
  WaitForCommandComplete(a1, a1 + 1016, v5);
  return *(_BYTE *)(a1 + 1019) == 1;
}
