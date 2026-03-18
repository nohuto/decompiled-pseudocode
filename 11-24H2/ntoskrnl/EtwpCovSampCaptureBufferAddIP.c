/*
 * XREFs of EtwpCovSampCaptureBufferAddIP @ 0x14045ACF0
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140651D44 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1409003C4 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCovSampCaptureBufferAddIP(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 64) = a2;
    *(_WORD *)(a1 + 62) = 1;
    if ( a2 >= 0xFFFF800000000000uLL )
      v3 = v2 | 9;
    else
      v3 = v2 | 0xA;
    *(_DWORD *)(a1 + 56) = v3;
  }
}
