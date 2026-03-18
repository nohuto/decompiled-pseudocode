/*
 * XREFs of MiScrubMemoryWorker @ 0x1407FDAD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     MiInitializeScrubPacket @ 0x1407FD6E0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1407FD9F4 (MiReleaseScrubPacket.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 */

__int64 __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  v3 = MiInitializeScrubPacket((__int64 *)a1);
  if ( v3 >= 0 )
  {
    MiScrubNode(a1);
    MiReleaseScrubPacket(a1);
  }
  v4 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 40), v4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((_DWORD *)(v1 + 8), 1LL);
  return result;
}
