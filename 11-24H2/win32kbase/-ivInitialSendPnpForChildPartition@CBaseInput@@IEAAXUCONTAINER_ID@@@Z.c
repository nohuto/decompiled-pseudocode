/*
 * XREFs of ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x140217214
 * Callers:
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x140217330 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x140054F78 (RimInputTypeToDeviceInputType.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsExemptInjectionDevice @ 0x140125E9C (IsExemptInjectionDevice.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021AADC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021AC00 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x14021AD38 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivInitialSendPnpForChildPartition(__int64 a1, unsigned int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v4; // rsi
  __int64 i; // rdi
  const struct CONTAINER_ID *v6; // r8
  const struct CONTAINER_ID *v7; // r9
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
  W32AcquirePushLockExclusiveEx(v2, 0);
  v4 = (unsigned int)RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
  IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v4, &v8);
  for ( i = **(_QWORD **)(a1 + 1240); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == (_DWORD)v4 && !IsExemptInjectionDevice(*(_QWORD *)i) && (*(_DWORD *)(i + 184) & 4) == 0 )
    {
      IVRootDeliver::PnP::SendRootPnpCreated(
        *(IVRootDeliver::PnP **)(i + 32),
        (struct RawInputManagerDeviceObject *)&v8,
        v6);
      IVRootDeliver::PnP::SendRootPnp((IVRootDeliver::PnP *)i, (struct DEVICEINFO *)2, (unsigned int)&v8, v7);
    }
  }
  IVRootDeliver::PnP::SendRootPnpSyncState(2LL, (unsigned int)v4, &v8);
  W32ReleasePushLockExclusiveEx(v2, 0LL);
}
