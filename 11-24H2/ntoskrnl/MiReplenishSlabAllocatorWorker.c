/*
 * XREFs of MiReplenishSlabAllocatorWorker @ 0x140498060
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiReplenishSlabAllocatorWorker(__int64 a1)
{
  unsigned __int64 v2; // rdx
  _DWORD *v3; // rsi
  KIRQL v4; // al
  __int64 v5; // rdi
  __int64 *v6; // rbx
  unsigned __int8 v7; // bp

  v2 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned int *)(a1 + 136) >> 4) & 3]);
  if ( *(_QWORD *)(a1 + 104) >= v2 )
    v2 = *(_QWORD *)(a1 + 104);
  MiReplenishSlabAllocator(a1, v2, 0);
  v3 = (_DWORD *)(a1 + 16);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
  v5 = a1 + 216;
  *(_QWORD *)(a1 + 208) = 0LL;
  v6 = *(__int64 **)(a1 + 216);
  v7 = v4;
  while ( v6 != (__int64 *)v5 )
  {
    KeSetEvent((PRKEVENT)(v6 + 2), 0, 0);
    v6 = (__int64 *)*v6;
  }
  return MiReleaseSpinLockExclusive(v3, v7);
}
