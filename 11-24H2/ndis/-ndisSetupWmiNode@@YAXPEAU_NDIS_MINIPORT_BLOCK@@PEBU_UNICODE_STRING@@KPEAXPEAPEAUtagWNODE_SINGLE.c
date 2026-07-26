/*
 * XREFs of ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0
 * Callers:
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140051E90 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400521B0 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x14007F4D0 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     NdisCoDeleteVc @ 0x1400D15A0 (NdisCoDeleteVc.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisSetupWmiNode(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int128 *a4,
        struct tagWNODE_SINGLE_INSTANCE **a5)
{
  unsigned int v7; // eax
  unsigned int v10; // r15d
  unsigned int v11; // edi
  unsigned int *Pool2; // rax
  unsigned int *v13; // rbx
  _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG v15; // eax
  __int128 v16; // xmm0

  v7 = (a2->Length + 9) & 0xFFFFFFF8;
  v10 = v7 + 64;
  v11 = v7 + 64 + a3;
  if ( v11 < 0x40 || v11 < v7 || v11 < a3 )
  {
    *a5 = 0LL;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, v7 + a3 + 64, 863454286LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      DeviceObject = a1->DeviceObject;
      *Pool2 = v11;
      v15 = IoWMIDeviceObjectToProviderId(DeviceObject);
      v13[2] = 1;
      v13[1] = v15;
      v16 = *a4;
      *((_QWORD *)v13 + 2) = MEMORY[0xFFFFF78000000014];
      LOWORD(v15) = a2->Length;
      *(_OWORD *)(v13 + 6) = v16;
      v13[11] = 10;
      v13[12] = 64;
      v13[14] = v10;
      v13[15] = a3;
      *((_WORD *)v13 + 32) = v15;
      memmove((char *)v13 + 66, a2->Buffer, a2->Length);
    }
    *a5 = (struct tagWNODE_SINGLE_INSTANCE *)v13;
  }
}
