/*
 * XREFs of MiReplenishSlabAllocatorWorker @ 0x14049E140
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiReplenishSlabAllocatorWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rsi
  KIRQL v7; // al
  __int64 v8; // rdi
  __int64 *v9; // rbx
  unsigned __int8 v10; // bp

  v5 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned int *)(a1 + 136) >> 4) & 3]);
  if ( *(_QWORD *)(a1 + 104) >= v5 )
    v5 = *(_QWORD *)(a1 + 104);
  MiReplenishSlabAllocator(a1, v5, 0, a4);
  v6 = (_DWORD *)(a1 + 16);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
  v8 = a1 + 216;
  *(_QWORD *)(a1 + 208) = 0LL;
  v9 = *(__int64 **)(a1 + 216);
  v10 = v7;
  while ( v9 != (__int64 *)v8 )
  {
    KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
    v9 = (__int64 *)*v9;
  }
  return MiReleaseSpinLockExclusive(v6, v10);
}
