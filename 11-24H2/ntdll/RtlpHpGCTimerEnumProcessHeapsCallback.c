/*
 * XREFs of RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801427F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpHeapCompact @ 0x180050D34 (RtlpHpHeapCompact.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180141DD8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

__int64 __fastcall RtlpHpGCTimerEnumProcessHeapsCallback(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx

  v3 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !v5 || (LOBYTE(a2) = 1, RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(a1 + 56), a2, a3)) )
    {
      v3 = RtlpHpHeapCompact(a1, 0x80000000);
      if ( v5 )
        RtlpReleaseDescriptorPseudoGlobalLock(v5, 0);
    }
  }
  return v3;
}
