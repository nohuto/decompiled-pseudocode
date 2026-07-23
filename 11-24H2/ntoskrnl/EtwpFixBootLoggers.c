/*
 * XREFs of EtwpFixBootLoggers @ 0x140C406E8
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwpStartLoggerThread @ 0x1404A2E5C (EtwpStartLoggerThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140836FE0 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1409CF810 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A0B660 (EtwpFreeSecurityDescriptor.c)
 */

__int64 EtwpFixBootLoggers()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+30h] [rbp-40h] BYREF
  __int16 *v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v1 = EtwpHostSiloState;
  v2 = 4;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v3 = 2LL;
  if ( *(_DWORD *)(EtwpHostSiloState + 16) > 4u )
  {
    do
    {
      v4 = EtwpAcquireLoggerContextByLoggerId(v1, v2, 0);
      v5 = v4;
      if ( v4 )
      {
        if ( *(int *)(v4 + 816) < 0 )
        {
          EtwpGetSecurityDescriptorByGuid((unsigned int *)(v4 + 276), &v13);
          EtwpInitializeLoggerSecurityDescriptor(v5, v13);
          EtwpFreeSecurityDescriptor((void **)&v13);
          ClientSecurityQos.Length = 12;
          ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
          *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
          SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v5 + 704));
          v6 = *(__int64 **)(v5 + 1360);
          *(_QWORD *)(v5 + 304) = EtwpRefTimeSystem;
          EtwpStartLoggerThread(*v6, v5);
        }
        EtwpReleaseLoggerContext((unsigned int *)v5, 0);
      }
      v1 = EtwpHostSiloState;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(EtwpHostSiloState + 16) );
  }
  v7 = 0LL;
  v8 = 2LL;
  do
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)&EtwpBootDeferredGroupMask[v7 / 4]);
    v10 = (__m128)_mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v7 / 0x10]);
    v7 += 16LL;
    *(__m128 *)(&ClientSecurityQos.ContextTrackingMode + v7) = _mm_and_ps(v9, v10);
    --v8;
  }
  while ( v8 );
  if ( (int)EtwpEnableKernelTrace((char *)PerfGlobalGroupMask, v14, (_QWORD *)EtwpHostSiloState, 0) < 0 )
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    do
    {
      PerfGlobalGroupMask[v0] = (__int128)_mm_and_ps(
                                            _mm_andnot_ps(
                                              (__m128)_mm_loadu_si128((const __m128i *)&v14[v0]),
                                              (__m128)_xmm_ffffffffffffffffffffffffffffffff),
                                            (__m128)_mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v0]));
      ++v0;
      --v3;
    }
    while ( v3 );
    KeReleaseMutant(&EtwpGroupMaskMutex, 1, 0, 0);
  }
  return 0LL;
}
