/*
 * XREFs of INCREMENT_ADAPTER_CHANNELS @ 0x140B74DA0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

void __fastcall INCREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx
  int v3; // ecx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
  if ( *(_DWORD *)(a1 + 224) < 3u )
  {
    v3 = *(_DWORD *)(a1 + 216);
    if ( v2 != v3 + 1 )
    {
      ViHalPreprocessOptions(
        byte_140E0E72C,
        "Driver has allocated too many simultaneous adapter channels.",
        11LL,
        (unsigned int)(v2 - v3),
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0xBuLL, (unsigned int)(v2 - *(_DWORD *)(a1 + 216)), 0LL, 0LL, byte_140E0E72C);
    }
  }
}
