/*
 * XREFs of PfInitializeSuperfetch @ 0x140C2C91C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfpScenCtxInitialize @ 0x140746300 (PfpScenCtxInitialize.c)
 *     PfpScenCtxStart @ 0x140746334 (PfpScenCtxStart.c)
 *     PfpRpStart @ 0x1407471A8 (PfpRpStart.c)
 *     PfpPartitionGlobalContextInitialize @ 0x140747560 (PfpPartitionGlobalContextInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140C2CADC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C2CD40 (PfpParametersInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  int v0; // edx
  int v1; // r8d
  unsigned int v2; // eax
  unsigned int v3; // ecx

  PfpParametersInitialize(&PfGlobals);
  memset_0(&unk_140E66EF8, 0, 0xA0uLL);
  v0 = -1;
  qword_140E66F28 = 0LL;
  qword_140E66F50 = 0LL;
  v1 = -1;
  qword_140E66F70 = 0LL;
  v2 = 8;
  qword_140E66F78 = 0LL;
  v3 = 8;
  unk_140E66EF8 = 0LL;
  qword_140E66F00 = 0LL;
  do
  {
    ++v1;
    v3 >>= 1;
  }
  while ( v3 );
  qword_140E66F3C = 0LL;
  dword_140E66F38 = v1;
  qword_140E66F30 = 0LL;
  do
  {
    ++v0;
    v2 >>= 1;
  }
  while ( v2 );
  qword_140E66F64 = 0LL;
  qword_140E66F08 = (__int64)&unk_140E66F10;
  dword_140E66F60 = v0;
  qword_140E66F58 = 0LL;
  stru_140E66F80.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140E66F80);
  if ( (xmmword_140E66CA4 & 2) != 0 )
    PfpRpStart((__int64)&unk_140E66EF8);
  PfpScenCtxInitialize((__int64)&qword_140E66E80);
  PfpScenCtxStart((__int64)&qword_140E66E80);
  RunRef.Count = 0LL;
  ExWaitForRundownProtectionRelease(&RunRef);
  _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
  dword_140E66FC8 |= 1u;
  qword_140E66FC0 = (__int64)&qword_140E66FB8;
  qword_140E66FB8 = (__int64)&qword_140E66FB8;
  qword_140E66FA8 = 0LL;
  qword_140E66FB0 = 0LL;
  PfSnInitializePrefetcher();
  PfpPartitionGlobalContextInitialize(qword_140E66FD8);
  PfKernelGlobals = 0x23C34600uLL / (unsigned int)KeMaximumIncrement;
  xmmword_140F0E408 = 0LL;
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140E66CA0, 4u, 1u);
  return 0LL;
}
