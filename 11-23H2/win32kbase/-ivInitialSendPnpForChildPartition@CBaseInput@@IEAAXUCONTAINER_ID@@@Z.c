/*
 * XREFs of ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EE290
 * Callers:
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3F0 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RimInputTypeToDeviceInputType @ 0x1C006EEF0 (RimInputTypeToDeviceInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32B0 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F33D0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F3508 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivInitialSendPnpForChildPartition(__int64 a1, unsigned int a2)
{
  CInpPushLock *v2; // rbx
  __int64 v4; // rsi
  const struct CONTAINER_ID *v5; // r8
  __int64 i; // rdi
  const struct CONTAINER_ID *v7; // r9
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(CInpPushLock **)(a1 + 1256);
  RIMLockExclusive((__int64)v2);
  v4 = (unsigned int)RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
  IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v4, &v8);
  for ( i = **(_QWORD **)(a1 + 1264); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(unsigned __int8 *)(i + 48) == (_DWORD)v4
      && *(void **)i != TouchExtensibility::hDeviceUser
      && (*(_DWORD *)(i + 200) & 4) == 0 )
    {
      IVRootDeliver::PnP::SendRootPnpCreated(
        *(IVRootDeliver::PnP **)(i + 32),
        (struct RawInputManagerDeviceObject *)&v8,
        v5);
      IVRootDeliver::PnP::SendRootPnp((IVRootDeliver::PnP *)i, (struct DEVICEINFO *)2, (unsigned int)&v8, v7);
    }
  }
  IVRootDeliver::PnP::SendRootPnpSyncState(2LL, (unsigned int)v4, &v8);
  CInpPushLock::UnLockExclusive(v2);
}
