/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x140650064
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1404B687C (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x1404341E4 (EtwpCovSampCaptureApcRelease.c)
 */

void __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx
  KSPIN_LOCK *v3; // r14
  void *v4; // rsi
  KIRQL v5; // r15

  if ( *(_DWORD *)(a1 + 716) != *(_DWORD *)(a1 + 712) )
  {
    v1 = (__int64 *)(a1 + 672);
    v2 = *(__int64 **)(a1 + 672);
    if ( v2 != (__int64 *)(a1 + 672) )
    {
      v3 = (KSPIN_LOCK *)(a1 + 632);
      do
      {
        v4 = 0LL;
        v5 = KeAcquireSpinLockRaiseToDpc(v3);
        if ( *((_BYTE *)v2 + 114) )
        {
          v4 = (void *)v2[5];
          if ( v4 )
            ObfReferenceObjectWithTag((PVOID)v2[5], 0x746C6644u);
        }
        KeReleaseSpinLock(v3, v5);
        if ( v4 )
        {
          if ( KeRemoveQueueApc((__int64)(v2 + 4)) )
            EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(v2 - 3));
          ObfDereferenceObjectWithTag(v4, 0x746C6644u);
        }
        v2 = (__int64 *)*v2;
      }
      while ( v2 != v1 );
    }
  }
}
