/*
 * XREFs of KeInitializeGate @ 0x1404892A8
 * Callers:
 *     KeRcuSynchronize @ 0x14073C200 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x14073C950 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14077BA80 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     KiInitializeProcessor @ 0x140B565CC (KiInitializeProcessor.c)
 *     sub_140BD60B0 @ 0x140BD60B0 (sub_140BD60B0.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
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
