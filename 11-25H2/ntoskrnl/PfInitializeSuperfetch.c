/*
 * XREFs of PfInitializeSuperfetch @ 0x140C1B81C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PfpScenCtxInitialize @ 0x14073A2E0 (PfpScenCtxInitialize.c)
 *     PfpScenCtxStart @ 0x14073A314 (PfpScenCtxStart.c)
 *     PfpRpStart @ 0x14073B188 (PfpRpStart.c)
 *     PfpPartitionGlobalContextInitialize @ 0x14073B540 (PfpPartitionGlobalContextInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140C1B9DC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C1BC3C (PfpParametersInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  int v0; // edx
  int v1; // r8d
  unsigned int v2; // eax
  unsigned int v3; // ecx

  PfpParametersInitialize(&PfGlobals);
  memset_0(&unk_140E66C38, 0, 0xA0uLL);
  v0 = -1;
  qword_140E66C68 = 0LL;
  qword_140E66C90 = 0LL;
  v1 = -1;
  qword_140E66CB0 = 0LL;
  v2 = 8;
  qword_140E66CB8 = 0LL;
  v3 = 8;
  unk_140E66C38 = 0LL;
  qword_140E66C40 = 0LL;
  do
  {
    ++v1;
    v3 >>= 1;
  }
  while ( v3 );
  qword_140E66C7C = 0LL;
  dword_140E66C78 = v1;
  qword_140E66C70 = 0LL;
  do
  {
    ++v0;
    v2 >>= 1;
  }
  while ( v2 );
  qword_140E66CA4 = 0LL;
  qword_140E66C48 = (__int64)&unk_140E66C50;
  dword_140E66CA0 = v0;
  qword_140E66C98 = 0LL;
  stru_140E66CC0.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140E66CC0);
  if ( (xmmword_140E669E4 & 2) != 0 )
    PfpRpStart((__int64)&unk_140E66C38);
  PfpScenCtxInitialize((__int64)&qword_140E66BC0);
  PfpScenCtxStart((__int64)&qword_140E66BC0);
  RunRef.Count = 0LL;
  ExWaitForRundownProtectionRelease(&RunRef);
  _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
  dword_140E66D08 |= 1u;
  qword_140E66D00 = (__int64)&qword_140E66CF8;
  qword_140E66CF8 = (__int64)&qword_140E66CF8;
  qword_140E66CE8 = 0LL;
  qword_140E66CF0 = 0LL;
  PfSnInitializePrefetcher();
  PfpPartitionGlobalContextInitialize(qword_140E66D18);
  PfKernelGlobals = 0x23C34600uLL / KeMaximumIncrement;
  xmmword_140F0DD48 = 0LL;
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140E669E0, 4u, 1u);
  return 0LL;
}
