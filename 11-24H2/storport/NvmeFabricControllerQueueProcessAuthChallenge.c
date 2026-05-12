/*
 * XREFs of NvmeFabricControllerQueueProcessAuthChallenge @ 0x1400F768C
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     NvmeFabricControllerQueueComputeCtrlAugmentedChallenge @ 0x1400F63E0 (NvmeFabricControllerQueueComputeCtrlAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeHostResponse @ 0x1400F6BC8 (NvmeFabricControllerQueueComputeHostResponse.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueProcessAuthChallenge(__int64 a1, _WORD *a2, UCHAR *a3)
{
  __int64 v6; // rbx
  __int64 i; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  UCHAR *v10; // r8
  int HostDHKey; // ecx
  UCHAR v13[256]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v6 = *(_QWORD *)(a1 + 96) + 1576LL;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + i + 3) = *(_BYTE *)(v6 + i + 8);
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_DWORD *)(v6 + 12);
  memmove((void *)(*(_QWORD *)(a1 + 96) + 1064LL), (const void *)(v6 + 16), *(unsigned __int8 *)(v6 + 6));
  v8 = *(_QWORD *)(a1 + 96);
  v9 = a1;
  if ( *(_BYTE *)(v8 + 4) )
  {
    HostDHKey = NvmeFabricControllerQueueGenerateHostDHKey(a1);
    if ( HostDHKey < 0 )
      return (unsigned int)HostDHKey;
    HostDHKey = NvmeFabricControllerQueueComputeSharedDHValue(a1, v6);
    if ( HostDHKey < 0 )
      return (unsigned int)HostDHKey;
    HostDHKey = NvmeFabricControllerQueueComputeCtrlAugmentedChallenge(a1, *(unsigned __int8 *)(v6 + 6), v13);
    if ( HostDHKey < 0 )
      return (unsigned int)HostDHKey;
    v10 = v13;
    v9 = a1;
  }
  else
  {
    v10 = (UCHAR *)(v8 + 1064);
  }
  HostDHKey = NvmeFabricControllerQueueComputeHostResponse(v9, *(unsigned __int8 *)(v6 + 6), v10, a3);
  if ( HostDHKey >= 0 )
    *a2 = *(unsigned __int8 *)(v6 + 6);
  return (unsigned int)HostDHKey;
}
