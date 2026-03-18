/*
 * XREFs of KeInitializeGate @ 0x140489B40
 * Callers:
 *     KeRcuSynchronize @ 0x14072FF70 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x140730930 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     KiInitializeProcessor @ 0x140B46628 (KiInitializeProcessor.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = a2;
  result = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  return result;
}
