/*
 * XREFs of NVMeControllerSupportsUUIDList @ 0x14000D6E0
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1400111F0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140011650 (QueryProtocolInfoLogPageData.c)
 *     BuildIdentifyCommandGeneric @ 0x14001F0F4 (BuildIdentifyCommandGeneric.c)
 *     SetCommandUUIDIndex @ 0x14002663C (SetCommandUUIDIndex.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x14002891C (NVMeGetControllerUUIDListIdentify.c)
 * Callees:
 *     NVMeVersionCheck @ 0x140016FD0 (NVMeVersionCheck.c)
 */

char __fastcall NVMeControllerSupportsUUIDList(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r9

  if ( (unsigned __int8)NVMeVersionCheck(a1, 1LL, 4LL, *(_QWORD *)(a1 + 1560))
    && v2
    && (*(_DWORD *)(v2 + 96) & 0x200) != 0 )
  {
    return v1;
  }
  else
  {
    return 0;
  }
}
