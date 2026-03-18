/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x14090C2A8
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x14090C614 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampProcessMapAddresses @ 0x14090C670 (EtwpCovSampProcessMapAddresses.c)
 *     EtwpCovSampStackHashCheck @ 0x14090C9AC (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextAddSamples @ 0x14090CD30 (EtwpCovSampContextAddSamples.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned __int64 v6; // rtt
  _QWORD *v7; // rsi
  unsigned int v9; // r14d
  _KAFFINITY_EX *Affinity; // rbp
  unsigned int i; // edi
  int v12; // r12d
  int v13; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-248h] BYREF
  _BYTE v15[512]; // [rsp+50h] [rbp-238h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFE900);
  v6 = stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFE900,
               (stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_140EFE900) )
  {
    KeLeaveCriticalRegion();
    return EtwpCovSampReleaseSamplerRundown(v3);
  }
  v7 = (_QWORD *)(a2 + 64);
  v3 = qword_140EFE8F8;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    EtwpCovSampContextAddSamples(qword_140EFE8F8);
  }
  else if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, a2, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
  {
    v14[0] = 0;
    v9 = *(unsigned __int16 *)(a2 + 62);
    if ( *v7 < 0xFFFF800000000000uLL )
    {
      Affinity = KeGetCurrentThread()->ApcState.Process[4].Affinity;
      if ( !Affinity )
        return EtwpCovSampReleaseSamplerRundown(v3);
    }
    else
    {
      LODWORD(Affinity) = v3 + 1264;
    }
    for ( i = 0; i < v9; i += v12 )
    {
      v12 = 64;
      if ( v9 - i < 0x40 )
        v12 = v9 - i;
      EtwpCovSampProcessMapAddresses((_DWORD)Affinity, v3 + 16, (_DWORD)v7 + 8 * i, v12, (__int64)v15, 64, (__int64)v14);
      if ( v14[0] )
      {
        v13 = EtwpCovSampContextAddSamples(v3);
        if ( v13 != v14[0] )
          break;
      }
    }
  }
  return EtwpCovSampReleaseSamplerRundown(v3);
}
