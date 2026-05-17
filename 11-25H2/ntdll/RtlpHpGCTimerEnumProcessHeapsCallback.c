/*
 * XREFs of RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180143EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCompact @ 0x18000C974 (RtlpHpHeapCompact.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

__int64 __fastcall RtlpHpGCTimerEnumProcessHeapsCallback(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 || RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(a1 + 56), 1) )
    {
      v1 = RtlpHpHeapCompact(a1, 0x80000000);
      if ( v3 )
        RtlpReleaseDescriptorPseudoGlobalLock(v3, 0);
    }
  }
  return v1;
}
