/*
 * XREFs of MiReplenishSlabAllocatorWorker @ 0x140414340
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
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
