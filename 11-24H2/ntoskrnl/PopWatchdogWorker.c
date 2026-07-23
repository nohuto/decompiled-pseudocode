/*
 * XREFs of PopWatchdogWorker @ 0x1405D5F30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4 (PopUpdateWatchdogNoWorkersEvent.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PopResolveWatchdogParam @ 0x1405D5E74 (PopResolveWatchdogParam.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __fastcall PopWatchdogWorker(__int64 a1)
{
  KIRQL v2; // di
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  LARGE_INTEGER result; // rax
  __m128i v8; // [rsp+40h] [rbp-98h]
  __m128i v9; // [rsp+50h] [rbp-88h]
  __m128i v10; // [rsp+60h] [rbp-78h]
  ULONG BugCheckCode[4]; // [rsp+70h] [rbp-68h]
  __int64 v12; // [rsp+B0h] [rbp-28h]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+8h] BYREF

  *(LARGE_INTEGER *)(a1 + 376) = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v2 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 208)
    && (unsigned __int64)RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart >= *(_QWORD *)(a1 + 304) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 216);
    v9 = *(__m128i *)(a1 + 232);
    v10 = *(__m128i *)(a1 + 248);
    v8 = *(__m128i *)(a1 + 264);
    v12 = *(_QWORD *)(a1 + 280);
    KeReleaseSpinLock(&PopWatchdogLock, v2);
    v3 = PopResolveWatchdogParam(v9.m128i_i64[0], v8.m128i_i8[0]);
    v4 = PopResolveWatchdogParam(_mm_srli_si128(v9, 8).m128i_i64[0], _mm_cvtsi128_si32(_mm_srli_si128(v8, 1)));
    v5 = PopResolveWatchdogParam(v10.m128i_i64[0], _mm_cvtsi128_si32(_mm_srli_si128(v8, 2)));
    BugCheckParameter4 = PopResolveWatchdogParam(
                           _mm_srli_si128(v10, 8).m128i_i64[0],
                           _mm_cvtsi128_si32(_mm_srli_si128(v8, 3)));
    *(LARGE_INTEGER *)(a1 + 384) = RtlGetInterruptTimePrecise(&PerformanceCounter);
    *(_BYTE *)(a1 + 209) = 1;
    if ( !_mm_srli_si128(v8, 8).m128i_u64[0] )
      KeBugCheckEx(BugCheckCode[2], v3, v4, v5, BugCheckParameter4);
    guard_dispatch_icall_no_overrides(v12, BugCheckCode[2]);
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  *(_BYTE *)(a1 + 21) = 0;
  PopUpdateWatchdogNoWorkersEvent(a1);
  KeReleaseSpinLock(&PopWatchdogLock, v2);
  result = RtlGetInterruptTimePrecise(&PerformanceCounter);
  *(LARGE_INTEGER *)(a1 + 392) = result;
  return result;
}
