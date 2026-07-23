/*
 * XREFs of MiScrubMemoryWorker @ 0x1407FE240
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     MiInitializeScrubPacket @ 0x1407FDE50 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1407FE164 (MiReleaseScrubPacket.c)
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 */

void __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax

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
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
    KeSignalGate((volatile signed __int32 *)(v1 + 8), 1LL);
}
