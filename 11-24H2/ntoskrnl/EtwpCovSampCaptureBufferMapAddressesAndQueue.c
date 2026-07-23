/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140922CA4 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140434AE4 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x140460890 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140922E54 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampProcessMapAddresses @ 0x140922EB0 (EtwpCovSampProcessMapAddresses.c)
 *     EtwpCovSampStackHashCheck @ 0x1409231EC (EtwpCovSampStackHashCheck.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  _KAFFINITY_EX *Affinity; // rcx
  __int16 v9; // ax
  unsigned int v10; // ecx
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  v12 = 0;
  if ( EtwpCovSampCaptureBufferIsEmpty(a2) )
    goto LABEL_11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFEFA0);
  v7 = stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFEFA0,
               (stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_140EFEFA0) )
  {
    KeLeaveCriticalRegionThread();
    goto LABEL_11;
  }
  v3 = qword_140EFEF98;
  if ( (unsigned int)EtwpCovSampStackHashCheck(a1, v5, a2 + 64, *(unsigned __int16 *)(a2 + 62))
    || (Affinity = KeGetCurrentThread()->ApcState.Process[4].Affinity) == 0LL )
  {
LABEL_11:
    if ( a2 )
      EtwpCovSampCaptureBufferRelease(a1, (_SLIST_ENTRY *)a2);
    return EtwpCovSampReleaseSamplerRundown(v3);
  }
  EtwpCovSampProcessMapAddresses(
    (_DWORD)Affinity,
    v3 + 16,
    a2 + 64,
    *(unsigned __int16 *)(a2 + 62),
    a2 + 64,
    *(unsigned __int16 *)(a2 + 60),
    (__int64)&v12);
  v9 = v12;
  v10 = *(_DWORD *)(a2 + 56) & 0xFFFFFFF4;
  *(_DWORD *)(a2 + 56) = v10;
  *(_WORD *)(a2 + 62) = v9;
  if ( v9 )
    *(_DWORD *)(a2 + 56) = v10 | 4;
  EtwpCovSampCaptureBufferQueue(a1, a2);
  return EtwpCovSampReleaseSamplerRundown(v3);
}
