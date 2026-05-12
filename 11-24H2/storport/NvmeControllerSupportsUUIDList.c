/*
 * XREFs of NvmeControllerSupportsUUIDList @ 0x1400BF638
 * Callers:
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14012AD40 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetCommandUUIDIndex @ 0x14012CC10 (NvmeSetCommandUUIDIndex.c)
 * Callees:
 *     NvmeVersionCheck @ 0x1400BFE0C (NvmeVersionCheck.c)
 */

char __fastcall NvmeControllerSupportsUUIDList(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r10

  if ( *(_QWORD *)(a1 + 592) && (unsigned __int8)NvmeVersionCheck(a1, 1LL, 4LL) )
    return v1 & (*(_DWORD *)(v2 + 96) >> 9);
  else
    return 0;
}
