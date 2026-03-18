/*
 * XREFs of VidMmBeginDmaBufferCPUAccess_0 @ 0x1400F687C
 * Callers:
 *     WriteDmaBufferToMinidump @ 0x140097744 (WriteDmaBufferToMinidump.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmBeginDmaBufferCPUAccess_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 32) )
  {
    result = *(_QWORD *)(a2 + 48);
    v4 = *(_QWORD *)(result + 216);
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 64);
  }
  *a3 = v4;
  return result;
}
