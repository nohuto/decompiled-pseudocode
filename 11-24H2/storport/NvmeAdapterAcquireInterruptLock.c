/*
 * XREFs of NvmeAdapterAcquireInterruptLock @ 0x1400CC5B8
 * Callers:
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterStopAdapter @ 0x1400D9520 (NvmeAdapterStopAdapter.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall NvmeAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rdi
  unsigned int i; // esi
  struct _KINTERRUPT *v7; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 584);
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(a1 + 144) & 0x800LL) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    v2 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 584) + 104LL) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
    }
  }
  else
  {
    v7 = *(struct _KINTERRUPT **)v3;
    if ( v7 )
      return KeAcquireInterruptSpinLock(v7);
  }
  return v2;
}
