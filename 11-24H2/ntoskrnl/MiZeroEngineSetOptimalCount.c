/*
 * XREFs of MiZeroEngineSetOptimalCount @ 0x1406910EC
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407FFB34 (MiInitializeZeroEngines.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiZeroEngineSetOptimalCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  __int64 v6; // r14
  KIRQL v7; // al
  int v8; // edx
  unsigned __int8 v9; // r15

  v2 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)(v2 + 48);
  v6 = *(_QWORD *)(v5 + 16) + 57216LL * *(unsigned int *)(v2 + 56);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 15280));
  v8 = 1;
  v9 = v7;
  if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)(v2 + 56) )
    v8 = a2;
  *(_DWORD *)(a1 + 8) = v8;
  if ( !*(_BYTE *)(a1 + 28) )
    *(_BYTE *)(a1 + 28) = 1;
  if ( *(_BYTE *)(a1 + 29) )
  {
    *(_BYTE *)(a1 + 29) = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16948), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 16952), 0, 0);
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(v6 + 15280), v9);
}
