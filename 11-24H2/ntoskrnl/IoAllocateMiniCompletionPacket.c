/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x140990590
 * Callers:
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = ExAllocatePool3(0x40uLL, 1);
  if ( result )
  {
    *(_BYTE *)(result + 16) = 4;
    *(_QWORD *)(result + 56) = a1;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
