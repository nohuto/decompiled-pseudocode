/*
 * XREFs of ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810
 * Callers:
 *     ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14006AF00 (-ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x140010D90 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qLq @ 0x140049F00 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140077AB0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ndisUnprocessAllMiniports @ 0x1401759F0 (ndisUnprocessAllMiniports.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x140175B20 (ndisReferenceNextUnprocessedMiniport.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, int a2, void *a3)
{
  int v5; // edx
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // rsi
  KIRQL v8; // r14
  struct _NDIS_MINIPORT_BLOCK *i; // rax
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xDu,
      0xEu,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      (char)a1,
      5,
      a3);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a1 )
  {
    ndisDevicePnPEventNotifyMiniport(a1, NdisDevicePnPEventPowerProfileChanged, a3, 4u);
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v7 = ndisMiniDriverList;
    v8 = v6;
    if ( ndisMiniDriverList )
    {
      do
      {
        if ( ndisReferenceDriver(v7, 5u) )
        {
          KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
          for ( i = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceNextUnprocessedMiniport((char)v7);
                i;
                i = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceNextUnprocessedMiniport((char)v7) )
          {
            ndisDevicePnPEventNotifyMiniport(i, NdisDevicePnPEventPowerProfileChanged, a3, 4u);
          }
          ndisUnprocessAllMiniports((char)v7);
          v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v7->NextDriver;
          v8 = v10;
          ndisDereferenceDriver(v7, 1, 5u);
        }
        else
        {
          NextDriver = v7->NextDriver;
        }
        v7 = NextDriver;
      }
      while ( NextDriver );
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      13,
      15,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      (char)a1);
  }
}
