/*
 * XREFs of RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801409A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpHeapCompact @ 0x180066914 (RtlpHpHeapCompact.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18013FF88 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
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
