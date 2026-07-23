/*
 * XREFs of KeInitializeGate @ 0x1404842C4
 * Callers:
 *     KeRcuSynchronize @ 0x14073A130 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x14073A880 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
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
