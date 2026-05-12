/*
 * XREFs of NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400F77A8
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeFabricControllerQueueComputeCtrlResponse @ 0x1400F65D0 (NvmeFabricControllerQueueComputeCtrlResponse.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400F69D8 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueProcessCtrlResponse(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  UCHAR *v5; // r8
  int v6; // ebx
  UCHAR Source1[256]; // [rsp+A0h] [rbp-218h] BYREF
  UCHAR v9[256]; // [rsp+1A0h] [rbp-118h] BYREF

  memset_0(v9, 0, sizeof(v9));
  memset_0(Source1, 0, sizeof(Source1));
  v2 = *(_BYTE **)(a1 + 96);
  v3 = a1;
  v4 = (unsigned __int8)v2[1582];
  if ( v2[4] )
  {
    v6 = NvmeFabricControllerQueueComputeHostAugmentedChallenge(a1, v4, v9);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v4 = (unsigned __int8)v2[1582];
    v5 = v9;
    v3 = a1;
  }
  else
  {
    v5 = v2 + 1320;
  }
  v6 = NvmeFabricControllerQueueComputeCtrlResponse(v3, v4, v5, Source1);
  if ( v6 >= 0 && RtlCompareMemory(Source1, v2 + 1592, (unsigned __int8)v2[1582]) != (unsigned __int8)v2[1582] )
  {
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(a1 + 88),
      1,
      2,
      (__int64)L"Controller response did not match",
      (void *)&word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
