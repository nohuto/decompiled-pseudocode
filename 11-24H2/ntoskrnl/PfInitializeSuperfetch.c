/*
 * XREFs of PfInitializeSuperfetch @ 0x140C2EA3C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfpScenCtxInitialize @ 0x1407445F0 (PfpScenCtxInitialize.c)
 *     PfpScenCtxStart @ 0x140744624 (PfpScenCtxStart.c)
 *     PfpRpStart @ 0x140745498 (PfpRpStart.c)
 *     PfpPartitionGlobalContextInitialize @ 0x140745850 (PfpPartitionGlobalContextInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140C2EBFC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C2EE60 (PfpParametersInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  int v0; // edx
  int v1; // r8d
  unsigned int v2; // eax
  unsigned int v3; // ecx

  PfpParametersInitialize(&PfGlobals);
  memset_0(&unk_140E67048, 0, 0xA0uLL);
  v0 = -1;
  qword_140E67078 = 0LL;
  qword_140E670A0 = 0LL;
  v1 = -1;
  qword_140E670C0 = 0LL;
  v2 = 8;
  qword_140E670C8 = 0LL;
  v3 = 8;
  unk_140E67048 = 0LL;
  qword_140E67050 = 0LL;
  do
  {
    ++v1;
    v3 >>= 1;
  }
  while ( v3 );
  qword_140E6708C = 0LL;
  dword_140E67088 = v1;
  qword_140E67080 = 0LL;
  do
  {
    ++v0;
    v2 >>= 1;
  }
  while ( v2 );
  qword_140E670B4 = 0LL;
  qword_140E67058 = (__int64)&unk_140E67060;
  dword_140E670B0 = v0;
  qword_140E670A8 = 0LL;
  stru_140E670D0.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140E670D0);
  if ( (xmmword_140E66DF4 & 2) != 0 )
    PfpRpStart((__int64)&unk_140E67048);
  PfpScenCtxInitialize((__int64)&qword_140E66FD0);
  PfpScenCtxStart((__int64)&qword_140E66FD0);
  RunRef.Count = 0LL;
  ExWaitForRundownProtectionRelease(&RunRef);
  _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
  dword_140E67118 |= 1u;
  qword_140E67110 = (__int64)&qword_140E67108;
  qword_140E67108 = (__int64)&qword_140E67108;
  qword_140E670F8 = 0LL;
  qword_140E67100 = 0LL;
  PfSnInitializePrefetcher();
  PfpPartitionGlobalContextInitialize(qword_140E67128);
  PfKernelGlobals = 0x23C34600uLL / KeMaximumIncrement;
  xmmword_140F0E6E8 = 0LL;
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140E66DF0, 4u, 1u);
  return 0LL;
}
