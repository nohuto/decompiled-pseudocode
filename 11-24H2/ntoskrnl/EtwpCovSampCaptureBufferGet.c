/*
 * XREFs of EtwpCovSampCaptureBufferGet @ 0x1404ECF6C
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140922CA4 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     EtwpCovSampLookasidePop @ 0x14045BD10 (EtwpCovSampLookasidePop.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampCaptureBufferGet(__int64 a1)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rbx
  PSLIST_ENTRY result; // rax

  v2 = (unsigned int)*(_QWORD *)(a1 + 8);
  v3 = ((unsigned int)v2 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = (*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2) + 8LL * (v3 ^ (1 << v4)) + 8)
      + 8 * ((v2 >> 4) & 0x1FF)
      + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  result = EtwpCovSampLookasidePop(a1, v5 + 80);
  if ( result )
  {
    *((_WORD *)&result[3].Next + 7) = 0;
    *((_DWORD *)&result[3].Next + 2) = 0;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 312));
  }
  return result;
}
