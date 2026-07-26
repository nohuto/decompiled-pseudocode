/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400D1188
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140152A70 (ndisIfInitializePhase2.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1400499A0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x140069280 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1400D2904 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140152AD4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x140153264 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x14016E8A0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x14016F360 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase3(void)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v0; // r14
  int Interface; // esi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rdi
  unsigned __int8 v3; // r15
  KIRQL v4; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  KIRQL v6; // bl
  unsigned __int16 v7; // cx
  KIRQL v8; // bl
  KIRQL v9; // al
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF

  v0 = qword_140126AF0;
  Interface = 0;
  while ( v0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
  {
    v2 = v0;
    v0 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v0;
    v3 = 0;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
    if ( NetworkBlock )
    {
LABEL_5:
      *((_QWORD *)v2 + 7) = NetworkBlock;
      if ( !*((_QWORD *)v2 + 213) )
      {
        v7 = *((_WORD *)v2 + 39);
        if ( !v7 )
          goto LABEL_9;
        v11 = (*((_QWORD *)v2 + 9) >> 24) & 0xFFFFFF;
        if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v11, 0, 0) )
        {
          *((_QWORD *)v2 + 9) = 0LL;
LABEL_9:
          v3 = 1;
        }
        Interface = ndisIfCreateInterface(
                      NetworkBlock,
                      v3,
                      (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v2 + 64),
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      NdisIfBlockSourceAutomaticLoopback);
      }
LABEL_11:
      if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( Interface >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
          ndisNsiNotifyClientCompartmentChange(v2, 1LL);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
          *((_DWORD *)v2 + 10) &= ~8u;
          v8 = v9;
          COMPARTMENTBLOCK_DECREMENT_REF(v2);
          goto LABEL_17;
        }
      }
      else
      {
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        if ( Interface >= 0 )
          ndisNsiScheduleCompartmentBlockChangeNotification(v2);
        *((_DWORD *)v2 + 10) &= ~8u;
LABEL_17:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
      }
    }
    else
    {
      Interface = ndisIfCreateNetwork((struct _GUID *)v2 + 5, *((_DWORD *)v2 + 4));
      if ( Interface >= 0 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
        if ( !NetworkBlock )
          goto LABEL_11;
        goto LABEL_5;
      }
    }
  }
  return (unsigned int)Interface;
}
