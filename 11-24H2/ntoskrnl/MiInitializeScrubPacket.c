/*
 * XREFs of MiInitializeScrubPacket @ 0x1407FDE50
 * Callers:
 *     MiScrubMemoryWorker @ 0x1407FE240 (MiScrubMemoryWorker.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiReleaseScrubPacket @ 0x1407FE164 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  int v2; // r8d
  unsigned int v3; // edi
  ULONG_PTR v5; // r9
  __int64 v6; // rsi
  __int64 PoolMm; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 2) + 1;
  v8 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v2,
    (__int64)&v8);
  v3 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), (__int64)&v8, 15, 0) )
    return 3221225626LL;
  v5 = *((unsigned int *)a1 + 2);
  v6 = *a1;
  a1[22] = 0LL;
  a1[23] = 0LL;
  PoolMm = ExAllocatePoolMm(0x40uLL, 0x1000uLL, 1667450189, v5);
  a1[22] = PoolMm;
  if ( PoolMm )
  {
    a1[24] = *(_QWORD *)(57216LL * *((unsigned int *)a1 + 2) + *(_QWORD *)(*(_QWORD *)(v6 + 48) + 16LL) + 15248);
  }
  else
  {
    v3 = -1073741670;
    MiReleaseScrubPacket(a1);
  }
  return v3;
}
